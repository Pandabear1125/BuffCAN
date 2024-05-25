#include "buffcan.h"

void buffcan_init(BuffCAN_t* pCan) {
	Serial.printf("CAN INIT\n");

	/// enable the main module clocks to allow writing to registers
	buffcan_enable_register_clock(pCan);
	buffcan_enable_module_clock(pCan);

	/// enable the rx and tx pins
	buffcan_enable_rx(pCan);
	buffcan_enable_tx(pCan, false);

	/// enable the module (this does nothing if Teensy was just powered on)
	buffcan_mode_exit_disable(pCan);

	/// enter into freeze mode (this does nothing if Teensy was just powered on)
	buffcan_mode_enter_freeze(pCan);

	/// configure the MCR register
	// enable the RX FIFO
	buffcan_enable_fifo(pCan);
	// allow Wake Up interrupt generation and Self Wake Up
	buffcan_enable_self_wake(pCan);
	// enable TX/RX warning interrupts
	buffcan_enable_warning_int(pCan);
	// enable individual mailbox masking
	buffcan_enable_mailbox_masking(pCan);
	// enable local priority to Message Buffers
	buffcan_enable_local_priority(pCan);
	// set the fifo filter format
	buffcan_fifo_set_filter_format(pCan, B);
	// set the max message buffer count
	buffcan_set_mb_count(pCan, 55);

	/// configure the CTRL1/2 registers


	/// configure the Message Buffers


	/// configure the RXIMR registers


	/// exit freeze mode
	buffcan_mode_exit_freeze(pCan);

	buffcan_print_MCR(pCan);
	Serial.printf("CAN INIT FINISHED\n");
}

void buffcan_reset(BuffCAN_t* pCan) {
	// assert the MCR[SOFT_RST] bit
	*(vptr_t)FLEXCANx_MCR(pCan->bus) |= FLEXCANx_MCR_SOFT_RST;

	// block until FlexCAN negates this bit
	while (*(vptr_t)FLEXCANx_MCR(pCan->bus) & FLEXCANx_MCR_SOFT_RST);

	// re-initialize CAN
	buffcan_init(pCan);
}

////////////////////////////////////////
// FlexCAN Configuration Functions    //
////////////////////////////////////////

void buffcan_enable_register_clock(BuffCAN_t* pCan) {
	// assert can1_serial_clk_enable and can1_clk_enable
	if (pCan->bus == CAN1)
		CCM_CCGR0 |= 0x0003C000;
	// assert can2_serial_clk_enable and can2_clk_enable
	else if (pCan->bus == CAN2)
		CCM_CCGR0 |= 0x003C0000;
	// assert can3_serial_clk_enable and can3_clk_enable
	else if (pCan->bus == CAN3)
		CCM_CCGR7 |= 0x000003C0;
}

void buffcan_enable_module_clock(BuffCAN_t* pCan) {
	// set 0b01 in CLK_SEL to enable the 24MH osc_clk
	// set 0b000000 in CLK_PODF to divide the above clock by 1
	CCM_CSCMR2 = (CCM_CSCMR2 & 0xFFFFFC03) | CCM_CSCMR2_CAN_CLK_SEL(0b01) | CCM_CSCMR2_CAN_CLK_PODF(0b000000);
}

void buffcan_enable_rx(BuffCAN_t* pCan) {
	if (pCan->bus == CAN1) {
		// from the Teensy electrical wiring schematic, Teensy pin 23 for CRX1 is wired to GPIO_AD_B1_O9
		
		// enable ALT2 for the IOMUXC_FLEXCAN1_RX_SELECT_INPUT register
		IOMUXC_FLEXCAN1_RX_SELECT_INPUT = (IOMUXC_FLEXCAN1_RX_SELECT_INPUT & 0xFFFFFFFC) | 0x00000002;
		// enable ALT2 for the MUX GPIO and set SION
		IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_09 = (IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_09 & 0xFFFFFFE0) | 0x00000012;
		// set the default settings for this pin
		IOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_09 = (IOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_09 & 0xFFFE0706) | 0x000010B0;
	} else if (pCan->bus == CAN2) {
		// from the Teensy electrical wiring schematic, Teensy pin 0 for CRX2 is wired to GPIO_AD_B0_03

		// enable ALT0 for the IOMUXC_FLEXCAN2_RX_SELECT_INPUT register
		IOMUXC_FLEXCAN2_RX_SELECT_INPUT = (IOMUXC_FLEXCAN2_RX_SELECT_INPUT & 0xFFFFFFFC) | 0x00000001;
		// enable ALT0 for the MUX GPIO and set SION
		IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_03 = (IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_03 & 0xFFFFFFE0) | 0x00000010;
		// set the default settings for this pin
		IOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_03 = (IOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_03 & 0xFFFE0706) | 0x000010B0;
	} else if (pCan->bus == CAN3) {
		// from the Teensy electrical wiring schematic, Teensy pin 30 for CRX3 is wired to GPIO_EMC_37

		// enable ALT9 for the IOMUXC_FLEXCAN2_RX_SELECT_INPUT register
		IOMUXC_FLEXCAN2_RX_SELECT_INPUT = (IOMUXC_FLEXCAN2_RX_SELECT_INPUT & 0xFFFFFFFC) | 0x00000001;
		// enable ALT9 for the MUX GPIO and set SION
		IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_37 = (IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_37 & 0xFFFFFFE0) | 0x00000019;
		// set the default settings for this pin
		IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_37 = (IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_37 & 0xFFFE0706) | 0x000010B0;
	}
}

void buffcan_enable_tx(BuffCAN_t* pCan, uint8_t alt_tx) {
	if (pCan->bus == CAN1) {
		// from the Teensy electrical wiring schematic, Teensy pin 22 for CRX1 is wired to GPIO_AD_B1_O8
		if (alt_tx) {
			// enable ALT2 for the MUX GPIO and set SION
			IOMUXC_SW_MUX_CTL_PAD_GPIO_B0_02 = (IOMUXC_SW_MUX_CTL_PAD_GPIO_B0_02 & 0xFFFFFFE0) | 0x00000012;
			// set the default settings for this pin
			IOMUXC_SW_PAD_CTL_PAD_GPIO_B0_02 = (IOMUXC_SW_PAD_CTL_PAD_GPIO_B0_02 & 0xFFFE0706) | 0x000010B0;
		} else {
			// enable ALT2 for the MUX GPIO and set SION
			IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_08 = (IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_08 & 0xFFFFFFE0) | 0x00000012;
			// set the default settings for this pin
			IOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_08 = (IOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_08 & 0xFFFE0706) | 0x000010B0;
		}
	} else if (pCan->bus == CAN2) {
		// from the Teensy electrical wiring schematic, Teensy pin 1 for CRX2 is wired to GPIO_AD_B0_02

		// enable ALT0 for the MUX GPIO and set SION
		IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_02 = (IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_02 & 0xFFFFFFE0) | 0x00000010;
		// set the default settings for this pin
		IOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_02 = (IOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_02 & 0xFFFE0706) | 0x000010B0;
	} else if (pCan->bus == CAN3) {
		// from the Teensy electrical wiring schematic, Teensy pin 31 for CRX3 is wired to GPIO_EMC_36

		// enable ALT9 for the MUX GPIO and set SION
		IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_36 = (IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_36 & 0xFFFFFFE0) | 0x00000019;
		// set the default settings for this pin
		IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_36 = (IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_36 & 0xFFFE0706) | 0x000010B0;
	}
}


void buffcan_disable_register_clock(BuffCAN_t* pCan) {
	// negate can1_serial_clk_enable and can1_clk_enable
	if (pCan->bus == CAN1)
		CCM_CCGR0 &= ~0x0003C000;
	// negate can2_serial_clk_enable and can2_clk_enable
	else if (pCan->bus == CAN2)
		CCM_CCGR0 &= ~0x003C0000;
	// negate can3_serial_clk_enable and can3_clk_enable
	else if (pCan->bus == CAN3)
		CCM_CCGR7 &= ~0x000003C0;
}

void buffcan_disable_module_clock(BuffCAN_t* pCan) {
	// set 0b11 in CLK_SEL to disable FlexCAN clock
	// value in CLK_PODF does not matter
	CCM_CSCMR2 = (CCM_CSCMR2 & 0xFFFFFC03) | CCM_CSCMR2_CAN_CLK_SEL(0b11) | CCM_CSCMR2_CAN_CLK_PODF(0b000000);
}

void buffcan_disable_rx(BuffCAN_t* pCan) {
	// reset the respecive GPIO settings to their defaults
	if (pCan->bus == CAN1) {
		// from the Teensy electrical wiring schematic, Teensy pin 23 for CRX1 is wired to GPIO_AD_B1_O9
		
		// enable ALT2 for the IOMUXC_FLEXCAN1_RX_SELECT_INPUT register
		IOMUXC_FLEXCAN1_RX_SELECT_INPUT = (IOMUXC_FLEXCAN1_RX_SELECT_INPUT & 0xFFFFFFFC) | 0x00000000;
		// enable ALT2 for the MUX GPIO and set SION
		IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_09 = (IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_09 & 0xFFFFFFE0) | 0x00000005;
		// set the default settings for this pin
		IOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_09 = (IOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_09 & 0xFFFE0706) | 0x000010B0;
	} else if (pCan->bus == CAN2) {
		// from the Teensy electrical wiring schematic, Teensy pin 0 for CRX2 is wired to GPIO_AD_B0_03

		// enable ALT0 for the IOMUXC_FLEXCAN2_RX_SELECT_INPUT register
		IOMUXC_FLEXCAN2_RX_SELECT_INPUT = (IOMUXC_FLEXCAN2_RX_SELECT_INPUT & 0xFFFFFFFC) | 0x00000000;
		// enable ALT0 for the MUX GPIO and set SION
		IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_03 = (IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_03 & 0xFFFFFFE0) | 0x00000005;
		// set the default settings for this pin
		IOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_03 = (IOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_03 & 0xFFFE0706) | 0x000010B0;
	} else if (pCan->bus == CAN3) {
		// from the Teensy electrical wiring schematic, Teensy pin 30 for CRX3 is wired to GPIO_EMC_37

		// enable ALT9 for the IOMUXC_FLEXCAN2_RX_SELECT_INPUT register
		IOMUXC_FLEXCAN2_RX_SELECT_INPUT = (IOMUXC_FLEXCAN2_RX_SELECT_INPUT & 0xFFFFFFFC) | 0x00000000;
		// enable ALT9 for the MUX GPIO and set SION
		IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_37 = (IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_37 & 0xFFFFFFE0) | 0x00000005;
		// set the default settings for this pin
		IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_37 = (IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_37 & 0xFFFE0706) | 0x000010B0;
	}
}

void buffcan_disable_tx(BuffCAN_t* pCan, uint8_t alt_tx) {
	// reset the respective GPIO settings to their defaults
	if (pCan->bus == CAN1) {
		// from the Teensy electrical wiring schematic, Teensy pin 22 for CRX1 is wired to GPIO_AD_B1_O8
		if (alt_tx) {
			// enable ALT2 for the MUX GPIO and set SION
			IOMUXC_SW_MUX_CTL_PAD_GPIO_B0_02 = (IOMUXC_SW_MUX_CTL_PAD_GPIO_B0_02 & 0xFFFFFFE0) | 0x00000005;
			// set the default settings for this pin
			IOMUXC_SW_PAD_CTL_PAD_GPIO_B0_02 = (IOMUXC_SW_PAD_CTL_PAD_GPIO_B0_02 & 0xFFFE0706) | 0x000010B0;
		} else {
			// enable ALT2 for the MUX GPIO and set SION
			IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_08 = (IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_08 & 0xFFFFFFE0) | 0x00000005;
			// set the default settings for this pin
			IOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_08 = (IOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_08 & 0xFFFE0706) | 0x000010B0;
		}
	} else if (pCan->bus == CAN2) {
		// from the Teensy electrical wiring schematic, Teensy pin 1 for CRX2 is wired to GPIO_AD_B0_02

		// enable ALT0 for the MUX GPIO and set SION
		IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_02 = (IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_02 & 0xFFFFFFE0) | 0x00000005;
		// set the default settings for this pin
		IOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_02 = (IOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_02 & 0xFFFE0706) | 0x000010B0;
	} else if (pCan->bus == CAN3) {
		// from the Teensy electrical wiring schematic, Teensy pin 31 for CRX3 is wired to GPIO_EMC_36

		// enable ALT9 for the MUX GPIO and set SION
		IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_36 = (IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_36 & 0xFFFFFFE0) | 0x00000005;
		// set the default settings for this pin
		IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_36 = (IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_36 & 0xFFFE0706) | 0x000010B0;
	}
}

////////////////////////////////////////
// Feature Functions                  //
////////////////////////////////////////

void buffcan_enable_fifo(BuffCAN_t* pCan) {
	// assert the MCR[RFEN] bit
	*(vptr_t)FLEXCANx_MCR(pCan->bus) |= FLEXCANx_MCR_FREN;
}

void buffcan_enable_self_wake(BuffCAN_t* pCan) {
	// assert the MCR[WAK_MSK] bit
	*(vptr_t)FLEXCANx_MCR(pCan->bus) |= FLEXCANx_MCR_WAK_MSK;

	// assert the MCR[SLF_WAK] bit
	*(vptr_t)FLEXCANx_MCR(pCan->bus) |= FLEXCANx_MCR_SLF_WAK;

	// assert the MCR[WAK_SRC] bit
	// this enables the low pass filter to prevent noise from waking FlexCAN
	*(vptr_t)FLEXCANx_MCR(pCan->bus) |= FLEXCANx_MCR_WAK_SRC;
}

void buffcan_enable_warning_int(BuffCAN_t* pCan) {
	// assert the MCR[WRN_EN] bit
	*(vptr_t)FLEXCANx_MCR(pCan->bus) |= FLEXCANx_MCR_WRN_EN;
}

void buffcan_enable_self_reception(BuffCAN_t* pCan) {
	// negate the MCR[SRX_DIS] bit
	*(vptr_t)FLEXCANx_MCR(pCan->bus) &= ~FLEXCANx_MCR_SRX_DIS;
}

void buffcan_enable_mailbox_masking(BuffCAN_t* pCan) {
	// assert the MCR[IRMQ] bit
	*(vptr_t)FLEXCANx_MCR(pCan->bus) |= FLEXCANx_MCR_IRMQ;
}

void buffcan_enable_local_priority(BuffCAN_t* pCan) {
	// assert the MCR[LPRIO_EN] bit
	*(vptr_t)FLEXCANx_MCR(pCan->bus) |= FLEXCANx_MCR_LPRIO_EN;
}

void buffcan_enable_tx_abort(BuffCAN_t* pCan) {
	// assert the MCR[AEN] bit
	*(vptr_t)FLEXCANx_MCR(pCan->bus) |= FLEXCANx_MCR_AEN;
}


void buffcan_disable_fifo(BuffCAN_t* pCan) {
	// negate the MCR[RFEN] bit
	*(vptr_t)FLEXCANx_MCR(pCan->bus) &= ~FLEXCANx_MCR_FREN;
}

void buffcan_disable_self_wake(BuffCAN_t* pCan) {
	// negate the MCR[WAK_MSK] bit
	*(vptr_t)FLEXCANx_MCR(pCan->bus) &= ~FLEXCANx_MCR_WAK_MSK;

	// negate the MCR[SLF_WAK] bit
	*(vptr_t)FLEXCANx_MCR(pCan->bus) &= ~FLEXCANx_MCR_SLF_WAK;

	// negate the MCR[WAK_SRC] bit
	// this disables the low pass filter to prevent noise from waking FlexCAN
	*(vptr_t)FLEXCANx_MCR(pCan->bus) &= ~FLEXCANx_MCR_WAK_SRC;

}

void buffcan_disable_warning_int(BuffCAN_t* pCan) {
	// negate the MCR[WRN_EN] bit
	*(vptr_t)FLEXCANx_MCR(pCan->bus) &= ~FLEXCANx_MCR_WRN_EN;
}

void buffcan_disable_self_reception(BuffCAN_t* pCan) {
	// assert the MCR[SRX_DIS] bit
	*(vptr_t)FLEXCANx_MCR(pCan->bus) |= FLEXCANx_MCR_SRX_DIS;
}

void buffcan_disable_mailbox_masking(BuffCAN_t* pCan) {
	// negate the MCR[IRMQ] bit
	*(vptr_t)FLEXCANx_MCR(pCan->bus) &= ~FLEXCANx_MCR_IRMQ;
}

void buffcan_disable_local_priority(BuffCAN_t* pCan) {
	// negate the MCR[LPRIO_EN] bit
	*(vptr_t)FLEXCANx_MCR(pCan->bus) &= ~FLEXCANx_MCR_LPRIO_EN;
}

void buffcan_disable_tx_abort(BuffCAN_t* pCan) {
	// negate the MCR[AEN] bit
	*(vptr_t)FLEXCANx_MCR(pCan->bus) &= ~FLEXCANx_MCR_AEN;
}

////////////////////////////////////////
// FlexCAN Parameter Functions        //
////////////////////////////////////////

void buffcan_set_mb_count(BuffCAN_t* pCan, uint8_t mb_count) {
	// verify the mb_count is valid
	if (mb_count > 64) return;

	// set mb_count to the MCR[MAXMB] field
	*(vptr_t)FLEXCANx_MCR(pCan->bus) = (*(vptr_t)FLEXCANx_MCR(pCan->bus) & ~FLEXCANx_MCR_MAXMB) | (mb_count & FLEXCANx_MCR_MAXMB);
}

////////////////////////////////////////
// FIFO Functions                     //
////////////////////////////////////////

void buffcan_fifo_set_filter_format(BuffCAN_t* pCan, FIFOFilterFormat format) {
	// set the MCR[IDAM] field respective to what format is used
	*(vptr_t)FLEXCANx_MCR(pCan->bus) = (*(vptr_t)FLEXCANx_MCR(pCan->bus) & ~FLEXCANx_MCR_IDAM) | ((format << 8) & FLEXCANx_MCR_IDAM);
}



////////////////////////////////////////
// Mode Switch Functions              //
////////////////////////////////////////

void buffcan_mode_enter_freeze(BuffCAN_t* pCan) {
	// assert the MCR[FRZ] and the MCR[HALT] bit to trigger freeze mode
	*(vptr_t)FLEXCANx_MCR(pCan->bus) |= FLEXCANx_MCR_FRZ | FLEXCANx_MCR_HALT;

	// block until FlexCAN acknowledges
	while (!(*(vptr_t)FLEXCANx_MCR(pCan->bus) & FLEXCANx_MCR_FRZ_ACK));
}

void buffcan_mode_enter_listen_only(BuffCAN_t* pCan) {
	// assert the CTRL1[LOM] bit
	*(vptr_t)FLEXCANx_CTRL1(pCan->bus) |= FLEXCANx_CTRL1_LOM;
}

void buffcan_mode_enter_loop_back(BuffCAN_t* pCan) {
	// assert the CTRL1[LPB] bit
	*(vptr_t)FLEXCANx_CTRL1(pCan->bus) |= FLEXCANx_CTRL1_LPB;
}

void buffcan_mode_enter_disable(BuffCAN_t* pCan) {
	// assert the MCR[MDIS] bit to disable FlexCAN
	*(vptr_t)FLEXCANx_MCR(pCan->bus) |= FLEXCANx_MCR_MDIS;

	// block until MCR[LPM] acknowledgement
	while (!(*(vptr_t)FLEXCANx_MCR(pCan->bus) & FLEXCANx_MCR_LPM_ACK));
}

void buffcan_mode_enter_stop(BuffCAN_t* pCan) {
	if (pCan->bus == CAN1) {
		// assert the CAN1_STOP_REQ bit in the GPR4 register
		IOMUXC_GPR_GPR4 |= IOMUXC_GPR_GPR4_CAN1_STOP_REQ;

		// block until acknowledgement
		while (!(IOMUXC_GPR_GPR4 & IOMUXC_GPR_GPR4_CAN1_STOP_ACK));
	} else if (pCan->bus == CAN2) {
		// assert the CAN2_STOP_REQ bit in the GPR4 register
		IOMUXC_GPR_GPR4 |= IOMUXC_GPR_GPR4_CAN2_STOP_REQ;

		// block until acknowledgement
		while (!(IOMUXC_GPR_GPR4 & IOMUXC_GPR_GPR4_CAN2_STOP_ACK));
	} else if (pCan->bus == CAN3) {
		// assert the CANFD_STOP_REQ bit in the GPR13 register
		IOMUXC_GPR_GPR13 |= IOMUXC_GPR_GPR13_CANFD_STOP_REQ;

		// block until acknowledgement
		while (!(IOMUXC_GPR_GPR13 & IOMUXC_GPR_GPR13_CANFD_STOP_ACK));
	}
}


void buffcan_mode_exit_freeze(BuffCAN_t* pCan) {
	// negate the MCR[FRZ] and the MCR[HALT] bits to trigger an exit from freeze mode
	*(vptr_t)FLEXCANx_MCR(pCan->bus) &= ~(FLEXCANx_MCR_FRZ | FLEXCANx_MCR_HALT);

	// block until FlexCAN acknowledges
	while (*(vptr_t)FLEXCANx_MCR(pCan->bus) & FLEXCANx_MCR_FRZ_ACK);
}

void buffcan_mode_exit_listen_only(BuffCAN_t* pCan) {
	// negate the CTRL1[LOM] bit
	*(vptr_t)FLEXCANx_CTRL1(pCan->bus) &= ~FLEXCANx_CTRL1_LOM;
}

void buffcan_mode_exit_loop_back(BuffCAN_t* pCan) {
	// negate the CTRL1[LPB] bit
	*(vptr_t)FLEXCANx_CTRL1(pCan->bus) &= ~FLEXCANx_CTRL1_LPB;
}

void buffcan_mode_exit_disable(BuffCAN_t* pCan) {
	// negate the MCR[MDIS] bit to enable FlexCAN
	*(vptr_t)FLEXCANx_MCR(pCan->bus) &= ~FLEXCANx_MCR_MDIS;

	// block while MCR[LPM] acknowledgement
	while (*(vptr_t)FLEXCANx_MCR(pCan->bus) & FLEXCANx_MCR_LPM_ACK);

}

void buffcan_mode_exit_stop(BuffCAN_t* pCan) {
	if (pCan->bus == CAN1) {
		// assert the CAN1_STOP_REQ bit in the GPR4 register
		IOMUXC_GPR_GPR4 &= ~IOMUXC_GPR_GPR4_CAN1_STOP_REQ;

		// block until acknowledgement
		while (IOMUXC_GPR_GPR4 & IOMUXC_GPR_GPR4_CAN1_STOP_ACK);
	} else if (pCan->bus == CAN2) {
		// assert the CAN2_STOP_REQ bit in the GPR4 register
		IOMUXC_GPR_GPR4 &= ~IOMUXC_GPR_GPR4_CAN2_STOP_REQ;

		// block until acknowledgement
		while (IOMUXC_GPR_GPR4 & IOMUXC_GPR_GPR4_CAN2_STOP_ACK);
	} else if (pCan->bus == CAN3) {
		// assert the CANFD_STOP_REQ bit in the GPR13 register
		IOMUXC_GPR_GPR13 &= ~IOMUXC_GPR_GPR13_CANFD_STOP_REQ;

		// block until acknowledgement
		while (IOMUXC_GPR_GPR13 & IOMUXC_GPR_GPR13_CANFD_STOP_ACK);
	}
}

////////////////////////////////////////
// Debug Functions                    //
////////////////////////////////////////

void buffcan_print_MCR(BuffCAN_t* pCan) {
	uint32_t mcr = *(vptr_t)FLEXCANx_MCR(pCan->bus);
	Serial.printf(
		"MCR: %0.8x\n"
		"MDIS: %b\tFRZ: %b\tRFEN: %b\tHALT: %b\nNOT_RDY: %b\tWAK_MSK: %b\tSOFT_RST: %b\tFRZ_ACK: %b\nSUPV: %b\tSLF_WAK: %b\tWRN_EN: %b\tLPM_ACK: %b\nWAK_SRC: %b\tSRX_DIS: %b\tIRMQ: %b\tLPRIO_EN: %b\nAEN: %b\tIDAM: %0.2b\tMAXMB: %0.7b\n",
		mcr,
		!!(mcr & FLEXCANx_MCR_MDIS),
		!!(mcr & FLEXCANx_MCR_FRZ),
		!!(mcr & FLEXCANx_MCR_FREN),
		!!(mcr & FLEXCANx_MCR_HALT),
		!!(mcr & FLEXCANx_MCR_NOTRDY),
		!!(mcr & FLEXCANx_MCR_WAK_MSK),
		!!(mcr & FLEXCANx_MCR_SOFT_RST),
		!!(mcr & FLEXCANx_MCR_FRZ_ACK),
		!!(mcr & FLEXCANx_MCR_SUPV),
		!!(mcr & FLEXCANx_MCR_SLF_WAK),
		!!(mcr & FLEXCANx_MCR_WRN_EN),
		!!(mcr & FLEXCANx_MCR_LPM_ACK),
		!!(mcr & FLEXCANx_MCR_WAK_SRC),
		!!(mcr & FLEXCANx_MCR_SRX_DIS),
		!!(mcr & FLEXCANx_MCR_IRMQ),
		!!(mcr & FLEXCANx_MCR_LPRIO_EN),
		!!(mcr & FLEXCANx_MCR_AEN),
		(mcr & FLEXCANx_MCR_IDAM) >> 8,
		(mcr & FLEXCANx_MCR_MAXMB)
	);
}


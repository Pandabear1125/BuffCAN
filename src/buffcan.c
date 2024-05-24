#include "buffcan.h"

void buffcan_init(BuffCAN_t* pCan) {
	Serial.printf("CAN INIT\n");

	Serial.printf("MCR: %0.8x\n", *(vptr_t)FLEXCANx_MCR(pCan->bus));

	// enable the main module clocks to allow writing to registers
	buffcan_enable_register_clock(pCan);
	buffcan_enable_module_clock(pCan);

	// enable the module (this does nothing if Teensy was just powered on)
	buffcan_enable_module(pCan);

	buffcan_enable_rx(pCan);
	buffcan_enable_tx(pCan, false);


	buffcan_print_MCR(pCan);
}

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

void buffcan_enable_module(BuffCAN_t* pCan) {
	// negate the MCR[MDIS] bit to enable FlexCAN
	*(vptr_t)FLEXCANx_MCR(pCan->bus) &= ~FLEXCANx_MCR_MDIS;

	// block while MCR[LPM] acknowledgement
	while (*(vptr_t)FLEXCANx_MCR(pCan->bus) & FLEXCANx_MCR_LPM_ACK);
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

void buffcan_enable_tx(BuffCAN_t* pCan, int alt_tx) {
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

void buffcan_disable_module(BuffCAN_t* pCan) {
	// assert the MCR[MDIS] bit to disable FlexCAN
	*(vptr_t)FLEXCANx_MCR(pCan->bus) |= FLEXCANx_MCR_MDIS;

	// block until MCR[LPM] acknowledgement
	while (!(*(vptr_t)FLEXCANx_MCR(pCan->bus) & FLEXCANx_MCR_LPM_ACK));
}

void buffcan_mode_enter_freeze(BuffCAN_t* pCan) {
	// assert the MCR[FRZ] and the MCR[HALT] bit to trigger freeze mode
	*(vptr_t)FLEXCANx_MCR(pCan->bus) |= FLEXCANx_MCR_FRZ | FLEXCANx_MCR_HALT;

	// block until FlexCAN acknowledges
	while (!(*(vptr_t)FLEXCANx_MCR(pCan->bus) & FLEXCANx_MCR_FRZ_ACK));
}

void buffcan_mode_exit_freeze(BuffCAN_t* pCan) {
	// negate the MCR[FRZ] and the MCR[HALT] bits to trigger an exit from freeze mode
	*(vptr_t)FLEXCANx_MCR(pCan->bus) &= ~(FLEXCANx_MCR_FRZ | FLEXCANx_MCR_HALT);

	// block until FlexCAN acknowledges
	while (*(vptr_t)FLEXCANx_MCR(pCan->bus) & FLEXCANx_MCR_FRZ_ACK);
}

void buffcan_print_MCR(BuffCAN_t* pCan) {
	uint32_t mcr = *(vptr_t)FLEXCANx_MCR(pCan->bus);
	Serial.printf(
		"MCR: %0.8x\n"
		"MDIS: %b\tFRZ: %b\tRFEN: %b\tHALT: %b\nNOT_RDY: %b\tWAK_MSK: %b\tSOFT_RST: %b\tFRZ_ACK: %b\nSUPV: %b\tSLF_WAK: %b\tWRN_EN: %b\tLPM_ACK: %b\nWAK_SRC: %b\tSRX_DIS: %b\tIRMQ: %b\tLPRIO_EN: %b\nAEN: %b\tIDAM: %b\tMAXMB: %b\n",
		mcr,
		!!(mcr & FLEXCANx_MCR_MDIS),
		!!(mcr & FLEXCANx_MCR_FRZ),
		!!(mcr & FLEXCANx_MCR_FEN),
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

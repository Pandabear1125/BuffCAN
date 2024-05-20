#ifndef BUFFCAN_IMXRT1062_REGISTERS_HPP
#define BUFFCAN_IMXRT1062_REGISTERS_HPP

/// @file This file contains the register definitions and information for the i.MX RT1062 ARM Cortex-M7 microcontroller.

////////////////////////////////////////
// FlexCAN Base Module Addresses      //
////////////////////////////////////////
#pragma region BASE ADDRESSES

// FlexCAN BUS 1
#define FLEXCAN1_BASE_		(0x401D0000ul)
#define FLEXCAN1_MB_BASE_	(0x401D0080ul)
#define FLEXCAN1_MB_END_	(0x401D047Ful)
#define FLEXCAN1_END_		(0x401D3FFFul)

// FlexCAN BUS 2
#define FLEXCAN2_BASE_		(0x401D4000ul)
#define FLEXCAN2_MB_BASE_	(0x401D4080ul)
#define FLEXCAN2_MB_END_	(0x401D447Ful)
#define FLEXCAN2_END_		(0x401D7FFFul)

// FlexCAN BUS 3
#define FLEXCAN3_BASE_		(0x401D8000ul)
#define FLEXCAN3_MB_BASE_	(0x401D8080ul)
#define FLEXCAN3_MB_END		(0x401D847Ful)
#define FLEXCAN3_END_		(0x401DBFFFul)

#pragma endregion // BASE ADDRESSES

////////////////////////////////////////
// FlexCAN Register Offsets           //
////////////////////////////////////////
#pragma region BASE REGISTERS

//// FlexCAN BUS 1

// Module Configuration Register (R/W)
#define FLEXCAN1_MCR_			(FLEXCAN1_BASE_ + 0x0000ul)
// Control 1 Register (R/W)
#define FLEXCAN1_CTRL1_			(FLEXCAN1_BASE_ + 0x0004ul)
// Free Running Timer Register (R/W)
#define FLEXCAN1_TIMER_			(FLEXCAN1_BASE_ + 0x0008ul)
// Receiving Mailboxes Global Mask Register (R/W)
#define FLEXCAN1_RXMGMASK_		(FLEXCAN1_BASE_ + 0x0010ul)
// Receiving Buffer 14 Mask Register (R/W)
#define FLEXCAN1_RX14MASK_		(FLEXCAN1_BASE_ + 0x0014ul)
// Receiving Buffer 15 Mask Register (R/W)
#define FLEXCAN1_RX15MASK_		(FLEXCAN1_BASE_ + 0x0018ul)
// Error Counter Register (R/W)
#define FLEXCAN1_ECR_			(FLEXCAN1_BASE_ + 0x001Cul)
// Error and Status 1 Register (R/W)
#define FLEXCAN1_ESR1_			(FLEXCAN1_BASE_ + 0x0020ul)
// Interrupt Masks 2 Register (R/W)
#define FLEXCAN1_IMASK2_		(FLEXCAN1_BASE_ + 0x0024ul)
// Interrupt Masks 1 Register (R/W)
#define FLEXCAN1_IMASK1_		(FLEXCAN1_BASE_ + 0x0028ul)
// Interrupt Flags 2 Register (R/W)
#define FLEXCAN1_IFLAG2_		(FLEXCAN1_BASE_ + 0x002Cul)
// Interrupt Flags 1 Register (R/W)
#define FLEXCAN1_IFLAG1_		(FLEXCAN1_BASE_ + 0x0030ul)
// Control 2 Register (R/W)
#define FLEXCAN1_CTRL2_			(FLEXCAN1_BASE_ + 0x0034ul)
// Error and Status 2 Register (Read Only)
#define FLEXCAN1_ESR2_			(FLEXCAN1_BASE_ + 0x0038ul)
// CRC Register (Read Only)
#define FLEXCAN1_CRCR_			(FLEXCAN1_BASE_ + 0x0044ul)
// Receiving FIFO Global Mask Register (R/W)
#define FLEXCAN1_RXFGMASK_		(FLEXCAN1_BASE_ + 0x0048ul)
// Receiving FIFO Information Register (Read Only)
#define FLEXCAN1_RXFIR_			(FLEXCAN1_BASE_ + 0x004Cul)
// Debug 1 Register (Read Only)
#define FLEXCAN1_DBG1_			(FLEXCAN1_BASE_ + 0x0058ul)
// Debug 2 Register (Read Only)
#define FLEXCAN1_DBG2_			(FLEXCAN1_BASE_ + 0x005Cul)

// Individual Message Buffers  (R/W)
#define FLEXCAN1_MBx(x)			(FLEXCAN1_MB_BASE_ + (x * 0x10ul))

#define FLEXCAN1_MB0_			(FLEXCAN1_MB_BASE_ + 0x0000ul)
#define FLEXCAN1_MB1_			(FLEXCAN1_MB_BASE_ + 0x0010ul)
#define FLEXCAN1_MB2_			(FLEXCAN1_MB_BASE_ + 0x0020ul)
#define FLEXCAN1_MB3_			(FLEXCAN1_MB_BASE_ + 0x0030ul)
#define FLEXCAN1_MB4_			(FLEXCAN1_MB_BASE_ + 0x0040ul)
#define FLEXCAN1_MB5_			(FLEXCAN1_MB_BASE_ + 0x0050ul)
#define FLEXCAN1_MB6_			(FLEXCAN1_MB_BASE_ + 0x0060ul)
#define FLEXCAN1_MB7_			(FLEXCAN1_MB_BASE_ + 0x0070ul)
#define FLEXCAN1_MB8_			(FLEXCAN1_MB_BASE_ + 0x0080ul)
#define FLEXCAN1_MB9_			(FLEXCAN1_MB_BASE_ + 0x0090ul)
#define FLEXCAN1_MB10_			(FLEXCAN1_MB_BASE_ + 0x00A0ul)
#define FLEXCAN1_MB11_			(FLEXCAN1_MB_BASE_ + 0x00B0ul)
#define FLEXCAN1_MB12_			(FLEXCAN1_MB_BASE_ + 0x00C0ul)
#define FLEXCAN1_MB13_			(FLEXCAN1_MB_BASE_ + 0x00D0ul)
#define FLEXCAN1_MB14_			(FLEXCAN1_MB_BASE_ + 0x00E0ul)
#define FLEXCAN1_MB15_			(FLEXCAN1_MB_BASE_ + 0x00F0ul)
#define FLEXCAN1_MB16_			(FLEXCAN1_MB_BASE_ + 0x0100ul)
#define FLEXCAN1_MB17_			(FLEXCAN1_MB_BASE_ + 0x0110ul)
#define FLEXCAN1_MB18_			(FLEXCAN1_MB_BASE_ + 0x0120ul)
#define FLEXCAN1_MB19_			(FLEXCAN1_MB_BASE_ + 0x0130ul)
#define FLEXCAN1_MB20_			(FLEXCAN1_MB_BASE_ + 0x0140ul)
#define FLEXCAN1_MB21_			(FLEXCAN1_MB_BASE_ + 0x0150ul)
#define FLEXCAN1_MB22_			(FLEXCAN1_MB_BASE_ + 0x0160ul)
#define FLEXCAN1_MB23_			(FLEXCAN1_MB_BASE_ + 0x0170ul)
#define FLEXCAN1_MB24_			(FLEXCAN1_MB_BASE_ + 0x0180ul)
#define FLEXCAN1_MB25_			(FLEXCAN1_MB_BASE_ + 0x0190ul)
#define FLEXCAN1_MB26_			(FLEXCAN1_MB_BASE_ + 0x01A0ul)
#define FLEXCAN1_MB27_			(FLEXCAN1_MB_BASE_ + 0x01B0ul)
#define FLEXCAN1_MB28_			(FLEXCAN1_MB_BASE_ + 0x01C0ul)
#define FLEXCAN1_MB29_			(FLEXCAN1_MB_BASE_ + 0x01D0ul)
#define FLEXCAN1_MB30_			(FLEXCAN1_MB_BASE_ + 0x01E0ul)
#define FLEXCAN1_MB31_			(FLEXCAN1_MB_BASE_ + 0x01F0ul)
#define FLEXCAN1_MB32_			(FLEXCAN1_MB_BASE_ + 0x0200ul)
#define FLEXCAN1_MB33_			(FLEXCAN1_MB_BASE_ + 0x0210ul)
#define FLEXCAN1_MB34_			(FLEXCAN1_MB_BASE_ + 0x0220ul)
#define FLEXCAN1_MB35_			(FLEXCAN1_MB_BASE_ + 0x0230ul)
#define FLEXCAN1_MB36_			(FLEXCAN1_MB_BASE_ + 0x0240ul)
#define FLEXCAN1_MB37_			(FLEXCAN1_MB_BASE_ + 0x0250ul)
#define FLEXCAN1_MB38_			(FLEXCAN1_MB_BASE_ + 0x0260ul)
#define FLEXCAN1_MB39_			(FLEXCAN1_MB_BASE_ + 0x0270ul)
#define FLEXCAN1_MB40_			(FLEXCAN1_MB_BASE_ + 0x0280ul)
#define FLEXCAN1_MB41_			(FLEXCAN1_MB_BASE_ + 0x0290ul)
#define FLEXCAN1_MB42_			(FLEXCAN1_MB_BASE_ + 0x02A0ul)
#define FLEXCAN1_MB43_			(FLEXCAN1_MB_BASE_ + 0x02B0ul)
#define FLEXCAN1_MB44_			(FLEXCAN1_MB_BASE_ + 0x02C0ul)
#define FLEXCAN1_MB45_			(FLEXCAN1_MB_BASE_ + 0x02D0ul)
#define FLEXCAN1_MB46_			(FLEXCAN1_MB_BASE_ + 0x02E0ul)
#define FLEXCAN1_MB47_			(FLEXCAN1_MB_BASE_ + 0x02F0ul)
#define FLEXCAN1_MB48_			(FLEXCAN1_MB_BASE_ + 0x0300ul)
#define FLEXCAN1_MB49_			(FLEXCAN1_MB_BASE_ + 0x0310ul)
#define FLEXCAN1_MB50_			(FLEXCAN1_MB_BASE_ + 0x0320ul)
#define FLEXCAN1_MB51_			(FLEXCAN1_MB_BASE_ + 0x0330ul)
#define FLEXCAN1_MB52_			(FLEXCAN1_MB_BASE_ + 0x0340ul)
#define FLEXCAN1_MB53_			(FLEXCAN1_MB_BASE_ + 0x0350ul)
#define FLEXCAN1_MB54_			(FLEXCAN1_MB_BASE_ + 0x0360ul)
#define FLEXCAN1_MB55_			(FLEXCAN1_MB_BASE_ + 0x0370ul)
#define FLEXCAN1_MB56_			(FLEXCAN1_MB_BASE_ + 0x0380ul)
#define FLEXCAN1_MB57_			(FLEXCAN1_MB_BASE_ + 0x0390ul)
#define FLEXCAN1_MB58_			(FLEXCAN1_MB_BASE_ + 0x03A0ul)
#define FLEXCAN1_MB59_			(FLEXCAN1_MB_BASE_ + 0x03B0ul)
#define FLEXCAN1_MB60_			(FLEXCAN1_MB_BASE_ + 0x03C0ul)
#define FLEXCAN1_MB61_			(FLEXCAN1_MB_BASE_ + 0x03D0ul)
#define FLEXCAN1_MB62_			(FLEXCAN1_MB_BASE_ + 0x03E0ul)
#define FLEXCAN1_MB63_			(FLEXCAN1_MB_BASE_ + 0x03F0ul)

// Receiving Individual Mask Registers  (R/W)
#define FLEXCAN1_RXIMRx(x)		(FLEXCAN1_BASE_ + 0x0880ul + (x * 0x4ul))

#define FLEXCAN1_RXIMR0_		(FLEXCAN1_BASE_ + 0x0880ul)
#define FLEXCAN1_RXIMR1_		(FLEXCAN1_BASE_ + 0x0884ul)
#define FLEXCAN1_RXIMR2_		(FLEXCAN1_BASE_ + 0x0888ul)
#define FLEXCAN1_RXIMR3_		(FLEXCAN1_BASE_ + 0x088Cul)
#define FLEXCAN1_RXIMR4_		(FLEXCAN1_BASE_ + 0x0890ul)
#define FLEXCAN1_RXIMR5_		(FLEXCAN1_BASE_ + 0x0894ul)
#define FLEXCAN1_RXIMR6_		(FLEXCAN1_BASE_ + 0x0898ul)
#define FLEXCAN1_RXIMR7_		(FLEXCAN1_BASE_ + 0x089Cul)
#define FLEXCAN1_RXIMR8_		(FLEXCAN1_BASE_ + 0x08A0ul)
#define FLEXCAN1_RXIMR9_		(FLEXCAN1_BASE_ + 0x08A4ul)
#define FLEXCAN1_RXIMR10_		(FLEXCAN1_BASE_ + 0x08A8ul)
#define FLEXCAN1_RXIMR11_		(FLEXCAN1_BASE_ + 0x08ACul)
#define FLEXCAN1_RXIMR12_		(FLEXCAN1_BASE_ + 0x08B0ul)
#define FLEXCAN1_RXIMR13_		(FLEXCAN1_BASE_ + 0x08B4ul)
#define FLEXCAN1_RXIMR14_		(FLEXCAN1_BASE_ + 0x08B8ul)
#define FLEXCAN1_RXIMR15_		(FLEXCAN1_BASE_ + 0x08BCul)
#define FLEXCAN1_RXIMR16_		(FLEXCAN1_BASE_ + 0x08C0ul)
#define FLEXCAN1_RXIMR17_		(FLEXCAN1_BASE_ + 0x08C4ul)
#define FLEXCAN1_RXIMR18_		(FLEXCAN1_BASE_ + 0x08C8ul)
#define FLEXCAN1_RXIMR19_		(FLEXCAN1_BASE_ + 0x08CCul)
#define FLEXCAN1_RXIMR20_		(FLEXCAN1_BASE_ + 0x08D0ul)
#define FLEXCAN1_RXIMR21_		(FLEXCAN1_BASE_ + 0x08D4ul)
#define FLEXCAN1_RXIMR22_		(FLEXCAN1_BASE_ + 0x08D8ul)
#define FLEXCAN1_RXIMR23_		(FLEXCAN1_BASE_ + 0x08DCul)
#define FLEXCAN1_RXIMR24_		(FLEXCAN1_BASE_ + 0x08E0ul)
#define FLEXCAN1_RXIMR25_		(FLEXCAN1_BASE_ + 0x08E4ul)
#define FLEXCAN1_RXIMR26_		(FLEXCAN1_BASE_ + 0x08E8ul)
#define FLEXCAN1_RXIMR27_		(FLEXCAN1_BASE_ + 0x08ECul)
#define FLEXCAN1_RXIMR28_		(FLEXCAN1_BASE_ + 0x08F0ul)
#define FLEXCAN1_RXIMR29_		(FLEXCAN1_BASE_ + 0x08F4ul)
#define FLEXCAN1_RXIMR30_		(FLEXCAN1_BASE_ + 0x08F8ul)
#define FLEXCAN1_RXIMR31_		(FLEXCAN1_BASE_ + 0x08FCul)
#define FLEXCAN1_RXIMR32_		(FLEXCAN1_BASE_ + 0x0900ul)
#define FLEXCAN1_RXIMR33_		(FLEXCAN1_BASE_ + 0x0904ul)
#define FLEXCAN1_RXIMR34_		(FLEXCAN1_BASE_ + 0x0908ul)
#define FLEXCAN1_RXIMR35_		(FLEXCAN1_BASE_ + 0x090Cul)
#define FLEXCAN1_RXIMR36_		(FLEXCAN1_BASE_ + 0x0910ul)
#define FLEXCAN1_RXIMR37_		(FLEXCAN1_BASE_ + 0x0914ul)
#define FLEXCAN1_RXIMR38_		(FLEXCAN1_BASE_ + 0x0918ul)
#define FLEXCAN1_RXIMR39_		(FLEXCAN1_BASE_ + 0x091Cul)
#define FLEXCAN1_RXIMR40_		(FLEXCAN1_BASE_ + 0x0920ul)
#define FLEXCAN1_RXIMR41_		(FLEXCAN1_BASE_ + 0x0924ul)
#define FLEXCAN1_RXIMR42_		(FLEXCAN1_BASE_ + 0x0928ul)
#define FLEXCAN1_RXIMR43_		(FLEXCAN1_BASE_ + 0x092Cul)
#define FLEXCAN1_RXIMR44_		(FLEXCAN1_BASE_ + 0x0930ul)
#define FLEXCAN1_RXIMR45_		(FLEXCAN1_BASE_ + 0x0934ul)
#define FLEXCAN1_RXIMR46_		(FLEXCAN1_BASE_ + 0x0938ul)
#define FLEXCAN1_RXIMR47_		(FLEXCAN1_BASE_ + 0x093Cul)
#define FLEXCAN1_RXIMR48_		(FLEXCAN1_BASE_ + 0x0940ul)
#define FLEXCAN1_RXIMR49_		(FLEXCAN1_BASE_ + 0x0944ul)
#define FLEXCAN1_RXIMR50_		(FLEXCAN1_BASE_ + 0x0948ul)
#define FLEXCAN1_RXIMR51_		(FLEXCAN1_BASE_ + 0x094Cul)
#define FLEXCAN1_RXIMR52_		(FLEXCAN1_BASE_ + 0x0950ul)
#define FLEXCAN1_RXIMR53_		(FLEXCAN1_BASE_ + 0x0954ul)
#define FLEXCAN1_RXIMR54_		(FLEXCAN1_BASE_ + 0x0958ul)
#define FLEXCAN1_RXIMR55_		(FLEXCAN1_BASE_ + 0x095Cul)
#define FLEXCAN1_RXIMR56_		(FLEXCAN1_BASE_ + 0x0960ul)
#define FLEXCAN1_RXIMR57_		(FLEXCAN1_BASE_ + 0x0964ul)
#define FLEXCAN1_RXIMR58_		(FLEXCAN1_BASE_ + 0x0968ul)
#define FLEXCAN1_RXIMR59_		(FLEXCAN1_BASE_ + 0x096Cul)
#define FLEXCAN1_RXIMR60_		(FLEXCAN1_BASE_ + 0x0970ul)
#define FLEXCAN1_RXIMR61_		(FLEXCAN1_BASE_ + 0x0974ul)
#define FLEXCAN1_RXIMR62_		(FLEXCAN1_BASE_ + 0x0978ul)
#define FLEXCAN1_RXIMR63_		(FLEXCAN1_BASE_ + 0x097Cul)

// Glitch Filter Width Register (R/W)
#define FLEXCAN1_GFWR_			(FLEXCAN1_BASE_ + 0x09E0ul)

//// FlexCAN BUS 2

// Module Configuration Register (R/W)
#define FLEXCAN2_MCR_			(FLEXCAN2_BASE_ + 0x0000ul)
// Control 1 Register (R/W)
#define FLEXCAN2_CTRL1_			(FLEXCAN2_BASE_ + 0x0004ul)
// Free Running Timer Register (R/W)
#define FLEXCAN2_TIMER_			(FLEXCAN2_BASE_ + 0x0008ul)
// Receiving Mailboxes Global Mask Register (R/W)
#define FLEXCAN2_RXMGMASK_		(FLEXCAN2_BASE_ + 0x0010ul)
// Receiving Buffer 14 Mask Register (R/W)
#define FLEXCAN2_RX14MASK_		(FLEXCAN2_BASE_ + 0x0014ul)
// Receiving Buffer 15 Mask Register (R/W)
#define FLEXCAN2_RX15MASK_		(FLEXCAN2_BASE_ + 0x0018ul)
// Error Counter Register (R/W)
#define FLEXCAN2_ECR_			(FLEXCAN2_BASE_ + 0x001Cul)
// Error and Status 1 Register (R/W)
#define FLEXCAN2_ESR1_			(FLEXCAN2_BASE_ + 0x0020ul)
// Interrupt Masks 2 Register (R/W)
#define FLEXCAN2_IMASK2_		(FLEXCAN2_BASE_ + 0x0024ul)
// Interrupt Masks 1 Register (R/W)
#define FLEXCAN2_IMASK1_		(FLEXCAN2_BASE_ + 0x0028ul)
// Interrupt Flags 2 Register (R/W)
#define FLEXCAN2_IFLAG2_		(FLEXCAN2_BASE_ + 0x002Cul)
// Interrupt Flags 1 Register (R/W)
#define FLEXCAN2_IFLAG1_		(FLEXCAN2_BASE_ + 0x0030ul)
// Control 2 Register (R/W)
#define FLEXCAN2_CTRL2_			(FLEXCAN2_BASE_ + 0x0034ul)
// Error and Status 2 Register (Read Only)
#define FLEXCAN2_ESR2_			(FLEXCAN2_BASE_ + 0x0038ul)
// CRC Register (Read Only)
#define FLEXCAN2_CRCR_			(FLEXCAN2_BASE_ + 0x0044ul)
// Receiving FIFO Global Mask Register (R/W)
#define FLEXCAN2_RXFGMASK_		(FLEXCAN2_BASE_ + 0x0048ul)
// Receiving FIFO Information Register (Read Only)
#define FLEXCAN2_RXFIR_			(FLEXCAN2_BASE_ + 0x004Cul)
// Debug 1 Register (Read Only)
#define FLEXCAN2_DBG1_			(FLEXCAN2_BASE_ + 0x0058ul)
// Debug 2 Register (Read Only)
#define FLEXCAN2_DBG2_			(FLEXCAN2_BASE_ + 0x005Cul)

// Individual Message Buffers  (R/W)
#define FLEXCAN2_MBx(x)			(FLEXCAN2_MB_BASE_ + (x * 0x10ul))

#define FLEXCAN2_MB0_			(FLEXCAN2_MB_BASE_ + 0x0000ul)
#define FLEXCAN2_MB1_			(FLEXCAN2_MB_BASE_ + 0x0010ul)
#define FLEXCAN2_MB2_			(FLEXCAN2_MB_BASE_ + 0x0020ul)
#define FLEXCAN2_MB3_			(FLEXCAN2_MB_BASE_ + 0x0030ul)
#define FLEXCAN2_MB4_			(FLEXCAN2_MB_BASE_ + 0x0040ul)
#define FLEXCAN2_MB5_			(FLEXCAN2_MB_BASE_ + 0x0050ul)
#define FLEXCAN2_MB6_			(FLEXCAN2_MB_BASE_ + 0x0060ul)
#define FLEXCAN2_MB7_			(FLEXCAN2_MB_BASE_ + 0x0070ul)
#define FLEXCAN2_MB8_			(FLEXCAN2_MB_BASE_ + 0x0080ul)
#define FLEXCAN2_MB9_			(FLEXCAN2_MB_BASE_ + 0x0090ul)
#define FLEXCAN2_MB10_			(FLEXCAN2_MB_BASE_ + 0x00A0ul)
#define FLEXCAN2_MB11_			(FLEXCAN2_MB_BASE_ + 0x00B0ul)
#define FLEXCAN2_MB12_			(FLEXCAN2_MB_BASE_ + 0x00C0ul)
#define FLEXCAN2_MB13_			(FLEXCAN2_MB_BASE_ + 0x00D0ul)
#define FLEXCAN2_MB14_			(FLEXCAN2_MB_BASE_ + 0x00E0ul)
#define FLEXCAN2_MB15_			(FLEXCAN2_MB_BASE_ + 0x00F0ul)
#define FLEXCAN2_MB16_			(FLEXCAN2_MB_BASE_ + 0x0100ul)
#define FLEXCAN2_MB17_			(FLEXCAN2_MB_BASE_ + 0x0110ul)
#define FLEXCAN2_MB18_			(FLEXCAN2_MB_BASE_ + 0x0120ul)
#define FLEXCAN2_MB19_			(FLEXCAN2_MB_BASE_ + 0x0130ul)
#define FLEXCAN2_MB20_			(FLEXCAN2_MB_BASE_ + 0x0140ul)
#define FLEXCAN2_MB21_			(FLEXCAN2_MB_BASE_ + 0x0150ul)
#define FLEXCAN2_MB22_			(FLEXCAN2_MB_BASE_ + 0x0160ul)
#define FLEXCAN2_MB23_			(FLEXCAN2_MB_BASE_ + 0x0170ul)
#define FLEXCAN2_MB24_			(FLEXCAN2_MB_BASE_ + 0x0180ul)
#define FLEXCAN2_MB25_			(FLEXCAN2_MB_BASE_ + 0x0190ul)
#define FLEXCAN2_MB26_			(FLEXCAN2_MB_BASE_ + 0x01A0ul)
#define FLEXCAN2_MB27_			(FLEXCAN2_MB_BASE_ + 0x01B0ul)
#define FLEXCAN2_MB28_			(FLEXCAN2_MB_BASE_ + 0x01C0ul)
#define FLEXCAN2_MB29_			(FLEXCAN2_MB_BASE_ + 0x01D0ul)
#define FLEXCAN2_MB30_			(FLEXCAN2_MB_BASE_ + 0x01E0ul)
#define FLEXCAN2_MB31_			(FLEXCAN2_MB_BASE_ + 0x01F0ul)
#define FLEXCAN2_MB32_			(FLEXCAN2_MB_BASE_ + 0x0200ul)
#define FLEXCAN2_MB33_			(FLEXCAN2_MB_BASE_ + 0x0210ul)
#define FLEXCAN2_MB34_			(FLEXCAN2_MB_BASE_ + 0x0220ul)
#define FLEXCAN2_MB35_			(FLEXCAN2_MB_BASE_ + 0x0230ul)
#define FLEXCAN2_MB36_			(FLEXCAN2_MB_BASE_ + 0x0240ul)
#define FLEXCAN2_MB37_			(FLEXCAN2_MB_BASE_ + 0x0250ul)
#define FLEXCAN2_MB38_			(FLEXCAN2_MB_BASE_ + 0x0260ul)
#define FLEXCAN2_MB39_			(FLEXCAN2_MB_BASE_ + 0x0270ul)
#define FLEXCAN2_MB40_			(FLEXCAN2_MB_BASE_ + 0x0280ul)
#define FLEXCAN2_MB41_			(FLEXCAN2_MB_BASE_ + 0x0290ul)
#define FLEXCAN2_MB42_			(FLEXCAN2_MB_BASE_ + 0x02A0ul)
#define FLEXCAN2_MB43_			(FLEXCAN2_MB_BASE_ + 0x02B0ul)
#define FLEXCAN2_MB44_			(FLEXCAN2_MB_BASE_ + 0x02C0ul)
#define FLEXCAN2_MB45_			(FLEXCAN2_MB_BASE_ + 0x02D0ul)
#define FLEXCAN2_MB46_			(FLEXCAN2_MB_BASE_ + 0x02E0ul)
#define FLEXCAN2_MB47_			(FLEXCAN2_MB_BASE_ + 0x02F0ul)
#define FLEXCAN2_MB48_			(FLEXCAN2_MB_BASE_ + 0x0300ul)
#define FLEXCAN2_MB49_			(FLEXCAN2_MB_BASE_ + 0x0310ul)
#define FLEXCAN2_MB50_			(FLEXCAN2_MB_BASE_ + 0x0320ul)
#define FLEXCAN2_MB51_			(FLEXCAN2_MB_BASE_ + 0x0330ul)
#define FLEXCAN2_MB52_			(FLEXCAN2_MB_BASE_ + 0x0340ul)
#define FLEXCAN2_MB53_			(FLEXCAN2_MB_BASE_ + 0x0350ul)
#define FLEXCAN2_MB54_			(FLEXCAN2_MB_BASE_ + 0x0360ul)
#define FLEXCAN2_MB55_			(FLEXCAN2_MB_BASE_ + 0x0370ul)
#define FLEXCAN2_MB56_			(FLEXCAN2_MB_BASE_ + 0x0380ul)
#define FLEXCAN2_MB57_			(FLEXCAN2_MB_BASE_ + 0x0390ul)
#define FLEXCAN2_MB58_			(FLEXCAN2_MB_BASE_ + 0x03A0ul)
#define FLEXCAN2_MB59_			(FLEXCAN2_MB_BASE_ + 0x03B0ul)
#define FLEXCAN2_MB60_			(FLEXCAN2_MB_BASE_ + 0x03C0ul)
#define FLEXCAN2_MB61_			(FLEXCAN2_MB_BASE_ + 0x03D0ul)
#define FLEXCAN2_MB62_			(FLEXCAN2_MB_BASE_ + 0x03E0ul)
#define FLEXCAN2_MB63_			(FLEXCAN2_MB_BASE_ + 0x03F0ul)

// Receiving Individual Mask Registers  (R/W)
#define FLEXCAN2_RXIMRx(x)		(FLEXCAN2_BASE_ + 0x0880ul + (x * 0x4ul))

#define FLEXCAN2_RXIMR0_		(FLEXCAN2_BASE_ + 0x0880ul)
#define FLEXCAN2_RXIMR1_		(FLEXCAN2_BASE_ + 0x0884ul)
#define FLEXCAN2_RXIMR2_		(FLEXCAN2_BASE_ + 0x0888ul)
#define FLEXCAN2_RXIMR3_		(FLEXCAN2_BASE_ + 0x088Cul)
#define FLEXCAN2_RXIMR4_		(FLEXCAN2_BASE_ + 0x0890ul)
#define FLEXCAN2_RXIMR5_		(FLEXCAN2_BASE_ + 0x0894ul)
#define FLEXCAN2_RXIMR6_		(FLEXCAN2_BASE_ + 0x0898ul)
#define FLEXCAN2_RXIMR7_		(FLEXCAN2_BASE_ + 0x089Cul)
#define FLEXCAN2_RXIMR8_		(FLEXCAN2_BASE_ + 0x08A0ul)
#define FLEXCAN2_RXIMR9_		(FLEXCAN2_BASE_ + 0x08A4ul)
#define FLEXCAN2_RXIMR10_		(FLEXCAN2_BASE_ + 0x08A8ul)
#define FLEXCAN2_RXIMR11_		(FLEXCAN2_BASE_ + 0x08ACul)
#define FLEXCAN2_RXIMR12_		(FLEXCAN2_BASE_ + 0x08B0ul)
#define FLEXCAN2_RXIMR13_		(FLEXCAN2_BASE_ + 0x08B4ul)
#define FLEXCAN2_RXIMR14_		(FLEXCAN2_BASE_ + 0x08B8ul)
#define FLEXCAN2_RXIMR15_		(FLEXCAN2_BASE_ + 0x08BCul)
#define FLEXCAN2_RXIMR16_		(FLEXCAN2_BASE_ + 0x08C0ul)
#define FLEXCAN2_RXIMR17_		(FLEXCAN2_BASE_ + 0x08C4ul)
#define FLEXCAN2_RXIMR18_		(FLEXCAN2_BASE_ + 0x08C8ul)
#define FLEXCAN2_RXIMR19_		(FLEXCAN2_BASE_ + 0x08CCul)
#define FLEXCAN2_RXIMR20_		(FLEXCAN2_BASE_ + 0x08D0ul)
#define FLEXCAN2_RXIMR21_		(FLEXCAN2_BASE_ + 0x08D4ul)
#define FLEXCAN2_RXIMR22_		(FLEXCAN2_BASE_ + 0x08D8ul)
#define FLEXCAN2_RXIMR23_		(FLEXCAN2_BASE_ + 0x08DCul)
#define FLEXCAN2_RXIMR24_		(FLEXCAN2_BASE_ + 0x08E0ul)
#define FLEXCAN2_RXIMR25_		(FLEXCAN2_BASE_ + 0x08E4ul)
#define FLEXCAN2_RXIMR26_		(FLEXCAN2_BASE_ + 0x08E8ul)
#define FLEXCAN2_RXIMR27_		(FLEXCAN2_BASE_ + 0x08ECul)
#define FLEXCAN2_RXIMR28_		(FLEXCAN2_BASE_ + 0x08F0ul)
#define FLEXCAN2_RXIMR29_		(FLEXCAN2_BASE_ + 0x08F4ul)
#define FLEXCAN2_RXIMR30_		(FLEXCAN2_BASE_ + 0x08F8ul)
#define FLEXCAN2_RXIMR31_		(FLEXCAN2_BASE_ + 0x08FCul)
#define FLEXCAN2_RXIMR32_		(FLEXCAN2_BASE_ + 0x0900ul)
#define FLEXCAN2_RXIMR33_		(FLEXCAN2_BASE_ + 0x0904ul)
#define FLEXCAN2_RXIMR34_		(FLEXCAN2_BASE_ + 0x0908ul)
#define FLEXCAN2_RXIMR35_		(FLEXCAN2_BASE_ + 0x090Cul)
#define FLEXCAN2_RXIMR36_		(FLEXCAN2_BASE_ + 0x0910ul)
#define FLEXCAN2_RXIMR37_		(FLEXCAN2_BASE_ + 0x0914ul)
#define FLEXCAN2_RXIMR38_		(FLEXCAN2_BASE_ + 0x0918ul)
#define FLEXCAN2_RXIMR39_		(FLEXCAN2_BASE_ + 0x091Cul)
#define FLEXCAN2_RXIMR40_		(FLEXCAN2_BASE_ + 0x0920ul)
#define FLEXCAN2_RXIMR41_		(FLEXCAN2_BASE_ + 0x0924ul)
#define FLEXCAN2_RXIMR42_		(FLEXCAN2_BASE_ + 0x0928ul)
#define FLEXCAN2_RXIMR43_		(FLEXCAN2_BASE_ + 0x092Cul)
#define FLEXCAN2_RXIMR44_		(FLEXCAN2_BASE_ + 0x0930ul)
#define FLEXCAN2_RXIMR45_		(FLEXCAN2_BASE_ + 0x0934ul)
#define FLEXCAN2_RXIMR46_		(FLEXCAN2_BASE_ + 0x0938ul)
#define FLEXCAN2_RXIMR47_		(FLEXCAN2_BASE_ + 0x093Cul)
#define FLEXCAN2_RXIMR48_		(FLEXCAN2_BASE_ + 0x0940ul)
#define FLEXCAN2_RXIMR49_		(FLEXCAN2_BASE_ + 0x0944ul)
#define FLEXCAN2_RXIMR50_		(FLEXCAN2_BASE_ + 0x0948ul)
#define FLEXCAN2_RXIMR51_		(FLEXCAN2_BASE_ + 0x094Cul)
#define FLEXCAN2_RXIMR52_		(FLEXCAN2_BASE_ + 0x0950ul)
#define FLEXCAN2_RXIMR53_		(FLEXCAN2_BASE_ + 0x0954ul)
#define FLEXCAN2_RXIMR54_		(FLEXCAN2_BASE_ + 0x0958ul)
#define FLEXCAN2_RXIMR55_		(FLEXCAN2_BASE_ + 0x095Cul)
#define FLEXCAN2_RXIMR56_		(FLEXCAN2_BASE_ + 0x0960ul)
#define FLEXCAN2_RXIMR57_		(FLEXCAN2_BASE_ + 0x0964ul)
#define FLEXCAN2_RXIMR58_		(FLEXCAN2_BASE_ + 0x0968ul)
#define FLEXCAN2_RXIMR59_		(FLEXCAN2_BASE_ + 0x096Cul)
#define FLEXCAN2_RXIMR60_		(FLEXCAN2_BASE_ + 0x0970ul)
#define FLEXCAN2_RXIMR61_		(FLEXCAN2_BASE_ + 0x0974ul)
#define FLEXCAN2_RXIMR62_		(FLEXCAN2_BASE_ + 0x0978ul)
#define FLEXCAN2_RXIMR63_		(FLEXCAN2_BASE_ + 0x097Cul)

// Glitch Filter Width Register (R/W)
#define FLEXCAN2_GFWR_			(FLEXCAN2_BASE_ + 0x09E0ul)

//// FlexCAN BUS 3

// Module Configuration Register (R/W)
#define FLEXCAN3_MCR_			(FLEXCAN3_BASE_ + 0x0000ul)
// Control 1 Register (R/W)
#define FLEXCAN3_CTRL1_			(FLEXCAN3_BASE_ + 0x0004ul)
// Free Running Timer Register (R/W)
#define FLEXCAN3_TIMER_			(FLEXCAN3_BASE_ + 0x0008ul)
// Receiving Mailboxes Global Mask Register (R/W)
#define FLEXCAN3_RXMGMASK_		(FLEXCAN3_BASE_ + 0x0010ul)
// Receiving 14 Mask Register (R/W)
#define FLEXCAN3_RX14MASK_		(FLEXCAN3_BASE_ + 0x0014ul)
// Receiving 15 Mask Register (R/W)
#define FLEXCAN3_RX15MASK_		(FLEXCAN3_BASE_ + 0x0018ul)
// Error Counter (R/W)
#define FLEXCAN3_ECR_			(FLEXCAN3_BASE_ + 0x001Cul)
// Error and Status 1 Register (Read Clears Register)
#define FLEXCAN3_ESR1_			(FLEXCAN3_BASE_ + 0x0020ul)
// Interrupt Mask 2 Register (R/W)
#define FLEXCAN3_IMASK2_		(FLEXCAN3_BASE_ + 0x0024ul)
// Interrupt Mask 1 Register (R/W)
#define FLEXCAN3_IMASK1_		(FLEXCAN3_BASE_ + 0x0028ul)
// Interrupt Flags 2 Register (R/W - Write 1s to clear)
#define FLEXCAN3_IFLAG2_		(FLEXCAN3_BASE_ + 0x002Cul)
// Interrupt Flags 1 Register (R/W - Write 1s to clear)
#define FLEXCAN3_IFLAG1_		(FLEXCAN3_BASE_ + 0x0030ul)
// Control 2 Register (R/W)
#define FLEXCAN3_CTRL2_			(FLEXCAN3_BASE_ + 0x0034ul)
// Error and Status 2 Register (Read Only)
#define FLEXCAN3_ESR2_			(FLEXCAN3_BASE_ + 0x0038ul)
// CRC Register (Read Only)
#define FLEXCAN3_CRCR_			(FLEXCAN3_BASE_ + 0x0044ul)
// Receiving FIFO Global Mask Register (R/W)
#define FLEXCAN3_RXFGMASK_		(FLEXCAN3_BASE_ + 0x0048ul)
// Receiving FIFO Information Register (Read Only)
#define FLEXCAN3_RXFIR_			(FLEXCAN3_BASE_ + 0x004Cul)
// CAN Bit Timing Register (R/W)
#define FLEXCAN3_CBT_			(FLEXCAN3_BASE_ + 0x0050ul)

// Individual Message Buffers  (R/W)
#define FLEXCAN3_NUM_8B_MB_		(64ul)
#define FLEXCAN3_8B_MBx(x)		(FLEXCAN3_MB_BASE_ + (x * 0x10ul))

#define FLEXCAN3_8B_MB0_		(FLEXCAN3_MB_BASE_ + 0x0000ul)
#define FLEXCAN3_8B_MB1_		(FLEXCAN3_MB_BASE_ + 0x0010ul)
#define FLEXCAN3_8B_MB2_		(FLEXCAN3_MB_BASE_ + 0x0020ul)
#define FLEXCAN3_8B_MB3_		(FLEXCAN3_MB_BASE_ + 0x0030ul)
#define FLEXCAN3_8B_MB4_		(FLEXCAN3_MB_BASE_ + 0x0040ul)
#define FLEXCAN3_8B_MB5_		(FLEXCAN3_MB_BASE_ + 0x0050ul)
#define FLEXCAN3_8B_MB6_		(FLEXCAN3_MB_BASE_ + 0x0060ul)
#define FLEXCAN3_8B_MB7_		(FLEXCAN3_MB_BASE_ + 0x0070ul)
#define FLEXCAN3_8B_MB8_		(FLEXCAN3_MB_BASE_ + 0x0080ul)
#define FLEXCAN3_8B_MB9_		(FLEXCAN3_MB_BASE_ + 0x0090ul)
#define FLEXCAN3_8B_MB10_		(FLEXCAN3_MB_BASE_ + 0x00A0ul)
#define FLEXCAN3_8B_MB11_		(FLEXCAN3_MB_BASE_ + 0x00B0ul)
#define FLEXCAN3_8B_MB12_		(FLEXCAN3_MB_BASE_ + 0x00C0ul)
#define FLEXCAN3_8B_MB13_		(FLEXCAN3_MB_BASE_ + 0x00D0ul)
#define FLEXCAN3_8B_MB14_		(FLEXCAN3_MB_BASE_ + 0x00E0ul)
#define FLEXCAN3_8B_MB15_		(FLEXCAN3_MB_BASE_ + 0x00F0ul)
#define FLEXCAN3_8B_MB16_		(FLEXCAN3_MB_BASE_ + 0x0100ul)
#define FLEXCAN3_8B_MB17_		(FLEXCAN3_MB_BASE_ + 0x0110ul)
#define FLEXCAN3_8B_MB18_		(FLEXCAN3_MB_BASE_ + 0x0120ul)
#define FLEXCAN3_8B_MB19_		(FLEXCAN3_MB_BASE_ + 0x0130ul)
#define FLEXCAN3_8B_MB20_		(FLEXCAN3_MB_BASE_ + 0x0140ul)
#define FLEXCAN3_8B_MB21_		(FLEXCAN3_MB_BASE_ + 0x0150ul)
#define FLEXCAN3_8B_MB22_		(FLEXCAN3_MB_BASE_ + 0x0160ul)
#define FLEXCAN3_8B_MB23_		(FLEXCAN3_MB_BASE_ + 0x0170ul)
#define FLEXCAN3_8B_MB24_		(FLEXCAN3_MB_BASE_ + 0x0180ul)
#define FLEXCAN3_8B_MB25_		(FLEXCAN3_MB_BASE_ + 0x0190ul)
#define FLEXCAN3_8B_MB26_		(FLEXCAN3_MB_BASE_ + 0x01A0ul)
#define FLEXCAN3_8B_MB27_		(FLEXCAN3_MB_BASE_ + 0x01B0ul)
#define FLEXCAN3_8B_MB28_		(FLEXCAN3_MB_BASE_ + 0x01C0ul)
#define FLEXCAN3_8B_MB29_		(FLEXCAN3_MB_BASE_ + 0x01D0ul)
#define FLEXCAN3_8B_MB30_		(FLEXCAN3_MB_BASE_ + 0x01E0ul)
#define FLEXCAN3_8B_MB31_		(FLEXCAN3_MB_BASE_ + 0x01F0ul)
#define FLEXCAN3_8B_MB32_		(FLEXCAN3_MB_BASE_ + 0x0200ul)
#define FLEXCAN3_8B_MB33_		(FLEXCAN3_MB_BASE_ + 0x0210ul)
#define FLEXCAN3_8B_MB34_		(FLEXCAN3_MB_BASE_ + 0x0220ul)
#define FLEXCAN3_8B_MB35_		(FLEXCAN3_MB_BASE_ + 0x0230ul)
#define FLEXCAN3_8B_MB36_		(FLEXCAN3_MB_BASE_ + 0x0240ul)
#define FLEXCAN3_8B_MB37_		(FLEXCAN3_MB_BASE_ + 0x0250ul)
#define FLEXCAN3_8B_MB38_		(FLEXCAN3_MB_BASE_ + 0x0260ul)
#define FLEXCAN3_8B_MB39_		(FLEXCAN3_MB_BASE_ + 0x0270ul)
#define FLEXCAN3_8B_MB40_		(FLEXCAN3_MB_BASE_ + 0x0280ul)
#define FLEXCAN3_8B_MB41_		(FLEXCAN3_MB_BASE_ + 0x0290ul)
#define FLEXCAN3_8B_MB42_		(FLEXCAN3_MB_BASE_ + 0x02A0ul)
#define FLEXCAN3_8B_MB43_		(FLEXCAN3_MB_BASE_ + 0x02B0ul)
#define FLEXCAN3_8B_MB44_		(FLEXCAN3_MB_BASE_ + 0x02C0ul)
#define FLEXCAN3_8B_MB45_		(FLEXCAN3_MB_BASE_ + 0x02D0ul)
#define FLEXCAN3_8B_MB46_		(FLEXCAN3_MB_BASE_ + 0x02E0ul)
#define FLEXCAN3_8B_MB47_		(FLEXCAN3_MB_BASE_ + 0x02F0ul)
#define FLEXCAN3_8B_MB48_		(FLEXCAN3_MB_BASE_ + 0x0300ul)
#define FLEXCAN3_8B_MB49_		(FLEXCAN3_MB_BASE_ + 0x0310ul)
#define FLEXCAN3_8B_MB50_		(FLEXCAN3_MB_BASE_ + 0x0320ul)
#define FLEXCAN3_8B_MB51_		(FLEXCAN3_MB_BASE_ + 0x0330ul)
#define FLEXCAN3_8B_MB52_		(FLEXCAN3_MB_BASE_ + 0x0340ul)
#define FLEXCAN3_8B_MB53_		(FLEXCAN3_MB_BASE_ + 0x0350ul)
#define FLEXCAN3_8B_MB54_		(FLEXCAN3_MB_BASE_ + 0x0360ul)
#define FLEXCAN3_8B_MB55_		(FLEXCAN3_MB_BASE_ + 0x0370ul)
#define FLEXCAN3_8B_MB56_		(FLEXCAN3_MB_BASE_ + 0x0380ul)
#define FLEXCAN3_8B_MB57_		(FLEXCAN3_MB_BASE_ + 0x0390ul)
#define FLEXCAN3_8B_MB58_		(FLEXCAN3_MB_BASE_ + 0x03A0ul)
#define FLEXCAN3_8B_MB59_		(FLEXCAN3_MB_BASE_ + 0x03B0ul)
#define FLEXCAN3_8B_MB60_		(FLEXCAN3_MB_BASE_ + 0x03C0ul)
#define FLEXCAN3_8B_MB61_		(FLEXCAN3_MB_BASE_ + 0x03D0ul)
#define FLEXCAN3_8B_MB62_		(FLEXCAN3_MB_BASE_ + 0x03E0ul)
#define FLEXCAN3_8B_MB63_		(FLEXCAN3_MB_BASE_ + 0x03F0ul)

// TODO: Verify these are correct. The datasheet appears to have a discrepancy on the offset of MB22
#define FLEXCAN3_NUM_16B_MB_ 	(42ul)
#define FLEXCAN3_16B_MBx(x)		(FLEXCAN3_MB_BASE_ + (x * 0x18ul))

#define FLEXCAN3_16B_MB0_		(FLEXCAN3_MB_BASE_ + 0x0000ul)
#define FLEXCAN3_16B_MB1_		(FLEXCAN3_MB_BASE_ + 0x0018ul)
#define FLEXCAN3_16B_MB2_		(FLEXCAN3_MB_BASE_ + 0x0030ul)
#define FLEXCAN3_16B_MB3_		(FLEXCAN3_MB_BASE_ + 0x0048ul)
#define FLEXCAN3_16B_MB4_		(FLEXCAN3_MB_BASE_ + 0x0060ul)
#define FLEXCAN3_16B_MB5_		(FLEXCAN3_MB_BASE_ + 0x0078ul)
#define FLEXCAN3_16B_MB6_		(FLEXCAN3_MB_BASE_ + 0x0090ul)
#define FLEXCAN3_16B_MB7_		(FLEXCAN3_MB_BASE_ + 0x00A8ul)
#define FLEXCAN3_16B_MB8_		(FLEXCAN3_MB_BASE_ + 0x00C0ul)
#define FLEXCAN3_16B_MB9_		(FLEXCAN3_MB_BASE_ + 0x00D8ul)
#define FLEXCAN3_16B_MB10_		(FLEXCAN3_MB_BASE_ + 0x00F0ul)
#define FLEXCAN3_16B_MB11_		(FLEXCAN3_MB_BASE_ + 0x0108ul)
#define FLEXCAN3_16B_MB12_		(FLEXCAN3_MB_BASE_ + 0x0120ul)
#define FLEXCAN3_16B_MB13_		(FLEXCAN3_MB_BASE_ + 0x0138ul)
#define FLEXCAN3_16B_MB14_		(FLEXCAN3_MB_BASE_ + 0x0150ul)
#define FLEXCAN3_16B_MB15_		(FLEXCAN3_MB_BASE_ + 0x0168ul)
#define FLEXCAN3_16B_MB16_		(FLEXCAN3_MB_BASE_ + 0x0180ul)
#define FLEXCAN3_16B_MB17_		(FLEXCAN3_MB_BASE_ + 0x0198ul)
#define FLEXCAN3_16B_MB18_		(FLEXCAN3_MB_BASE_ + 0x01B0ul)
#define FLEXCAN3_16B_MB19_		(FLEXCAN3_MB_BASE_ + 0x01C8ul)
#define FLEXCAN3_16B_MB20_		(FLEXCAN3_MB_BASE_ + 0x01E0ul)
#define FLEXCAN3_16B_MB21_		(FLEXCAN3_MB_BASE_ + 0x01F8ul)
#define FLEXCAN3_16B_MB22_		(FLEXCAN3_MB_BASE_ + 0x0210ul)	// datasheet says the offset is 0x0218
#define FLEXCAN3_16B_MB23_		(FLEXCAN3_MB_BASE_ + 0x0228ul)
#define FLEXCAN3_16B_MB24_		(FLEXCAN3_MB_BASE_ + 0x0240ul)
#define FLEXCAN3_16B_MB25_		(FLEXCAN3_MB_BASE_ + 0x0258ul)
#define FLEXCAN3_16B_MB26_		(FLEXCAN3_MB_BASE_ + 0x0270ul)
#define FLEXCAN3_16B_MB27_		(FLEXCAN3_MB_BASE_ + 0x0288ul)
#define FLEXCAN3_16B_MB28_		(FLEXCAN3_MB_BASE_ + 0x02A0ul)
#define FLEXCAN3_16B_MB29_		(FLEXCAN3_MB_BASE_ + 0x02B8ul)
#define FLEXCAN3_16B_MB30_		(FLEXCAN3_MB_BASE_ + 0x02D0ul)
#define FLEXCAN3_16B_MB31_		(FLEXCAN3_MB_BASE_ + 0x02E8ul)
#define FLEXCAN3_16B_MB32_		(FLEXCAN3_MB_BASE_ + 0x0300ul)
#define FLEXCAN3_16B_MB33_		(FLEXCAN3_MB_BASE_ + 0x0318ul)
#define FLEXCAN3_16B_MB34_		(FLEXCAN3_MB_BASE_ + 0x0330ul)
#define FLEXCAN3_16B_MB35_		(FLEXCAN3_MB_BASE_ + 0x0348ul)
#define FLEXCAN3_16B_MB36_		(FLEXCAN3_MB_BASE_ + 0x0360ul)
#define FLEXCAN3_16B_MB37_		(FLEXCAN3_MB_BASE_ + 0x0378ul)
#define FLEXCAN3_16B_MB38_		(FLEXCAN3_MB_BASE_ + 0x0390ul)
#define FLEXCAN3_16B_MB39_		(FLEXCAN3_MB_BASE_ + 0x03A8ul)
#define FLEXCAN3_16B_MB40_		(FLEXCAN3_MB_BASE_ + 0x03C0ul)
#define FLEXCAN3_16B_MB41_		(FLEXCAN3_MB_BASE_ + 0x03D8ul)

// TODO: Verify these are correct. The datasheet appears to have a discrepancy on the offset of MB12
#define FLEXCAN3_NUM_32B_MB_	(24ul)
#define FLEXCAN3_32B_MBx(x)		(FLEXCAN3_MB_BASE_ + (x * 0x28ul))

#define FLEXCAN3_32B_MB0_		(FLEXCAN3_MB_BASE_ + 0x0000ul)
#define FLEXCAN3_32B_MB1_		(FLEXCAN3_MB_BASE_ + 0x0028ul)
#define FLEXCAN3_32B_MB2_		(FLEXCAN3_MB_BASE_ + 0x0050ul)
#define FLEXCAN3_32B_MB3_		(FLEXCAN3_MB_BASE_ + 0x0078ul)
#define FLEXCAN3_32B_MB4_		(FLEXCAN3_MB_BASE_ + 0x00A0ul)
#define FLEXCAN3_32B_MB5_		(FLEXCAN3_MB_BASE_ + 0x00C8ul)
#define FLEXCAN3_32B_MB6_		(FLEXCAN3_MB_BASE_ + 0x00F0ul)
#define FLEXCAN3_32B_MB7_		(FLEXCAN3_MB_BASE_ + 0x0118ul)
#define FLEXCAN3_32B_MB8_		(FLEXCAN3_MB_BASE_ + 0x0140ul)
#define FLEXCAN3_32B_MB9_		(FLEXCAN3_MB_BASE_ + 0x0168ul)
#define FLEXCAN3_32B_MB10_		(FLEXCAN3_MB_BASE_ + 0x0190ul)
#define FLEXCAN3_32B_MB11_		(FLEXCAN3_MB_BASE_ + 0x01B8ul)
#define FLEXCAN3_32B_MB12_		(FLEXCAN3_MB_BASE_ + 0x01E0ul) // datasheet says the offset is 0x0200
#define FLEXCAN3_32B_MB13_		(FLEXCAN3_MB_BASE_ + 0x0208ul)
#define FLEXCAN3_32B_MB14_		(FLEXCAN3_MB_BASE_ + 0x0230ul)
#define FLEXCAN3_32B_MB15_		(FLEXCAN3_MB_BASE_ + 0x0258ul)
#define FLEXCAN3_32B_MB16_		(FLEXCAN3_MB_BASE_ + 0x0280ul)
#define FLEXCAN3_32B_MB17_		(FLEXCAN3_MB_BASE_ + 0x02A8ul)
#define FLEXCAN3_32B_MB18_		(FLEXCAN3_MB_BASE_ + 0x02D0ul)
#define FLEXCAN3_32B_MB19_		(FLEXCAN3_MB_BASE_ + 0x02F8ul)
#define FLEXCAN3_32B_MB20_		(FLEXCAN3_MB_BASE_ + 0x0320ul)
#define FLEXCAN3_32B_MB21_		(FLEXCAN3_MB_BASE_ + 0x0348ul)
#define FLEXCAN3_32B_MB22_		(FLEXCAN3_MB_BASE_ + 0x0370ul)
#define FLEXCAN3_32B_MB23_		(FLEXCAN3_MB_BASE_ + 0x0398ul)

// TODO: Verify these are correct. The datasheet appears to have a discrepancy on the offset of MB7
#define FLEXCAN3_NUM_64B_MB_	(14ul)
#define FLEXCAN3_64B_MBx(x)		(FLEXCAN3_MB_BASE_ + (x * 0x48ul))

#define FLEXCAN3_64B_MB0_		(FLEXCAN3_MB_BASE_ + 0x0000ul)
#define FLEXCAN3_64B_MB1_		(FLEXCAN3_MB_BASE_ + 0x0048ul)
#define FLEXCAN3_64B_MB2_		(FLEXCAN3_MB_BASE_ + 0x0090ul)
#define FLEXCAN3_64B_MB3_		(FLEXCAN3_MB_BASE_ + 0x00D8ul)
#define FLEXCAN3_64B_MB4_		(FLEXCAN3_MB_BASE_ + 0x0120ul)
#define FLEXCAN3_64B_MB5_		(FLEXCAN3_MB_BASE_ + 0x0168ul)
#define FLEXCAN3_64B_MB6_		(FLEXCAN3_MB_BASE_ + 0x01B0ul)
#define FLEXCAN3_64B_MB7_		(FLEXCAN3_MB_BASE_ + 0x01F8ul)	// datasheet says the offset is 0x0200
#define FLEXCAN3_64B_MB8_		(FLEXCAN3_MB_BASE_ + 0x0240ul)
#define FLEXCAN3_64B_MB9_		(FLEXCAN3_MB_BASE_ + 0x0288ul)
#define FLEXCAN3_64B_MB10_		(FLEXCAN3_MB_BASE_ + 0x02D0ul)
#define FLEXCAN3_64B_MB11_		(FLEXCAN3_MB_BASE_ + 0x0318ul)
#define FLEXCAN3_64B_MB12_		(FLEXCAN3_MB_BASE_ + 0x0360ul)
#define FLEXCAN3_64B_MB13_		(FLEXCAN3_MB_BASE_ + 0x03A8ul)

// Receiving Individual Mask Registers  (R/W)
#define FLEXCAN3_RXIMRx(x)		(FLEXCAN3_BASE_ + 0x0880ul +(x * 0x4ul))

#define FLEXCAN3_RXIMR0_		(FLEXCAN3_BASE_ + 0x0880ul)
#define FLEXCAN3_RXIMR1_		(FLEXCAN3_BASE_ + 0x0884ul)
#define FLEXCAN3_RXIMR2_		(FLEXCAN3_BASE_ + 0x0888ul)
#define FLEXCAN3_RXIMR3_		(FLEXCAN3_BASE_ + 0x088Cul)
#define FLEXCAN3_RXIMR4_		(FLEXCAN3_BASE_ + 0x0890ul)
#define FLEXCAN3_RXIMR5_		(FLEXCAN3_BASE_ + 0x0894ul)
#define FLEXCAN3_RXIMR6_		(FLEXCAN3_BASE_ + 0x0898ul)
#define FLEXCAN3_RXIMR7_		(FLEXCAN3_BASE_ + 0x089Cul)
#define FLEXCAN3_RXIMR8_		(FLEXCAN3_BASE_ + 0x08A0ul)
#define FLEXCAN3_RXIMR9_		(FLEXCAN3_BASE_ + 0x08A4ul)
#define FLEXCAN3_RXIMR10_		(FLEXCAN3_BASE_ + 0x08A8ul)
#define FLEXCAN3_RXIMR11_		(FLEXCAN3_BASE_ + 0x08ACul)
#define FLEXCAN3_RXIMR12_		(FLEXCAN3_BASE_ + 0x08B0ul)
#define FLEXCAN3_RXIMR13_		(FLEXCAN3_BASE_ + 0x08B4ul)
#define FLEXCAN3_RXIMR14_		(FLEXCAN3_BASE_ + 0x08B8ul)
#define FLEXCAN3_RXIMR15_		(FLEXCAN3_BASE_ + 0x08BCul)
#define FLEXCAN3_RXIMR16_		(FLEXCAN3_BASE_ + 0x08C0ul)
#define FLEXCAN3_RXIMR17_		(FLEXCAN3_BASE_ + 0x08C4ul)
#define FLEXCAN3_RXIMR18_		(FLEXCAN3_BASE_ + 0x08C8ul)
#define FLEXCAN3_RXIMR19_		(FLEXCAN3_BASE_ + 0x08CCul)
#define FLEXCAN3_RXIMR20_		(FLEXCAN3_BASE_ + 0x08D0ul)
#define FLEXCAN3_RXIMR21_		(FLEXCAN3_BASE_ + 0x08D4ul)
#define FLEXCAN3_RXIMR22_		(FLEXCAN3_BASE_ + 0x08D8ul)
#define FLEXCAN3_RXIMR23_		(FLEXCAN3_BASE_ + 0x08DCul)
#define FLEXCAN3_RXIMR24_		(FLEXCAN3_BASE_ + 0x08E0ul)
#define FLEXCAN3_RXIMR25_		(FLEXCAN3_BASE_ + 0x08E4ul)
#define FLEXCAN3_RXIMR26_		(FLEXCAN3_BASE_ + 0x08E8ul)
#define FLEXCAN3_RXIMR27_		(FLEXCAN3_BASE_ + 0x08ECul)
#define FLEXCAN3_RXIMR28_		(FLEXCAN3_BASE_ + 0x08F0ul)
#define FLEXCAN3_RXIMR29_		(FLEXCAN3_BASE_ + 0x08F4ul)
#define FLEXCAN3_RXIMR30_		(FLEXCAN3_BASE_ + 0x08F8ul)
#define FLEXCAN3_RXIMR31_		(FLEXCAN3_BASE_ + 0x08FCul)
#define FLEXCAN3_RXIMR32_		(FLEXCAN3_BASE_ + 0x0900ul)
#define FLEXCAN3_RXIMR33_		(FLEXCAN3_BASE_ + 0x0904ul)
#define FLEXCAN3_RXIMR34_		(FLEXCAN3_BASE_ + 0x0908ul)
#define FLEXCAN3_RXIMR35_		(FLEXCAN3_BASE_ + 0x090Cul)
#define FLEXCAN3_RXIMR36_		(FLEXCAN3_BASE_ + 0x0910ul)
#define FLEXCAN3_RXIMR37_		(FLEXCAN3_BASE_ + 0x0914ul)
#define FLEXCAN3_RXIMR38_		(FLEXCAN3_BASE_ + 0x0918ul)
#define FLEXCAN3_RXIMR39_		(FLEXCAN3_BASE_ + 0x091Cul)
#define FLEXCAN3_RXIMR40_		(FLEXCAN3_BASE_ + 0x0920ul)
#define FLEXCAN3_RXIMR41_		(FLEXCAN3_BASE_ + 0x0924ul)
#define FLEXCAN3_RXIMR42_		(FLEXCAN3_BASE_ + 0x0928ul)
#define FLEXCAN3_RXIMR43_		(FLEXCAN3_BASE_ + 0x092Cul)
#define FLEXCAN3_RXIMR44_		(FLEXCAN3_BASE_ + 0x0930ul)
#define FLEXCAN3_RXIMR45_		(FLEXCAN3_BASE_ + 0x0934ul)
#define FLEXCAN3_RXIMR46_		(FLEXCAN3_BASE_ + 0x0938ul)
#define FLEXCAN3_RXIMR47_		(FLEXCAN3_BASE_ + 0x093Cul)
#define FLEXCAN3_RXIMR48_		(FLEXCAN3_BASE_ + 0x0940ul)
#define FLEXCAN3_RXIMR49_		(FLEXCAN3_BASE_ + 0x0944ul)
#define FLEXCAN3_RXIMR50_		(FLEXCAN3_BASE_ + 0x0948ul)
#define FLEXCAN3_RXIMR51_		(FLEXCAN3_BASE_ + 0x094Cul)
#define FLEXCAN3_RXIMR52_		(FLEXCAN3_BASE_ + 0x0950ul)
#define FLEXCAN3_RXIMR53_		(FLEXCAN3_BASE_ + 0x0954ul)
#define FLEXCAN3_RXIMR54_		(FLEXCAN3_BASE_ + 0x0958ul)
#define FLEXCAN3_RXIMR55_		(FLEXCAN3_BASE_ + 0x095Cul)
#define FLEXCAN3_RXIMR56_		(FLEXCAN3_BASE_ + 0x0960ul)
#define FLEXCAN3_RXIMR57_		(FLEXCAN3_BASE_ + 0x0964ul)
#define FLEXCAN3_RXIMR58_		(FLEXCAN3_BASE_ + 0x0968ul)
#define FLEXCAN3_RXIMR59_		(FLEXCAN3_BASE_ + 0x096Cul)
#define FLEXCAN3_RXIMR60_		(FLEXCAN3_BASE_ + 0x0970ul)
#define FLEXCAN3_RXIMR61_		(FLEXCAN3_BASE_ + 0x0974ul)
#define FLEXCAN3_RXIMR62_		(FLEXCAN3_BASE_ + 0x0978ul)
#define FLEXCAN3_RXIMR63_		(FLEXCAN3_BASE_ + 0x097Cul)

// CAN FD Control Register (R/W)
#define FLEXCAN3_FDCTRL_		(FLEXCAN3_BASE_ + 0x0C00ul)
// CAN FD Bit Timing Register (R/W)
#define FLEXCAN3_FDCBT_			(FLEXCAN3_BASE_ + 0x0C04ul)
// CAN FD CRC Register (Read Only)
#define FLEXCAN3_FDCRC_			(FLEXCAN3_BASE_ + 0x0C08ul)

#pragma endregion // BASE REGISTERS

////////////////////////////////////////
// FlexCAN Per-Register Masks         //
////////////////////////////////////////
#pragma region REGISTER INFO

// Each of these register sections act as bitmasks for the register

// FlexCAN BUS 1

/// Module Configuration Register - FLEXCANx_MCR - (R/W)
#define FLEXCAN1_MCR_MDIS				(0x1ul << 31ul)			// 1 bit
#define FLEXCAN1_MCR_FRZ				(0x1ul << 30ul)			// 1 bit
#define FLEXCAN1_MCR_FEN				(0x1ul << 29ul)			// 1 bit
#define FLEXCAN1_MCR_HALT				(0x1ul << 28ul)			// 1 bit
#define FLEXCAN1_MCR_NOTRDY				(0x1ul << 27ul)			// 1 bit
#define FLEXCAN1_MCR_WAK_MSK			(0x1ul << 26ul)			// 1 bit
#define FLEXCAN1_MCR_SOFT_RST			(0x1ul << 25ul)			// 1 bit
#define FLEXCAN1_MCR_FRZ_ACK			(0x1ul << 24ul)			// 1 bit
#define FLEXCAN1_MCR_SUPV				(0x1ul << 23ul)			// 1 bit
#define FLEXCAN1_MCR_SLF_WAK			(0x1ul << 22ul)			// 1 bit
#define FLEXCAN1_MCR_WRN_EN				(0x1ul << 21ul)			// 1 bit
#define FLEXCAN1_MCR_LPM_ACK			(0x1ul << 20ul)			// 1 bit
#define FLEXCAN1_MCR_WAK_SRC			(0x1ul << 19ul)			// 1 bit
// reserved 18
#define FLEXCAN1_MCR_SRX_DIS			(0x1ul << 17ul)			// 1 bit
#define FLEXCAN1_MCR_IRMQ				(0x1ul << 16ul)			// 1 bit
// reserved 15
// reserved 14
#define FLEXCAN1_MCR_LPRIO_EN			(0x1ul << 13ul) 		// 1 bit
#define FLEXCAN1_MCR_AEN				(0x1ul << 12ul) 		// 1 bit
// reserved 11
// reserved 10
#define FLEXCAN1_MCR_IDAM				(0x3ul << 8ul)			// 2 bits
// reserved 7
#define FLEXCAN1_MCR_MAXMB				(0x7Ful << 0ul) 		// 7 bits

/// Control 1 Register - FLEXCANx_CTRL1 - (R/W)
#define FLEXCAN1_CTRL1_PRESDIV			(0xFFul << 24ul)		// 8 bits
#define FLEXCAN1_CTRL1_RJW				(0x3ul << 22ul)			// 2 bits
#define FLEXCAN1_CTRL1_PSEG1			(0x7ul << 19ul)			// 3 bits
#define FLEXCAN1_CTRL1_PSEG2			(0x7ul << 16ul)			// 3 bits
#define FLEXCAN1_CTRL1_BOFF_MSK			(0x1ul << 15ul)			// 1 bit
#define FLEXCAN1_CTRL1_ERR_MSK			(0x1ul << 14ul)			// 1 bit
// reserved 13
#define FLEXCAN1_CTRL1_LPB				(0x1ul << 12ul)			// 1 bit
#define FLEXCAN1_CTRL1_TWRN_MSK			(0x1ul << 11ul)			// 1 bit
#define FLEXCAN1_CTRL1_RWRN_MSK			(0x1ul << 10ul)			// 1 bit
// reserved 9
// reserved 8
#define FLEXCAN1_CTRL1_SMP				(0x1ul << 7ul)			// 1 bit
#define FLEXCAN1_CTRL1_BOFF_REC			(0x1ul << 6ul)			// 1 bit
#define FLEXCAN1_CTRL1_TSYN				(0x1ul << 5ul)			// 1 bit
#define FLEXCAN1_CTRL1_LBUF				(0x1ul << 4ul)			// 1 bit
#define FLEXCAN1_CTRL1_LOM				(0x1ul << 3ul)			// 1 bit
#define FLEXCAN1_CTRL1_PROP_SEG			(0x7ul << 0ul)			// 3 bits

/// Free Running Timer Register - FLEXCANx_TIMER - (R/W)
#define FLEXCAN1_TIMER_TIMER			(0xFFFFul << 0ul) 		// 16 bits
// reserved 16 - 31

/// Receiving Mailboxes Global Mask Register - FLEXCANx_RXMGMASK - (R/W)
#define FLEXCAN1_RXMGMASK_MASK			(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Receiving 14 Mask Register - FLEXCANx_RX14MASK - (R/W)
#define FLEXCAN1_RX14MASK_MASK			(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Receiving 15 Mask Register - FLEXCANx_RX15MASK - (R/W)
#define FLEXCAN1_RX15MASK_MASK			(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Error Counter - FLEXCANx_ECR - (R/W)
// reserved 31 - 16
#define FLEXCAN1_ECR_RX_ERR_COUNTER		(0xFFul << 8ul) 		// 8 bits
#define FLEXCAN1_ECR_TX_ERR_COUNTER		(0xFFul << 0ul) 		// 8 bits

/// Error and Status 1 Register - FLEXCANx_ESR1 - (Read Clears Register)
// reserved 31 - 19
#define FLEXCAN1_ESR1_SYNCH				(0x1ul << 18ul) 		// 1 bit
#define FLEXCAN1_ESR1_TWRN_INT			(0x1ul << 17ul) 		// 1 bit
#define FLEXCAN1_ESR1_RWRN_INT			(0x1ul << 16ul) 		// 1 bit
#define FLEXCAN1_ESR1_BIT1_ERR			(0x1ul << 15ul) 		// 1 bit
#define FLEXCAN1_ESR1_BIT0_ERR			(0x1ul << 14ul) 		// 1 bit
#define FLEXCAN1_ESR1_ACK_ERR			(0x1ul << 13ul) 		// 1 bit
#define FLEXCAN1_ESR1_CRC_ERR			(0x1ul << 12ul) 		// 1 bit
#define FLEXCAN1_ESR1_FRM_ERR			(0x1ul << 11ul) 		// 1 bit
#define FLEXCAN1_ESR1_STF_ERR			(0x1ul << 10ul) 		// 1 bit
#define FLEXCAN1_ESR1_TX_WRN			(0x1ul << 9ul)			// 1 bit
#define FLEXCAN1_ESR1_RX_WRN			(0x1ul << 8ul)			// 1 bit
#define FLEXCAN1_ESR1_IDLE				(0x1ul << 7ul)			// 1 bit
#define FLEXCAN1_ESR1_TX				(0x1ul << 6ul)			// 1 bit
#define FLEXCAN1_ESR1_FLT_CONF			(0x3ul << 4ul)			// 2 bits
#define FLEXCAN1_ESR1_RX				(0x1ul << 3ul)			// 1 bit
#define FLEXCAN1_ESR1_BOFF_INT			(0x1ul << 2ul)			// 1 bit
#define FLEXCAN1_ESR1_ERR_INT			(0x1ul << 1ul)			// 1 bit
#define FLEXCAN1_ESR1_WAK_INT			(0x1ul << 0ul)			// 1 bit

/// Interrupt Masks 2 Register - FLEXCANx_IMASK2 - (R/W)
#define FLEXCAN1_IMASK2_MASK			(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Interrupt Masks 1 Register - FLEXCANx_IMASK1 - (R/W)
#define FLEXCAN1_IMASK1_MASK			(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Interrupt Flags 2 Register - FLEXCANx_IFLAG2 - (R/W - Write 1s to clear)
#define FLEXCAN1_IFLAG2_MASK			(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Interrupt Flags 1 Register - FLEXCANx_IFLAG1 - (R/W - Write 1s to clear)
#define FLEXCAN1_IFLAG1_BUF31TO8		(0xFFFFFFul << 8ul) 	// 24 bits
#define FLEXCAN1_IFLAG1_BUF7			(0x1ul << 7ul)			// 1 bit
#define FLEXCAN1_IFLAG1_BUF6			(0x1ul << 6ul)			// 1 bit
#define FLEXCAN1_IFLAG1_BUF5			(0x1ul << 5ul)			// 1 bit
#define FLEXCAN1_IFLAG1_BUF4TO0			(0x1Ful << 0ul) 		// 5 bits

/// Control 2 Register - FLEXCANx_CTRL2 - (R/W)
// bit 31 must be 0
// reserved 30 - 29
#define FLEXCAN1_CTRL2_WRMFRZ			(0x1ul << 28ul) 		// 1 bit
#define FLEXCAN1_CTRL2_RFFN				(0xFul << 24ul) 		// 4 bits
#define FLEXCAN1_CTRL2_TASD				(0x1Ful << 19ul)		// 5 bits
#define FLEXCAN1_CTRL2_MRP				(0x1ul << 18ul) 		// 1 bit
#define FLEXCAN1_CTRL2_RRS				(0x1ul << 17ul) 		// 1 bit
#define FLEXCAN1_CTRL2_EACEN			(0x1ul << 16ul) 		// 1 bit
// reserved 15 - 0

/// Error and Status 2 Register - FLEXCANx_ESR2 - (Read Clears Register)
// reserved 31 - 23
#define FLEXCAN1_ESR2_LPTM				(0x7Ful << 16ul)		// 7 bits
// reserved 15
#define FLEXCAN1_ESR2_VPS				(0x1ul << 14ul) 		// 1 bit
#define FLEXCAN1_ESR2_IMB				(0x1ul << 13ul) 		// 1 bit
// reserved 12 - 0

/// CRC Register - FLEXCANx_CRCR - (R/W)
// reserved 31 - 23
#define FLEXCAN1_CRCR_MBCRC				(0x7Ful << 16ul)		// 7 bits
// reserved 15
#define FLEXCAN1_CRCR_TXCRC				(0x7FFFul << 0ul) 		// 15 bits

/// Rx FIFO Global Mask Register - FLEXCANx_RXFGMASK - (R/W)
#define FLEXCAN1_RXFGMASK_MASK			(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Rx FIFO Information Register - FLEXCANx_RXFIR - (Read Only)
// reserved 31 - 9
#define FLEXCAN1_RXFIR_IDHIT			(0x1FFul << 0ul)		// 9 bits

/// Debug 1 Register - FLEXCANx_DBG1 - (R/W)
// reserved 31 - 29
#define FLEXCAN1_DBG1_CBN				(0x1Ful << 24ul)		// 5 bits
// reserved 23 - 6
#define FLEXCAN1_DBG1_CFSM				(0x3Ful << 0ul) 		// 6 bits

/// Debug 2 Register - FLEXCANx_DBG2 - (R/W)
// bits 31 - 16 must be 0
#define FLEXCAN1_DBG2_APP				(0x1ul << 15ul) 		// 1 bit
#define FLEXCAN1_DBG2_TAP				(0x7Ful << 8ul) 		// 7 bits
#define FLEXCAN1_DBG2_MPP				(0x1ul << 7ul)			// 1 bit
#define FLEXCAN1_DBG2_RMP				(0x7Ful << 0ul) 		// 7 bits

/// Rx Individual Mask Registers - FLEXCANx_RXIMRn - (R/W)
#define FLEXCAN1_RXIMR_MASK				(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Glitch Filter Width Registers - FLEXCANx_GFWR - (R/W)
// bits 31 - 8 must be 0
#define FLEXCAN1_GFWR_GFWR				(0xFFul << 0ul) 		// 8 bits

// FlexCAN BUS 2

/// Module Configuration Register - FLEXCANx_MCR - (R/W)
#define FLEXCAN2_MCR_MDIS				(0x1ul << 31ul)			// 1 bit
#define FLEXCAN2_MCR_FRZ				(0x1ul << 30ul)			// 1 bit
#define FLEXCAN2_MCR_FEN				(0x1ul << 29ul)			// 1 bit
#define FLEXCAN2_MCR_HALT				(0x1ul << 28ul)			// 1 bit
#define FLEXCAN2_MCR_NOTRDY				(0x1ul << 27ul)			// 1 bit
#define FLEXCAN2_MCR_WAK_MSK			(0x1ul << 26ul)			// 1 bit
#define FLEXCAN2_MCR_SOFT_RST			(0x1ul << 25ul)			// 1 bit
#define FLEXCAN2_MCR_FRZ_ACK			(0x1ul << 24ul)			// 1 bit
#define FLEXCAN2_MCR_SUPV				(0x1ul << 23ul)			// 1 bit
#define FLEXCAN2_MCR_SLF_WAK			(0x1ul << 22ul)			// 1 bit
#define FLEXCAN2_MCR_WRN_EN				(0x1ul << 21ul)			// 1 bit
#define FLEXCAN2_MCR_LPM_ACK			(0x1ul << 20ul)			// 1 bit
#define FLEXCAN2_MCR_WAK_SRC			(0x1ul << 19ul)			// 1 bit
// reserved 18
#define FLEXCAN2_MCR_SRX_DIS			(0x1ul << 17ul)			// 1 bit
#define FLEXCAN2_MCR_IRMQ				(0x1ul << 16ul)			// 1 bit
// reserved 15
// reserved 14
#define FLEXCAN2_MCR_LPRIO_EN			(0x1ul << 13ul) 		// 1 bit
#define FLEXCAN2_MCR_AEN				(0x1ul << 12ul) 		// 1 bit
// reserved 11
// reserved 10
#define FLEXCAN2_MCR_IDAM				(0x3ul << 8ul)			// 2 bits
// reserved 7
#define FLEXCAN2_MCR_MAXMB				(0x7Ful << 0ul) 		// 7 bits

/// Control 1 Register - FLEXCANx_CTRL1 - (R/W)
#define FLEXCAN2_CTRL1_PRESDIV			(0xFFul << 24ul)		// 8 bits
#define FLEXCAN2_CTRL1_RJW				(0x3ul << 22ul)			// 2 bits
#define FLEXCAN2_CTRL1_PSEG1			(0x7ul << 19ul)			// 3 bits
#define FLEXCAN2_CTRL1_PSEG2			(0x7ul << 16ul)			// 3 bits
#define FLEXCAN2_CTRL1_BOFF_MSK			(0x1ul << 15ul)			// 1 bit
#define FLEXCAN2_CTRL1_ERR_MSK			(0x1ul << 14ul)			// 1 bit
// reserved 13
#define FLEXCAN2_CTRL1_LPB				(0x1ul << 12ul)			// 1 bit
#define FLEXCAN2_CTRL1_TWRN_MSK			(0x1ul << 11ul)			// 1 bit
#define FLEXCAN2_CTRL1_RWRN_MSK			(0x1ul << 10ul)			// 1 bit
// reserved 9
// reserved 8
#define FLEXCAN2_CTRL1_SMP				(0x1ul << 7ul)			// 1 bit
#define FLEXCAN2_CTRL1_BOFF_REC			(0x1ul << 6ul)			// 1 bit
#define FLEXCAN2_CTRL1_TSYN				(0x1ul << 5ul)			// 1 bit
#define FLEXCAN2_CTRL1_LBUF				(0x1ul << 4ul)			// 1 bit
#define FLEXCAN2_CTRL1_LOM				(0x1ul << 3ul)			// 1 bit
#define FLEXCAN2_CTRL1_PROP_SEG			(0x7ul << 0ul)			// 3 bits

/// Free Running Timer Register - FLEXCANx_TIMER - (R/W)
#define FLEXCAN2_TIMER_TIMER			(0xFFFFul << 0ul) 		// 16 bits
// reserved 16 - 31

/// Receiving Mailboxes Global Mask Register - FLEXCANx_RXMGMASK - (R/W)
#define FLEXCAN2_RXMGMASK_MASK			(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Receiving 14 Mask Register - FLEXCANx_RX14MASK - (R/W)
#define FLEXCAN2_RX14MASK_MASK			(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Receiving 15 Mask Register - FLEXCANx_RX15MASK - (R/W)
#define FLEXCAN2_RX15MASK_MASK			(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Error Counter - FLEXCANx_ECR - (R/W)
// reserved 31 - 16
#define FLEXCAN2_ECR_RX_ERR_CNT			(0xFFul << 8ul) 		// 8 bits
#define FLEXCAN2_ECR_TX_ERR_CNT			(0xFFul << 0ul) 		// 8 bits

/// Error and Status 1 Register - FLEXCANx_ESR1 - (Read Clears Register)
// reserved 31 - 19
#define FLEXCAN2_ESR1_SYNCH				(0x1ul << 18ul) 		// 1 bit
#define FLEXCAN2_ESR1_TWRN_INT			(0x1ul << 17ul) 		// 1 bit
#define FLEXCAN2_ESR1_RWRN_INT			(0x1ul << 16ul) 		// 1 bit
#define FLEXCAN2_ESR1_BIT1_ERR			(0x1ul << 15ul) 		// 1 bit
#define FLEXCAN2_ESR1_BIT0_ERR			(0x1ul << 14ul) 		// 1 bit
#define FLEXCAN2_ESR1_ACK_ERR			(0x1ul << 13ul) 		// 1 bit
#define FLEXCAN2_ESR1_CRC_ERR			(0x1ul << 12ul) 		// 1 bit
#define FLEXCAN2_ESR1_FRM_ERR			(0x1ul << 11ul) 		// 1 bit
#define FLEXCAN2_ESR1_STF_ERR			(0x1ul << 10ul) 		// 1 bit
#define FLEXCAN2_ESR1_TX_WRN			(0x1ul << 9ul)			// 1 bit
#define FLEXCAN2_ESR1_RX_WRN			(0x1ul << 8ul)			// 1 bit
#define FLEXCAN2_ESR1_IDLE				(0x1ul << 7ul)			// 1 bit
#define FLEXCAN2_ESR1_TX				(0x1ul << 6ul)			// 1 bit
#define FLEXCAN2_ESR1_FLT_CONF			(0x3ul << 4ul)			// 2 bits
#define FLEXCAN2_ESR1_RX				(0x1ul << 3ul)			// 1 bit
#define FLEXCAN2_ESR1_BOFF_INT			(0x1ul << 2ul)			// 1 bit
#define FLEXCAN2_ESR1_ERR_INT			(0x1ul << 1ul)			// 1 bit
#define FLEXCAN2_ESR1_WAK_INT			(0x1ul << 0ul)			// 1 bit

/// Interrupt Masks 2 Register - FLEXCANx_IMASK2 - (R/W)
#define FLEXCAN2_IMASK2_MASK			(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Interrupt Masks 1 Register - FLEXCANx_IMASK1 - (R/W)
#define FLEXCAN2_IMASK1_MASK			(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Interrupt Flags 2 Register - FLEXCANx_IFLAG2 - (R/W - Write 1s to clear)
#define FLEXCAN2_IFLAG2_MASK			(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Interrupt Flags 1 Register - FLEXCANx_IFLAG1 - (R/W - Write 1s to clear)
#define FLEXCAN2_IFLAG1_BUF31TO8		(0xFFFFFFul << 8ul) 	// 24 bits
#define FLEXCAN2_IFLAG1_BUF7			(0x1ul << 7ul)			// 1 bit
#define FLEXCAN2_IFLAG1_BUF6			(0x1ul << 6ul)			// 1 bit
#define FLEXCAN2_IFLAG1_BUF5			(0x1ul << 5ul)			// 1 bit
#define FLEXCAN2_IFLAG1_BUF4TO0			(0x1Ful << 0ul) 		// 5 bits

/// Control 2 Register - FLEXCANx_CTRL2 - (R/W)
// bit 31 must be 0
// reserved 30 - 29
#define FLEXCAN2_CTRL2_WRMFRZ			(0x1ul << 28ul) 		// 1 bit
#define FLEXCAN2_CTRL2_RFFN				(0xFul << 24ul) 		// 4 bits
#define FLEXCAN2_CTRL2_TASD				(0x1Ful << 19ul)		// 5 bits
#define FLEXCAN2_CTRL2_MRP				(0x1ul << 18ul) 		// 1 bit
#define FLEXCAN2_CTRL2_RRS				(0x1ul << 17ul) 		// 1 bit
#define FLEXCAN2_CTRL2_EACEN			(0x1ul << 16ul) 		// 1 bit
// reserved 15 - 0

/// Error and Status 2 Register - FLEXCANx_ESR2 - (Read Clears Register)
// reserved 31 - 23
#define FLEXCAN2_ESR2_LPTM				(0x7Ful << 16ul)		// 7 bits
// reserved 15
#define FLEXCAN2_ESR2_VPS				(0x1ul << 14ul) 		// 1 bit
#define FLEXCAN2_ESR2_IMB				(0x1ul << 13ul) 		// 1 bit
// reserved 12 - 0

/// CRC Register - FLEXCANx_CRCR - (R/W)
// reserved 31 - 23
#define FLEXCAN2_CRCR_MBCRC				(0x7Ful << 16ul)		// 7 bits
// reserved 15
#define FLEXCAN2_CRCR_TXCRC				(0x7FFFul << 0ul) 		// 15 bits

/// Rx FIFO Global Mask Register - FLEXCANx_RXFGMASK - (R/W)
#define FLEXCAN2_RXFGMASK_MASK			(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Rx FIFO Information Register - FLEXCANx_RXFIR - (Read Only)
// reserved 31 - 9
#define FLEXCAN2_RXFIR_IDHIT			(0x1FFul << 0ul)		// 9 bits

/// Debug 1 Register - FLEXCANx_DBG1 - (R/W)
// reserved 31 - 29
#define FLEXCAN2_DBG1_CBN				(0x1Ful << 24ul)		// 5 bits
// reserved 23 - 6
#define FLEXCAN2_DBG1_CFSM				(0x3Ful << 0ul) 		// 6 bits

/// Debug 2 Register - FLEXCANx_DBG2 - (R/W)
// bits 31 - 16 must be 0
#define FLEXCAN2_DBG2_APP				(0x1ul << 15ul) 		// 1 bit
#define FLEXCAN2_DBG2_TAP				(0x7Ful << 8ul) 		// 7 bits
#define FLEXCAN2_DBG2_MPP				(0x1ul << 7ul)			// 1 bit
#define FLEXCAN2_DBG2_RMP				(0x7Ful << 0ul) 		// 7 bits

/// Rx Individual Mask Registers - FLEXCANx_RXIMRn - (R/W)
#define FLEXCAN2_RXIMR_MASK				(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Glitch Filter Width Registers - FLEXCANx_GFWR - (R/W)
// bits 31 - 8 must be 0
#define FLEXCAN2_GFWR_GFWR				(0xFFul << 0ul) 		// 8 bits

// FlexCAN BUS 3

/// Module Configuration Register - FLEXCAN3_MCR - (R/W)
#define FLEXCAN3_MCR_MDIS				(0x1ul << 31ul) 		// 1 bit
#define FLEXCAN3_MCR_FRZ				(0x1ul << 30ul) 		// 1 bit
#define FLEXCAN3_MCR_RF_EN				(0x1ul << 29ul) 		// 1 bit
#define FLEXCAN3_MCR_HALT				(0x1ul << 28ul) 		// 1 bit
#define FLEXCAN3_MCR_NOTRDY				(0x1ul << 27ul) 		// 1 bit
#define FLEXCAN3_MCR_WAK_MSK			(0x1ul << 26ul) 		// 1 bit
#define FLEXCAN3_MCR_SOFT_RST			(0x1ul << 25ul) 		// 1 bit
#define FLEXCAN3_MCR_FRZ_ACK			(0x1ul << 24ul) 		// 1 bit
#define FLEXCAN3_MCR_SUPV				(0x1ul << 23ul) 		// 1 bit
#define FLEXCAN3_MCR_SLF_WAK			(0x1ul << 22ul) 		// 1 bit
#define FLEXCAN3_MCR_WRN_EN				(0x1ul << 21ul) 		// 1 bit
#define FLEXCAN3_MCR_LPM_ACK			(0x1ul << 20ul) 		// 1 bit
#define FLEXCAN3_MCR_WAK_SRC			(0x1ul << 19ul) 		// 1 bit
#define FLEXCAN3_MCR_DOZE				(0x1ul << 18ul) 		// 1 bit
#define FLEXCAN3_MCR_SRX_DIS			(0x1ul << 17ul) 		// 1 bit
#define FLEXCAN3_MCR_IRMQ				(0x1ul << 16ul) 		// 1 bit
#define FLEXCAN3_MCR_DMA				(0x1ul << 15ul) 		// 1 bit
// reserved 14
#define FLEXCAN3_MCR_LPRIO_EN			(0x1ul << 13ul) 		// 1 bit
#define FLEXCAN3_MCR_AEN				(0x1ul << 12ul) 		// 1 bit
#define FLEXCAN3_MCR_FD_EN				(0x1ul << 11ul) 		// 1 bit
// reserved 10
#define FLEXCAN3_MCR_IDAM				(0x3ul << 8ul)			// 2 bits
// reserved 7
#define FLEXCAN3_MCR_MAXMB				(0x7Ful << 0ul) 		// 7 bits

/// Control 1 Register - FLEXCAN3_CTRL1 - (R/W)
#define FLEXCAN3_CTRL1_PRESDIV			(0xFFul << 24ul)		// 8 bits
#define FLEXCAN3_CTRL1_RJW				(0x3ul << 22ul)			// 2 bits
#define FLEXCAN3_CTRL1_PSEG1			(0x7ul << 19ul)			// 3 bits
#define FLEXCAN3_CTRL1_PSEG2			(0x7ul << 16ul)			// 3 bits
#define FLEXCAN3_CTRL1_BOFF_MSK			(0x1ul << 15ul)			// 1 bit
#define FLEXCAN3_CTRL1_ERR_MSK			(0x1ul << 14ul)			// 1 bit
// reserved 13
#define FLEXCAN3_CTRL1_LPB				(0x1ul << 12ul)			// 1 bit
#define FLEXCAN3_CTRL1_TWRN_MSK			(0x1ul << 11ul)			// 1 bit
#define FLEXCAN3_CTRL1_RWRN_MSK			(0x1ul << 10ul)			// 1 bit
// reserved 9 - 8
#define FLEXCAN3_CTRL1_SMP				(0x1ul << 7ul)			// 1 bit
#define FLEXCAN3_CTRL1_BOFF_REC			(0x1ul << 6ul)			// 1 bit
#define FLEXCAN3_CTRL1_TSYN				(0x1ul << 5ul)			// 1 bit
#define FLEXCAN3_CTRL1_LBUF				(0x1ul << 4ul)			// 1 bit
#define FLEXCAN3_CTRL1_LOM				(0x1ul << 3ul)			// 1 bit
#define FLEXCAN3_CTRL1_PROP_SEG			(0x7ul << 0ul)			// 3 bits

/// Free Running Timer Register - FLEXCAN3_TIMER - (R/W)
// reserved 31 - 16
#define FLEXCAN3_TIMER_TIMER			(0xFFFFul << 0ul) 		// 16 bits

/// Receiving Mailboxes Global Mask Register - FLEXCAN3_RXMGMASK - (R/W)
#define FLEXCAN3_RXMGMASK_MASK			(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Receiving 14 Mask Register - FLEXCAN3_RX14MASK - (R/W)
#define FLEXCAN3_RX14MASK_MASK			(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Receiving 15 Mask Register - FLEXCAN3_RX15MASK - (R/W)
#define FLEXCAN3_RX15MASK_MASK			(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Error Counter - FLEXCAN3_ECR - (R/W)
#define FLEXCAN3_ECR_RX_ERR_CNT_FAST	(0xFFul << 24ul)		// 8 bits
#define FLEXCAN3_ECR_TX_ERR_CNT_FAST	(0xFFul << 16ul)		// 8 bits
#define FLEXCAN3_ECR_RX_ERR_CNT			(0xFFul << 8ul)			// 8 bits
#define FLEXCAN3_ECR_TX_ERR_CNT			(0xFFul << 0ul)			// 8 bits

/// Error and Status 1 Register - FLEXCAN3_ESR1 - (Read Clears Register)
#define FLEXCAN3_ESR1_BIT1_ERR_FAST		(0x1ul << 31ul) 		// 1 bit
#define FLEXCAN3_ESR1_BIT0_ERR_FAST		(0x1ul << 30ul) 		// 1 bit
// reserved 29
#define FLEXCAN3_ESR1_CRC_ERR_FAST 		(0x1ul << 28ul) 		// 1 bit
#define FLEXCAN3_ESR1_FRM_ERR_FAST		(0x1ul << 27ul) 		// 1 bit
#define FLEXCAN3_ESR1_STF_ERR_FAST		(0x1ul << 26ul) 		// 1 bit
// reserved 25 - 22
#define FLEXCAN3_ESR1_ERR_OVR 			(0x1ul << 21ul) 		// 1 bit
#define FLEXCAN3_ESR1_ERR_INT_FAST		(0x1ul << 20ul) 		// 1 bit
#define FLEXCAN3_ESR1_BOFF_DONE_INT		(0x1ul << 19ul) 		// 1 bit
#define FLEXCAN3_ESR1_SYNCH				(0x1ul << 18ul) 		// 1 bit
#define FLEXCAN3_ESR1_TWRN_INT 			(0x1ul << 17ul) 		// 1 bit
#define FLEXCAN3_ESR1_RWRN_INT 			(0x1ul << 16ul) 		// 1 bit
#define FLEXCAN3_ESR1_BIT1_ERR 			(0x1ul << 15ul) 		// 1 bit
#define FLEXCAN3_ESR1_BIT0_ERR 			(0x1ul << 14ul) 		// 1 bit
#define FLEXCAN3_ESR1_ACK_ERR 			(0x1ul << 13ul) 		// 1 bit
#define FLEXCAN3_ESR1_CRC_ERR 			(0x1ul << 12ul) 		// 1 bit
#define FLEXCAN3_ESR1_FRM_ERR 			(0x1ul << 11ul) 		// 1 bit
#define FLEXCAN3_ESR1_STF_ERR 			(0x1ul << 10ul) 		// 1 bit
#define FLEXCAN3_ESR1_TX_WRN 			(0x1ul << 9ul)			// 1 bit
#define FLEXCAN3_ESR1_RX_WRN 			(0x1ul << 8ul)			// 1 bit
#define FLEXCAN3_ESR1_IDLE 				(0x1ul << 7ul)			// 1 bit
#define FLEXCAN3_ESR1_TX 				(0x1ul << 6ul)			// 1 bit
#define FLEXCAN3_ESR1_FLT_CONF 			(0x3ul << 4ul)			// 2 bits
#define FLEXCAN3_ESR1_RX 				(0x1ul << 3ul)			// 1 bit
#define FLEXCAN3_ESR1_BOFF_INT 			(0x1ul << 2ul)			// 1 bit
#define FLEXCAN3_ESR1_ERR_INT 			(0x1ul << 1ul)			// 1 bit
#define FLEXCAN3_ESR1_WAK_INT 			(0x1ul << 0ul)			// 1 bit

/// Interrupt Masks 2 Register - FLEXCAN3_IMASK2 - (R/W)
#define FLEXCAN3_IMASK2_MASK			(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Interrupt Masks 1 Register - FLEXCAN3_IMASK1 - (R/W)
#define FLEXCAN3_IMASK1_MASK			(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Interrupt Flags 2 Register - FLEXCAN3_IFLAG2 - (R/W - Write 1s to clear)
#define FLEXCAN3_IFLAG2_MASK			(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Interrupt Flags 1 Register - FLEXCAN3_IFLAG1 - (R/W - Write 1s to clear)
#define FLEXCAN3_IFLAG1_BUF31TO8		(0xFFFFFFul << 8ul) 	// 24 bits
#define FLEXCAN3_IFLAG1_BUF7			(0x1ul << 7ul)			// 1 bit
#define FLEXCAN3_IFLAG1_BUF6			(0x1ul << 6ul)			// 1 bit
#define FLEXCAN3_IFLAG1_BUF5			(0x1ul << 5ul)			// 1 bit
#define FLEXCAN3_IFLAG1_BUF4TO1			(0xFul << 1ul)			// 4 bits
#define FLEXCAN3_IFLAG1_BUF0			(0x1ul << 0ul)			// 1 bit

/// Control 2 Register - FLEXCAN3_CTRL2 - (R/W)
#define FLEXCAN3_CTRL2_ERR_MSK_FAST		(0x1ul << 31ul) 		// 1 bit
#define FLEXCAN3_CTRL2_BOFF_DONE_MSK	(0x1ul << 30ul) 		// 1 bit
// reserved 29 - 28
#define FLEXCAN3_CTRL2_RF_EN			(0xFul << 24ul)			// 4 bits
#define FLEXCAN3_CTRL2_TASD				(0x1Ful << 19ul)		// 5 bits
#define FLEXCAN3_CTRL2_MRP				(0x1ul << 18ul)			// 1 bit
#define FLEXCAN3_CTRL2_RRS				(0x1ul << 17ul)			// 1 bit
#define FLEXCAN3_CTRL2_EAC_EN			(0x1ul << 16ul)			// 1 bit
#define FLEXCAN3_CTRL2_TIMER_SRC		(0x1ul << 15ul)			// 1 bit
#define FLEXCAN3_CTRL2_PPEXC_EN			(0x1ul << 14ul)			// 1 bit
// reserved 13
#define FLEXCAN3_CTRL2_ISO_CAN_FD_EN	(0x1ul << 12ul)			// 1 bit
#define FLEXCAN3_CTRL2_EDFLT_DIS		(0x1ul << 11ul)			// 1 bit
// reserved 10 - 0

/// Error and Status 2 Register - FLEXCAN3_ESR2 - (Read Clears Register)
// reserved 31 - 23
#define FLEXCAN3_ESR2_LPTM				(0x7Ful << 16ul)		// 7 bits
// reserved 15
#define FLEXCAN3_ESR2_VPS				(0x1ul << 14ul)			// 1 bit
#define FLEXCAN3_ESR2_IMB				(0x1ul << 13ul)			// 1 bit
// reserved 12 - 0

/// CRC Register - FLEXCAN3_CRCR - (R/W)
// reserved 31 - 23
#define FLEXCAN3_CRCR_MBCRC				(0x7Ful << 16ul)		// 7 bits
// reserved 15
#define FLEXCAN3_CRCR_TXCRC				(0x7FFFul << 0ul)		// 15 bits

/// Rx FIFO Global Mask Register - FLEXCAN3_RXFGMASK - (R/W)
#define FLEXCAN3_RXFGMASK_MASK			(0xFFFFFFFFul << 0ul) 	// 32 bits

/// Rx FIFO Information Register - FLEXCAN3_RXFIR - (Read Only)
// reserved 31 - 9
#define FLEXCAN3_RXFIR_IDHIT			(0x1FFul << 0ul)		// 9 bits

/// CAN Bit Timing Register - FLEXCAN3_CBT - (R/W)
#define FLEXCAN3_CBT_BTF				(0x1ul << 31ul)			// 1 bit
#define FLEXCAN3_CBT_EPRESDIV			(0x3FFul << 21ul)		// 10 bits
#define FLEXCAN3_CBT_ERJW				(0x1Ful << 16ul)		// 5 bits
#define FLEXCAN3_CBT_EPROPSEG			(0x3Ful << 10ul)		// 6 bits
#define FLEXCAN3_CBT_EPSEG1				(0x1Ful << 5ul)			// 5 bits
#define FLEXCAN3_CBT_EPSEG2				(0x1Ful << 0ul)			// 5 bits

/// Rx Individual Mask Registers - FLEXCAN3_RXIMRn - (R/W)
#define FLEXCAN3_RXIMR_MASK				(0xFFFFFFFFul << 0ul) 	// 32 bits

/// CAN FD Control Register - FLEXCAN3_FDCTRL - (R/W)
#define FLEXCAN3_FDCTRL_FD_RATE			(0x1ul << 31ul)			// 1 bit
// reserved 30 - 21
#define FLEXCAN3_FDCTRL_MBDSR1			(0x3ul << 19ul)			// 2 bits
// reserved 18
#define FLEXCAN3_FDCTRL_MBDSR0			(0x3ul << 16ul)			// 2 bits
#define FLEXCAN3_FDCTRL_TDC_EN			(0x1ul << 15ul)			// 1 bit
#define FLEXCAN3_FDCTRL_TDCFAIL			(0x1ul << 14ul)			// 1 bit
// reserved 13
#define FLEXCAN3_FDCTRL_TDC_OFF			(0x1Ful << 8ul)			// 5 bits
// reserved 7 - 6
#define FLEXCAN3_FDCTRL_TDCVAL			(0x3Ful << 0ul)			// 6 bits

/// CAN FD Bit Timing Register - FLEXCAN3_FDCBT - (R/W)
// reserved 31 - 30
#define FLEXCAN3_FDCBT_FPRESDIV			(0x3FFul << 20ul)		// 10 bits
// reserved 19
#define FLEXCAN3_FDCBT_FRJW				(0x7ul << 16ul)			// 3 bits
// reserved 15
#define FLEXCAN3_FDCBT_FPROPSEG			(0x1Ful << 10ul)		// 5 bits
// reserved 9 - 8
#define FLEXCAN3_FDCBT_FPSEG1			(0x7ul << 5ul)			// 3 bits
// reserved 4 - 3
#define FLEXCAN3_FDCBT_FPSEG2			(0x7ul << 0ul)			// 3 bits

/// CAN FD CRC Register - FLEXCAN3_FDCRC - (R/W)
// reserved 31
#define FLEXCAN3_FDCRC_MBCRC			(0x7Ful << 24ul)		// 7 bits
// reserved 23 - 21
#define FLEXCAN3_FDCRC_TXCRC			(0xFFFFFul << 0ul)		// 20 bits


#pragma endregion

////////////////////////////////////////
// FlexCAN Message Buffer Info        //
////////////////////////////////////////
#pragma region MESSAGE BUFFER INFO

/// Message Buffer Sections

#define FLEXCAN_MB_WORD_CS				(0)
#define FLEXCAN_MB_WORD_ID				(1)
#define FLEXCAN_MB_WORD_DATA0			(2)
#define FLEXCAN_MB_WORD_DATA1			(3)

/// Message Buffer Control and Status Word 

#define FLEXCAN_MB_CS_CODE				(0xFul << 24ul)			// 4 bits
#define FLEXCAN_MB_CS_SRR				(0x1ul << 22ul)			// 1 bit
#define FLEXCAN_MB_CS_IDE				(0x1ul << 21ul)			// 1 bit
#define FLEXCAN_MB_CS_RTR				(0x1ul << 20ul)			// 1 bit
#define FLEXCAN_MB_CS_DLC				(0xFul << 16ul)			// 4 bits
#define FLEXCAN_MB_CS_TIMESTAMP			(0xFFFFul << 0ul)		// 16 bits

/// Message Buffer ID Word

#define FLEXCAN_MB_ID_PRIO				(0x7ul << 29ul)			// 3 bits
#define FLEXCAN_MB_ID_STD				(0x7FFul << 18ul)		// 11 bits
#define FLEXCAN_MB_ID_EXT				(0x1FFFFFFFul << 0ul)	// 29 bits

/// Message Buffer CODE Codes

#define FLEXCAN_MB_CODE_RX_INACTIVE		(0b0000ul)
#define FLEXCAN_MB_CODE_RX_EMPTY		(0b0100ul)
#define FLEXCAN_MB_CODE_RX_FULL			(0b0010ul)
#define FLEXCAN_MB_CODE_RX_OVERRUN		(0b0110ul)
#define FLEXCAN_MB_CODE_RX_RANSWER		(0b1010ul)
#define FLEXCAN_MB_CODE_RX_BUSY			(0b0001ul)				// this is a mask
#define FLEXCAN_MB_CODE_TX_INACTIVE		(0b1000ul)
#define FLEXCAN_MB_CODE_TX_ABORT		(0b1001ul)
#define FLEXCAN_MB_CODE_TX_DATA			(0b1100ul)
#define FLEXCAN_MB_CODE_TX_REMOTE		(0b1100ul)
#define FLEXCAN_MB_CODE_TX_TANSWER		(0b1110ul)

#pragma endregion // MESSAGE BUFFER INFO

#endif// BUFFCAN_IMXRT1062_REGISTERS_HPP
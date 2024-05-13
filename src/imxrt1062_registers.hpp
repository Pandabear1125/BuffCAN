#ifndef BUFFCAN_IMXRT1062_REGISTERS_HPP
#define BUFFCAN_IMXRT1062_REGISTERS_HPP

/// @file This file contains the register definitions and information for the i.MX RT1062 ARM Cortex-M7 microcontroller.

/**********\ BASE ADDRESSES /**********/
#pragma region BASE ADDRESSES

// FlexCAN BUS 1
#define FLEXCAN1_BASE       (0x401D'0000ul)
#define FLEXCAN1_MB_BASE    (0x401D'0080ul)
#define FLEXCAN1_MB_END     (0x401D'047Ful)
#define FLEXCAN1_END        (0x401D'3FFFul)

// FlexCAN BUS 2
#define FLEXCAN2_BASE       (0x401D'4000ul)
#define FLEXCAN2_MB_BASE    (0x401D'4080ul)
#define FLEXCAN2_MB_END     (0x401D'447Ful)
#define FLEXCAN2_END        (0x401D'7FFFul)

// FlexCAN BUS 3
#define FLEXCAN3_BASE       (0x401D'8000ul)
#define FLEXCAN3_MB_BASE    (0x401D'8080ul)
#define FLEXCAN3_MB_END     (0x401D'847Ful)
#define FLEXCAN3_END        (0x401D'BFFFul)

#pragma endregion   // BASE ADDRESSES

/**********\ BASE REGISTERS /**********/
#pragma region BASE REGISTERS

//// FlexCAN BUS 1

// Module Configuration Register (R/W)
#define FLEXCAN1_MCR        (FLEXCAN1_BASE + 0x0000ul)
// Control 1 Register (R/W)
#define FLEXCAN1_CTRL1      (FLEXCAN1_BASE + 0x0004ul)
// Free Running Timer Register (R/W)
#define FLEXCAN1_TIMER      (FLEXCAN1_BASE + 0x0008ul)
// Receiving Mailboxes Global Mask Register (R/W)
#define FLEXCAN1_RXMGMASK   (FLEXCAN1_BASE + 0x0010ul)
// Receiving Buffer 14 Mask Register (R/W)
#define FLEXCAN1_RX14MASK   (FLEXCAN1_BASE + 0x0014ul)
// Receiving Buffer 15 Mask Register (R/W)
#define FLEXCAN1_RX15MASK   (FLEXCAN1_BASE + 0x0018ul)
// Error Counter Register (R/W)
#define FLEXCAN1_ECR        (FLEXCAN1_BASE + 0x001Cul)
// Error and Status 1 Register (R/W)
#define FLEXCAN1_ESR1       (FLEXCAN1_BASE + 0x0020ul)
// Interrupt Masks 2 Register (R/W)
#define FLEXCAN1_IMASK2     (FLEXCAN1_BASE + 0x0024ul)
// Interrupt Masks 1 Register (R/W)
#define FLEXCAN1_IMASK1     (FLEXCAN1_BASE + 0x0028ul)
// Interrupt Flags 2 Register (R/W)
#define FLEXCAN1_IFLAG2     (FLEXCAN1_BASE + 0x002Cul)
// Interrupt Flags 1 Register (R/W)
#define FLEXCAN1_IFLAG1     (FLEXCAN1_BASE + 0x0030ul)
// Control 2 Register (R/W)
#define FLEXCAN1_CTRL2      (FLEXCAN1_BASE + 0x0034ul)
// Error and Status 2 Register (Read Only)
#define FLEXCAN1_ESR2       (FLEXCAN1_BASE + 0x0038ul)
// CRC Register (Read Only)
#define FLEXCAN1_CRCR       (FLEXCAN1_BASE + 0x0044ul)
// Receiving FIFO Global Mask Register (R/W)
#define FLEXCAN1_RXFGMASK   (FLEXCAN1_BASE + 0x0048ul)
// Receiving FIFO Information Register (Read Only)
#define FLEXCAN1_RXFIR      (FLEXCAN1_BASE + 0x004Cul)
// Debug 1 Register (Read Only)
#define FLEXCAN1_DBG1       (FLEXCAN1_BASE + 0x0058ul)
// Debug 2 Register (Read Only)
#define FLEXCAN1_DBG2       (FLEXCAN1_BASE + 0x005Cul)

// Individual Message Buffers (R/W)
#define FLEXCAN1_MBx(x)     (FLEXCAN1_MB_BASE + (x * 0x10ul))

#define FLEXCAN1_MB0        (FLEXCAN1_MB_BASE + 0x0000ul)
#define FLEXCAN1_MB1        (FLEXCAN1_MB_BASE + 0x0010ul)
#define FLEXCAN1_MB2        (FLEXCAN1_MB_BASE + 0x0020ul)
#define FLEXCAN1_MB3        (FLEXCAN1_MB_BASE + 0x0030ul)
#define FLEXCAN1_MB4        (FLEXCAN1_MB_BASE + 0x0040ul)
#define FLEXCAN1_MB5        (FLEXCAN1_MB_BASE + 0x0050ul)
#define FLEXCAN1_MB6        (FLEXCAN1_MB_BASE + 0x0060ul)
#define FLEXCAN1_MB7        (FLEXCAN1_MB_BASE + 0x0070ul)
#define FLEXCAN1_MB8        (FLEXCAN1_MB_BASE + 0x0080ul)
#define FLEXCAN1_MB9        (FLEXCAN1_MB_BASE + 0x0090ul)
#define FLEXCAN1_MB10       (FLEXCAN1_MB_BASE + 0x00A0ul)
#define FLEXCAN1_MB11       (FLEXCAN1_MB_BASE + 0x00B0ul)
#define FLEXCAN1_MB12       (FLEXCAN1_MB_BASE + 0x00C0ul)
#define FLEXCAN1_MB13       (FLEXCAN1_MB_BASE + 0x00D0ul)
#define FLEXCAN1_MB14       (FLEXCAN1_MB_BASE + 0x00E0ul)
#define FLEXCAN1_MB15       (FLEXCAN1_MB_BASE + 0x00F0ul)
#define FLEXCAN1_MB16       (FLEXCAN1_MB_BASE + 0x0100ul)
#define FLEXCAN1_MB17       (FLEXCAN1_MB_BASE + 0x0110ul)
#define FLEXCAN1_MB18       (FLEXCAN1_MB_BASE + 0x0120ul)
#define FLEXCAN1_MB19       (FLEXCAN1_MB_BASE + 0x0130ul)
#define FLEXCAN1_MB20       (FLEXCAN1_MB_BASE + 0x0140ul)
#define FLEXCAN1_MB21       (FLEXCAN1_MB_BASE + 0x0150ul)
#define FLEXCAN1_MB22       (FLEXCAN1_MB_BASE + 0x0160ul)
#define FLEXCAN1_MB23       (FLEXCAN1_MB_BASE + 0x0170ul)
#define FLEXCAN1_MB24       (FLEXCAN1_MB_BASE + 0x0180ul)
#define FLEXCAN1_MB25       (FLEXCAN1_MB_BASE + 0x0190ul)
#define FLEXCAN1_MB26       (FLEXCAN1_MB_BASE + 0x01A0ul)
#define FLEXCAN1_MB27       (FLEXCAN1_MB_BASE + 0x01B0ul)
#define FLEXCAN1_MB28       (FLEXCAN1_MB_BASE + 0x01C0ul)
#define FLEXCAN1_MB29       (FLEXCAN1_MB_BASE + 0x01D0ul)
#define FLEXCAN1_MB30       (FLEXCAN1_MB_BASE + 0x01E0ul)
#define FLEXCAN1_MB31       (FLEXCAN1_MB_BASE + 0x01F0ul)
#define FLEXCAN1_MB32       (FLEXCAN1_MB_BASE + 0x0200ul)
#define FLEXCAN1_MB33       (FLEXCAN1_MB_BASE + 0x0210ul)
#define FLEXCAN1_MB34       (FLEXCAN1_MB_BASE + 0x0220ul)
#define FLEXCAN1_MB35       (FLEXCAN1_MB_BASE + 0x0230ul)
#define FLEXCAN1_MB36       (FLEXCAN1_MB_BASE + 0x0240ul)
#define FLEXCAN1_MB37       (FLEXCAN1_MB_BASE + 0x0250ul)
#define FLEXCAN1_MB38       (FLEXCAN1_MB_BASE + 0x0260ul)
#define FLEXCAN1_MB39       (FLEXCAN1_MB_BASE + 0x0270ul)
#define FLEXCAN1_MB40       (FLEXCAN1_MB_BASE + 0x0280ul)
#define FLEXCAN1_MB41       (FLEXCAN1_MB_BASE + 0x0290ul)
#define FLEXCAN1_MB42       (FLEXCAN1_MB_BASE + 0x02A0ul)
#define FLEXCAN1_MB43       (FLEXCAN1_MB_BASE + 0x02B0ul)
#define FLEXCAN1_MB44       (FLEXCAN1_MB_BASE + 0x02C0ul)
#define FLEXCAN1_MB45       (FLEXCAN1_MB_BASE + 0x02D0ul)
#define FLEXCAN1_MB46       (FLEXCAN1_MB_BASE + 0x02E0ul)
#define FLEXCAN1_MB47       (FLEXCAN1_MB_BASE + 0x02F0ul)
#define FLEXCAN1_MB48       (FLEXCAN1_MB_BASE + 0x0300ul)
#define FLEXCAN1_MB49       (FLEXCAN1_MB_BASE + 0x0310ul)
#define FLEXCAN1_MB50       (FLEXCAN1_MB_BASE + 0x0320ul)
#define FLEXCAN1_MB51       (FLEXCAN1_MB_BASE + 0x0330ul)
#define FLEXCAN1_MB52       (FLEXCAN1_MB_BASE + 0x0340ul)
#define FLEXCAN1_MB53       (FLEXCAN1_MB_BASE + 0x0350ul)
#define FLEXCAN1_MB54       (FLEXCAN1_MB_BASE + 0x0360ul)
#define FLEXCAN1_MB55       (FLEXCAN1_MB_BASE + 0x0370ul)
#define FLEXCAN1_MB56       (FLEXCAN1_MB_BASE + 0x0380ul)
#define FLEXCAN1_MB57       (FLEXCAN1_MB_BASE + 0x0390ul)
#define FLEXCAN1_MB58       (FLEXCAN1_MB_BASE + 0x03A0ul)
#define FLEXCAN1_MB59       (FLEXCAN1_MB_BASE + 0x03B0ul)
#define FLEXCAN1_MB60       (FLEXCAN1_MB_BASE + 0x03C0ul)
#define FLEXCAN1_MB61       (FLEXCAN1_MB_BASE + 0x03D0ul)
#define FLEXCAN1_MB62       (FLEXCAN1_MB_BASE + 0x03E0ul)
#define FLEXCAN1_MB63       (FLEXCAN1_MB_BASE + 0x03F0ul)

// Receiving Individual Mask Registers (R/W)
#define FLEXCAN1_RXIMRx(x)  (FLEXCAN1_BASE + 0x0880ul + (x * 0x4ul))

#define FLEXCAN1_RXIMR0     (FLEXCAN1_BASE + 0x0880ul)
#define FLEXCAN1_RXIMR1     (FLEXCAN1_BASE + 0x0884ul)
#define FLEXCAN1_RXIMR2     (FLEXCAN1_BASE + 0x0888ul)
#define FLEXCAN1_RXIMR3     (FLEXCAN1_BASE + 0x088Cul)
#define FLEXCAN1_RXIMR4     (FLEXCAN1_BASE + 0x0890ul)
#define FLEXCAN1_RXIMR5     (FLEXCAN1_BASE + 0x0894ul)
#define FLEXCAN1_RXIMR6     (FLEXCAN1_BASE + 0x0898ul)
#define FLEXCAN1_RXIMR7     (FLEXCAN1_BASE + 0x089Cul)
#define FLEXCAN1_RXIMR8     (FLEXCAN1_BASE + 0x08A0ul)
#define FLEXCAN1_RXIMR9     (FLEXCAN1_BASE + 0x08A4ul)
#define FLEXCAN1_RXIMR10    (FLEXCAN1_BASE + 0x08A8ul)
#define FLEXCAN1_RXIMR11    (FLEXCAN1_BASE + 0x08ACul)
#define FLEXCAN1_RXIMR12    (FLEXCAN1_BASE + 0x08B0ul)
#define FLEXCAN1_RXIMR13    (FLEXCAN1_BASE + 0x08B4ul)
#define FLEXCAN1_RXIMR14    (FLEXCAN1_BASE + 0x08B8ul)
#define FLEXCAN1_RXIMR15    (FLEXCAN1_BASE + 0x08BCul)
#define FLEXCAN1_RXIMR16    (FLEXCAN1_BASE + 0x08C0ul)
#define FLEXCAN1_RXIMR17    (FLEXCAN1_BASE + 0x08C4ul)
#define FLEXCAN1_RXIMR18    (FLEXCAN1_BASE + 0x08C8ul)
#define FLEXCAN1_RXIMR19    (FLEXCAN1_BASE + 0x08CCul)
#define FLEXCAN1_RXIMR20    (FLEXCAN1_BASE + 0x08D0ul)
#define FLEXCAN1_RXIMR21    (FLEXCAN1_BASE + 0x08D4ul)
#define FLEXCAN1_RXIMR22    (FLEXCAN1_BASE + 0x08D8ul)
#define FLEXCAN1_RXIMR23    (FLEXCAN1_BASE + 0x08DCul)
#define FLEXCAN1_RXIMR24    (FLEXCAN1_BASE + 0x08E0ul)
#define FLEXCAN1_RXIMR25    (FLEXCAN1_BASE + 0x08E4ul)
#define FLEXCAN1_RXIMR26    (FLEXCAN1_BASE + 0x08E8ul)
#define FLEXCAN1_RXIMR27    (FLEXCAN1_BASE + 0x08ECul)
#define FLEXCAN1_RXIMR28    (FLEXCAN1_BASE + 0x08F0ul)
#define FLEXCAN1_RXIMR29    (FLEXCAN1_BASE + 0x08F4ul)
#define FLEXCAN1_RXIMR30    (FLEXCAN1_BASE + 0x08F8ul)
#define FLEXCAN1_RXIMR31    (FLEXCAN1_BASE + 0x08FCul)
#define FLEXCAN1_RXIMR32    (FLEXCAN1_BASE + 0x0900ul)
#define FLEXCAN1_RXIMR33    (FLEXCAN1_BASE + 0x0904ul)
#define FLEXCAN1_RXIMR34    (FLEXCAN1_BASE + 0x0908ul)
#define FLEXCAN1_RXIMR35    (FLEXCAN1_BASE + 0x090Cul)
#define FLEXCAN1_RXIMR36    (FLEXCAN1_BASE + 0x0910ul)
#define FLEXCAN1_RXIMR37    (FLEXCAN1_BASE + 0x0914ul)
#define FLEXCAN1_RXIMR38    (FLEXCAN1_BASE + 0x0918ul)
#define FLEXCAN1_RXIMR39    (FLEXCAN1_BASE + 0x091Cul)
#define FLEXCAN1_RXIMR40    (FLEXCAN1_BASE + 0x0920ul)
#define FLEXCAN1_RXIMR41    (FLEXCAN1_BASE + 0x0924ul)
#define FLEXCAN1_RXIMR42    (FLEXCAN1_BASE + 0x0928ul)
#define FLEXCAN1_RXIMR43    (FLEXCAN1_BASE + 0x092Cul)
#define FLEXCAN1_RXIMR44    (FLEXCAN1_BASE + 0x0930ul)
#define FLEXCAN1_RXIMR45    (FLEXCAN1_BASE + 0x0934ul)
#define FLEXCAN1_RXIMR46    (FLEXCAN1_BASE + 0x0938ul)
#define FLEXCAN1_RXIMR47    (FLEXCAN1_BASE + 0x093Cul)
#define FLEXCAN1_RXIMR48    (FLEXCAN1_BASE + 0x0940ul)
#define FLEXCAN1_RXIMR49    (FLEXCAN1_BASE + 0x0944ul)
#define FLEXCAN1_RXIMR50    (FLEXCAN1_BASE + 0x0948ul)
#define FLEXCAN1_RXIMR51    (FLEXCAN1_BASE + 0x094Cul)
#define FLEXCAN1_RXIMR52    (FLEXCAN1_BASE + 0x0950ul)
#define FLEXCAN1_RXIMR53    (FLEXCAN1_BASE + 0x0954ul)
#define FLEXCAN1_RXIMR54    (FLEXCAN1_BASE + 0x0958ul)
#define FLEXCAN1_RXIMR55    (FLEXCAN1_BASE + 0x095Cul)
#define FLEXCAN1_RXIMR56    (FLEXCAN1_BASE + 0x0960ul)
#define FLEXCAN1_RXIMR57    (FLEXCAN1_BASE + 0x0964ul)
#define FLEXCAN1_RXIMR58    (FLEXCAN1_BASE + 0x0968ul)
#define FLEXCAN1_RXIMR59    (FLEXCAN1_BASE + 0x096Cul)
#define FLEXCAN1_RXIMR60    (FLEXCAN1_BASE + 0x0970ul)
#define FLEXCAN1_RXIMR61    (FLEXCAN1_BASE + 0x0974ul)
#define FLEXCAN1_RXIMR62    (FLEXCAN1_BASE + 0x0978ul)
#define FLEXCAN1_RXIMR63    (FLEXCAN1_BASE + 0x097Cul)

// Glitch Filter Width Register (R/W)
#define FLEXCAN1_GFWR       (FLEXCAN1_BASE + 0x09E0ul)

//// FlexCAN BUS 2

// Module Configuration Register (R/W)
#define FLEXCAN2_MCR        (FLEXCAN2_BASE + 0x0000ul)
// Control 1 Register (R/W)
#define FLEXCAN2_CTRL1      (FLEXCAN2_BASE + 0x0004ul)
// Free Running Timer Register (R/W)
#define FLEXCAN2_TIMER      (FLEXCAN2_BASE + 0x0008ul)
// Receiving Mailboxes Global Mask Register (R/W)
#define FLEXCAN2_RXMGMASK   (FLEXCAN2_BASE + 0x0010ul)
// Receiving Buffer 14 Mask Register (R/W)
#define FLEXCAN2_RX14MASK   (FLEXCAN2_BASE + 0x0014ul)
// Receiving Buffer 15 Mask Register (R/W)
#define FLEXCAN2_RX15MASK   (FLEXCAN2_BASE + 0x0018ul)
// Error Counter Register (R/W)
#define FLEXCAN2_ECR        (FLEXCAN2_BASE + 0x001Cul)
// Error and Status 1 Register (R/W)
#define FLEXCAN2_ESR1       (FLEXCAN2_BASE + 0x0020ul)
// Interrupt Masks 2 Register (R/W)
#define FLEXCAN2_IMASK2     (FLEXCAN2_BASE + 0x0024ul)
// Interrupt Masks 1 Register (R/W)
#define FLEXCAN2_IMASK1     (FLEXCAN2_BASE + 0x0028ul)
// Interrupt Flags 2 Register (R/W)
#define FLEXCAN2_IFLAG2     (FLEXCAN2_BASE + 0x002Cul)
// Interrupt Flags 1 Register (R/W)
#define FLEXCAN2_IFLAG1     (FLEXCAN2_BASE + 0x0030ul)
// Control 2 Register (R/W)
#define FLEXCAN2_CTRL2      (FLEXCAN2_BASE + 0x0034ul)
// Error and Status 2 Register (Read Only)
#define FLEXCAN2_ESR2       (FLEXCAN2_BASE + 0x0038ul)
// CRC Register (Read Only)
#define FLEXCAN2_CRCR       (FLEXCAN2_BASE + 0x0044ul)
// Receiving FIFO Global Mask Register (R/W)
#define FLEXCAN2_RXFGMASK   (FLEXCAN2_BASE + 0x0048ul)
// Receiving FIFO Information Register (Read Only)
#define FLEXCAN2_RXFIR      (FLEXCAN2_BASE + 0x004Cul)
// Debug 1 Register (Read Only)
#define FLEXCAN2_DBG1       (FLEXCAN2_BASE + 0x0058ul)
// Debug 2 Register (Read Only)
#define FLEXCAN2_DBG2       (FLEXCAN2_BASE + 0x005Cul)

// Individual Message Buffers (R/W)
#define FLEXCAN2_MBx(x)     (FLEXCAN2_MB_BASE + (x * 0x10ul))

#define FLEXCAN2_MB0        (FLEXCAN2_MB_BASE + 0x0000ul)
#define FLEXCAN2_MB1        (FLEXCAN2_MB_BASE + 0x0010ul)
#define FLEXCAN2_MB2        (FLEXCAN2_MB_BASE + 0x0020ul)
#define FLEXCAN2_MB3        (FLEXCAN2_MB_BASE + 0x0030ul)
#define FLEXCAN2_MB4        (FLEXCAN2_MB_BASE + 0x0040ul)
#define FLEXCAN2_MB5        (FLEXCAN2_MB_BASE + 0x0050ul)
#define FLEXCAN2_MB6        (FLEXCAN2_MB_BASE + 0x0060ul)
#define FLEXCAN2_MB7        (FLEXCAN2_MB_BASE + 0x0070ul)
#define FLEXCAN2_MB8        (FLEXCAN2_MB_BASE + 0x0080ul)
#define FLEXCAN2_MB9        (FLEXCAN2_MB_BASE + 0x0090ul)
#define FLEXCAN2_MB10       (FLEXCAN2_MB_BASE + 0x00A0ul)
#define FLEXCAN2_MB11       (FLEXCAN2_MB_BASE + 0x00B0ul)
#define FLEXCAN2_MB12       (FLEXCAN2_MB_BASE + 0x00C0ul)
#define FLEXCAN2_MB13       (FLEXCAN2_MB_BASE + 0x00D0ul)
#define FLEXCAN2_MB14       (FLEXCAN2_MB_BASE + 0x00E0ul)
#define FLEXCAN2_MB15       (FLEXCAN2_MB_BASE + 0x00F0ul)
#define FLEXCAN2_MB16       (FLEXCAN2_MB_BASE + 0x0100ul)
#define FLEXCAN2_MB17       (FLEXCAN2_MB_BASE + 0x0110ul)
#define FLEXCAN2_MB18       (FLEXCAN2_MB_BASE + 0x0120ul)
#define FLEXCAN2_MB19       (FLEXCAN2_MB_BASE + 0x0130ul)
#define FLEXCAN2_MB20       (FLEXCAN2_MB_BASE + 0x0140ul)
#define FLEXCAN2_MB21       (FLEXCAN2_MB_BASE + 0x0150ul)
#define FLEXCAN2_MB22       (FLEXCAN2_MB_BASE + 0x0160ul)
#define FLEXCAN2_MB23       (FLEXCAN2_MB_BASE + 0x0170ul)
#define FLEXCAN2_MB24       (FLEXCAN2_MB_BASE + 0x0180ul)
#define FLEXCAN2_MB25       (FLEXCAN2_MB_BASE + 0x0190ul)
#define FLEXCAN2_MB26       (FLEXCAN2_MB_BASE + 0x01A0ul)
#define FLEXCAN2_MB27       (FLEXCAN2_MB_BASE + 0x01B0ul)
#define FLEXCAN2_MB28       (FLEXCAN2_MB_BASE + 0x01C0ul)
#define FLEXCAN2_MB29       (FLEXCAN2_MB_BASE + 0x01D0ul)
#define FLEXCAN2_MB30       (FLEXCAN2_MB_BASE + 0x01E0ul)
#define FLEXCAN2_MB31       (FLEXCAN2_MB_BASE + 0x01F0ul)
#define FLEXCAN2_MB32       (FLEXCAN2_MB_BASE + 0x0200ul)
#define FLEXCAN2_MB33       (FLEXCAN2_MB_BASE + 0x0210ul)
#define FLEXCAN2_MB34       (FLEXCAN2_MB_BASE + 0x0220ul)
#define FLEXCAN2_MB35       (FLEXCAN2_MB_BASE + 0x0230ul)
#define FLEXCAN2_MB36       (FLEXCAN2_MB_BASE + 0x0240ul)
#define FLEXCAN2_MB37       (FLEXCAN2_MB_BASE + 0x0250ul)
#define FLEXCAN2_MB38       (FLEXCAN2_MB_BASE + 0x0260ul)
#define FLEXCAN2_MB39       (FLEXCAN2_MB_BASE + 0x0270ul)
#define FLEXCAN2_MB40       (FLEXCAN2_MB_BASE + 0x0280ul)
#define FLEXCAN2_MB41       (FLEXCAN2_MB_BASE + 0x0290ul)
#define FLEXCAN2_MB42       (FLEXCAN2_MB_BASE + 0x02A0ul)
#define FLEXCAN2_MB43       (FLEXCAN2_MB_BASE + 0x02B0ul)
#define FLEXCAN2_MB44       (FLEXCAN2_MB_BASE + 0x02C0ul)
#define FLEXCAN2_MB45       (FLEXCAN2_MB_BASE + 0x02D0ul)
#define FLEXCAN2_MB46       (FLEXCAN2_MB_BASE + 0x02E0ul)
#define FLEXCAN2_MB47       (FLEXCAN2_MB_BASE + 0x02F0ul)
#define FLEXCAN2_MB48       (FLEXCAN2_MB_BASE + 0x0300ul)
#define FLEXCAN2_MB49       (FLEXCAN2_MB_BASE + 0x0310ul)
#define FLEXCAN2_MB50       (FLEXCAN2_MB_BASE + 0x0320ul)
#define FLEXCAN2_MB51       (FLEXCAN2_MB_BASE + 0x0330ul)
#define FLEXCAN2_MB52       (FLEXCAN2_MB_BASE + 0x0340ul)
#define FLEXCAN2_MB53       (FLEXCAN2_MB_BASE + 0x0350ul)
#define FLEXCAN2_MB54       (FLEXCAN2_MB_BASE + 0x0360ul)
#define FLEXCAN2_MB55       (FLEXCAN2_MB_BASE + 0x0370ul)
#define FLEXCAN2_MB56       (FLEXCAN2_MB_BASE + 0x0380ul)
#define FLEXCAN2_MB57       (FLEXCAN2_MB_BASE + 0x0390ul)
#define FLEXCAN2_MB58       (FLEXCAN2_MB_BASE + 0x03A0ul)
#define FLEXCAN2_MB59       (FLEXCAN2_MB_BASE + 0x03B0ul)
#define FLEXCAN2_MB60       (FLEXCAN2_MB_BASE + 0x03C0ul)
#define FLEXCAN2_MB61       (FLEXCAN2_MB_BASE + 0x03D0ul)
#define FLEXCAN2_MB62       (FLEXCAN2_MB_BASE + 0x03E0ul)
#define FLEXCAN2_MB63       (FLEXCAN2_MB_BASE + 0x03F0ul)

// Receiving Individual Mask Registers (R/W)
#define FLEXCAN2_RXIMRx(x)  (FLEXCAN2_BASE + 0x0880ul + (x * 0x4ul))

#define FLEXCAN2_RXIMR0     (FLEXCAN2_BASE + 0x0880ul)
#define FLEXCAN2_RXIMR1     (FLEXCAN2_BASE + 0x0884ul)
#define FLEXCAN2_RXIMR2     (FLEXCAN2_BASE + 0x0888ul)
#define FLEXCAN2_RXIMR3     (FLEXCAN2_BASE + 0x088Cul)
#define FLEXCAN2_RXIMR4     (FLEXCAN2_BASE + 0x0890ul)
#define FLEXCAN2_RXIMR5     (FLEXCAN2_BASE + 0x0894ul)
#define FLEXCAN2_RXIMR6     (FLEXCAN2_BASE + 0x0898ul)
#define FLEXCAN2_RXIMR7     (FLEXCAN2_BASE + 0x089Cul)
#define FLEXCAN2_RXIMR8     (FLEXCAN2_BASE + 0x08A0ul)
#define FLEXCAN2_RXIMR9     (FLEXCAN2_BASE + 0x08A4ul)
#define FLEXCAN2_RXIMR10    (FLEXCAN2_BASE + 0x08A8ul)
#define FLEXCAN2_RXIMR11    (FLEXCAN2_BASE + 0x08ACul)
#define FLEXCAN2_RXIMR12    (FLEXCAN2_BASE + 0x08B0ul)
#define FLEXCAN2_RXIMR13    (FLEXCAN2_BASE + 0x08B4ul)
#define FLEXCAN2_RXIMR14    (FLEXCAN2_BASE + 0x08B8ul)
#define FLEXCAN2_RXIMR15    (FLEXCAN2_BASE + 0x08BCul)
#define FLEXCAN2_RXIMR16    (FLEXCAN2_BASE + 0x08C0ul)
#define FLEXCAN2_RXIMR17    (FLEXCAN2_BASE + 0x08C4ul)
#define FLEXCAN2_RXIMR18    (FLEXCAN2_BASE + 0x08C8ul)
#define FLEXCAN2_RXIMR19    (FLEXCAN2_BASE + 0x08CCul)
#define FLEXCAN2_RXIMR20    (FLEXCAN2_BASE + 0x08D0ul)
#define FLEXCAN2_RXIMR21    (FLEXCAN2_BASE + 0x08D4ul)
#define FLEXCAN2_RXIMR22    (FLEXCAN2_BASE + 0x08D8ul)
#define FLEXCAN2_RXIMR23    (FLEXCAN2_BASE + 0x08DCul)
#define FLEXCAN2_RXIMR24    (FLEXCAN2_BASE + 0x08E0ul)
#define FLEXCAN2_RXIMR25    (FLEXCAN2_BASE + 0x08E4ul)
#define FLEXCAN2_RXIMR26    (FLEXCAN2_BASE + 0x08E8ul)
#define FLEXCAN2_RXIMR27    (FLEXCAN2_BASE + 0x08ECul)
#define FLEXCAN2_RXIMR28    (FLEXCAN2_BASE + 0x08F0ul)
#define FLEXCAN2_RXIMR29    (FLEXCAN2_BASE + 0x08F4ul)
#define FLEXCAN2_RXIMR30    (FLEXCAN2_BASE + 0x08F8ul)
#define FLEXCAN2_RXIMR31    (FLEXCAN2_BASE + 0x08FCul)
#define FLEXCAN2_RXIMR32    (FLEXCAN2_BASE + 0x0900ul)
#define FLEXCAN2_RXIMR33    (FLEXCAN2_BASE + 0x0904ul)
#define FLEXCAN2_RXIMR34    (FLEXCAN2_BASE + 0x0908ul)
#define FLEXCAN2_RXIMR35    (FLEXCAN2_BASE + 0x090Cul)
#define FLEXCAN2_RXIMR36    (FLEXCAN2_BASE + 0x0910ul)
#define FLEXCAN2_RXIMR37    (FLEXCAN2_BASE + 0x0914ul)
#define FLEXCAN2_RXIMR38    (FLEXCAN2_BASE + 0x0918ul)
#define FLEXCAN2_RXIMR39    (FLEXCAN2_BASE + 0x091Cul)
#define FLEXCAN2_RXIMR40    (FLEXCAN2_BASE + 0x0920ul)
#define FLEXCAN2_RXIMR41    (FLEXCAN2_BASE + 0x0924ul)
#define FLEXCAN2_RXIMR42    (FLEXCAN2_BASE + 0x0928ul)
#define FLEXCAN2_RXIMR43    (FLEXCAN2_BASE + 0x092Cul)
#define FLEXCAN2_RXIMR44    (FLEXCAN2_BASE + 0x0930ul)
#define FLEXCAN2_RXIMR45    (FLEXCAN2_BASE + 0x0934ul)
#define FLEXCAN2_RXIMR46    (FLEXCAN2_BASE + 0x0938ul)
#define FLEXCAN2_RXIMR47    (FLEXCAN2_BASE + 0x093Cul)
#define FLEXCAN2_RXIMR48    (FLEXCAN2_BASE + 0x0940ul)
#define FLEXCAN2_RXIMR49    (FLEXCAN2_BASE + 0x0944ul)
#define FLEXCAN2_RXIMR50    (FLEXCAN2_BASE + 0x0948ul)
#define FLEXCAN2_RXIMR51    (FLEXCAN2_BASE + 0x094Cul)
#define FLEXCAN2_RXIMR52    (FLEXCAN2_BASE + 0x0950ul)
#define FLEXCAN2_RXIMR53    (FLEXCAN2_BASE + 0x0954ul)
#define FLEXCAN2_RXIMR54    (FLEXCAN2_BASE + 0x0958ul)
#define FLEXCAN2_RXIMR55    (FLEXCAN2_BASE + 0x095Cul)
#define FLEXCAN2_RXIMR56    (FLEXCAN2_BASE + 0x0960ul)
#define FLEXCAN2_RXIMR57    (FLEXCAN2_BASE + 0x0964ul)
#define FLEXCAN2_RXIMR58    (FLEXCAN2_BASE + 0x0968ul)
#define FLEXCAN2_RXIMR59    (FLEXCAN2_BASE + 0x096Cul)
#define FLEXCAN2_RXIMR60    (FLEXCAN2_BASE + 0x0970ul)
#define FLEXCAN2_RXIMR61    (FLEXCAN2_BASE + 0x0974ul)
#define FLEXCAN2_RXIMR62    (FLEXCAN2_BASE + 0x0978ul)
#define FLEXCAN2_RXIMR63    (FLEXCAN2_BASE + 0x097Cul)

// Glitch Filter Width Register (R/W)
#define FLEXCAN2_GFWR       (FLEXCAN2_BASE + 0x09E0ul)

//// FlexCAN BUS 3

// Module Configuration Register (R/W)
#define FLEXCAN3_MCR        (FLEXCAN3_BASE + 0x0000ul)
// Control 1 Register (R/W)
#define FLEXCAN3_CTRL1      (FLEXCAN3_BASE + 0x0004ul)
// Free Running Timer Register (R/W)
#define FLEXCAN3_TIMER      (FLEXCAN3_BASE + 0x0008ul)
// Receiving Mailboxes Global Mask Register (R/W)
#define FLEXCAN3_RXMGMASK   (FLEXCAN3_BASE + 0x0010ul)
// Receiving 14 Mask Register (R/W)
#define FLEXCAN3_RX14MASK   (FLEXCAN3_BASE + 0x0014ul)
// Receiving 15 Mask Register (R/W)
#define FLEXCAN3_RX15MASK   (FLEXCAN3_BASE + 0x0018ul)
// Error Counter (R/W)
#define FLEXCAN3_ECR        (FLEXCAN3_BASE + 0x001Cul)
// Error and Status 1 Register (Read Clears Register)
#define FLEXCAN3_ESR1       (FLEXCAN3_BASE + 0x0020ul)
// Interrupt Mask 2 Register (R/W)
#define FLEXCAN3_IMASK2     (FLEXCAN3_BASE + 0x0024ul)
// Interrupt Mask 1 Register (R/W)
#define FLEXCAN3_IMASK1     (FLEXCAN3_BASE + 0x0028ul)
// Interrupt Flags 2 Register (R/W - Write 1s to clear)
#define FLEXCAN3_IFLAG2     (FLEXCAN3_BASE + 0x002Cul)
// Interrupt Flags 1 Register (R/W - Write 1s to clear)
#define FLEXCAN3_IFLAG1     (FLEXCAN3_BASE + 0x0030ul)
// Control 2 Register (R/W)
#define FLEXCAN3_CTRL2      (FLEXCAN3_BASE + 0x0034ul)
// Error and Status 2 Register (Read Only)
#define FLEXCAN3_ESR2       (FLEXCAN3_BASE + 0x0038ul)
// CRC Register (Read Only)
#define FLEXCAN3_CRCR       (FLEXCAN3_BASE + 0x0044ul)
// Receiving FIFO Global Mask Register (R/W)
#define FLEXCAN3_RXFGMASK   (FLEXCAN3_BASE + 0x0048ul)
// Receiving FIFO Information Register (Read Only)
#define FLEXCAN3_RXFIR      (FLEXCAN3_BASE + 0x004Cul)
// CAN Bit Timing Register (R/W)
#define FLEXCAN3_CBT        (FLEXCAN3_BASE + 0x0050ul)

// Individual Message Buffers (R/W)
#define FLEXCAN3_NUM_8B_MB  (64ul)
#define FLEXCAN3_8B_MBx(x)  (FLEXCAN3_MB_BASE + (x * 0x10ul))
#define FLEXCAN3_NUM_16B_MB (42ul)
#define FLEXCAN3_16B_MBx(x) (FLEXCAN3_MB_BASE + (x * 0x18ul))
#define FLEXCAN3_NUM_32B_MB (24ul)
#define FLEXCAN3_32B_MBx(x) (FLEXCAN3_MB_BASE + (x * 0x28ul))
#define FLEXCAN3_NUM_64B_MB (14ul)
#define FLEXCAN3_64B_MBx(x) (FLEXCAN3_MB_BASE + (x * 0x48ul))

#define FLEXCAN3_8B_MB0     (FLEXCAN3_MB_BASE + 0x0000ul)
#define FLEXCAN3_8B_MB1     (FLEXCAN3_MB_BASE + 0x0010ul)
#define FLEXCAN3_8B_MB2     (FLEXCAN3_MB_BASE + 0x0020ul)
#define FLEXCAN3_8B_MB3     (FLEXCAN3_MB_BASE + 0x0030ul)
#define FLEXCAN3_8B_MB4     (FLEXCAN3_MB_BASE + 0x0040ul)
#define FLEXCAN3_8B_MB5     (FLEXCAN3_MB_BASE + 0x0050ul)
#define FLEXCAN3_8B_MB6     (FLEXCAN3_MB_BASE + 0x0060ul)
#define FLEXCAN3_8B_MB7     (FLEXCAN3_MB_BASE + 0x0070ul)
#define FLEXCAN3_8B_MB8     (FLEXCAN3_MB_BASE + 0x0080ul)
#define FLEXCAN3_8B_MB9     (FLEXCAN3_MB_BASE + 0x0090ul)
#define FLEXCAN3_8B_MB10    (FLEXCAN3_MB_BASE + 0x00A0ul)
#define FLEXCAN3_8B_MB11    (FLEXCAN3_MB_BASE + 0x00B0ul)
#define FLEXCAN3_8B_MB12    (FLEXCAN3_MB_BASE + 0x00C0ul)
#define FLEXCAN3_8B_MB13    (FLEXCAN3_MB_BASE + 0x00D0ul)
#define FLEXCAN3_8B_MB14    (FLEXCAN3_MB_BASE + 0x00E0ul)
#define FLEXCAN3_8B_MB15    (FLEXCAN3_MB_BASE + 0x00F0ul)
#define FLEXCAN3_8B_MB16    (FLEXCAN3_MB_BASE + 0x0100ul)
#define FLEXCAN3_8B_MB17    (FLEXCAN3_MB_BASE + 0x0110ul)
#define FLEXCAN3_8B_MB18    (FLEXCAN3_MB_BASE + 0x0120ul)
#define FLEXCAN3_8B_MB19    (FLEXCAN3_MB_BASE + 0x0130ul)
#define FLEXCAN3_8B_MB20    (FLEXCAN3_MB_BASE + 0x0140ul)
#define FLEXCAN3_8B_MB21    (FLEXCAN3_MB_BASE + 0x0150ul)
#define FLEXCAN3_8B_MB22    (FLEXCAN3_MB_BASE + 0x0160ul)
#define FLEXCAN3_8B_MB23    (FLEXCAN3_MB_BASE + 0x0170ul)
#define FLEXCAN3_8B_MB24    (FLEXCAN3_MB_BASE + 0x0180ul)
#define FLEXCAN3_8B_MB25    (FLEXCAN3_MB_BASE + 0x0190ul)
#define FLEXCAN3_8B_MB26    (FLEXCAN3_MB_BASE + 0x01A0ul)
#define FLEXCAN3_8B_MB27    (FLEXCAN3_MB_BASE + 0x01B0ul)
#define FLEXCAN3_8B_MB28    (FLEXCAN3_MB_BASE + 0x01C0ul)
#define FLEXCAN3_8B_MB29    (FLEXCAN3_MB_BASE + 0x01D0ul)
#define FLEXCAN3_8B_MB30    (FLEXCAN3_MB_BASE + 0x01E0ul)
#define FLEXCAN3_8B_MB31    (FLEXCAN3_MB_BASE + 0x01F0ul)
#define FLEXCAN3_8B_MB32    (FLEXCAN3_MB_BASE + 0x0200ul)
#define FLEXCAN3_8B_MB33    (FLEXCAN3_MB_BASE + 0x0210ul)
#define FLEXCAN3_8B_MB34    (FLEXCAN3_MB_BASE + 0x0220ul)
#define FLEXCAN3_8B_MB35    (FLEXCAN3_MB_BASE + 0x0230ul)
#define FLEXCAN3_8B_MB36    (FLEXCAN3_MB_BASE + 0x0240ul)
#define FLEXCAN3_8B_MB37    (FLEXCAN3_MB_BASE + 0x0250ul)
#define FLEXCAN3_8B_MB38    (FLEXCAN3_MB_BASE + 0x0260ul)
#define FLEXCAN3_8B_MB39    (FLEXCAN3_MB_BASE + 0x0270ul)
#define FLEXCAN3_8B_MB40    (FLEXCAN3_MB_BASE + 0x0280ul)
#define FLEXCAN3_8B_MB41    (FLEXCAN3_MB_BASE + 0x0290ul)
#define FLEXCAN3_8B_MB42    (FLEXCAN3_MB_BASE + 0x02A0ul)
#define FLEXCAN3_8B_MB43    (FLEXCAN3_MB_BASE + 0x02B0ul)
#define FLEXCAN3_8B_MB44    (FLEXCAN3_MB_BASE + 0x02C0ul)
#define FLEXCAN3_8B_MB45    (FLEXCAN3_MB_BASE + 0x02D0ul)
#define FLEXCAN3_8B_MB46    (FLEXCAN3_MB_BASE + 0x02E0ul)
#define FLEXCAN3_8B_MB47    (FLEXCAN3_MB_BASE + 0x02F0ul)
#define FLEXCAN3_8B_MB48    (FLEXCAN3_MB_BASE + 0x0300ul)
#define FLEXCAN3_8B_MB49    (FLEXCAN3_MB_BASE + 0x0310ul)
#define FLEXCAN3_8B_MB50    (FLEXCAN3_MB_BASE + 0x0320ul)
#define FLEXCAN3_8B_MB51    (FLEXCAN3_MB_BASE + 0x0330ul)
#define FLEXCAN3_8B_MB52    (FLEXCAN3_MB_BASE + 0x0340ul)
#define FLEXCAN3_8B_MB53    (FLEXCAN3_MB_BASE + 0x0350ul)
#define FLEXCAN3_8B_MB54    (FLEXCAN3_MB_BASE + 0x0360ul)
#define FLEXCAN3_8B_MB55    (FLEXCAN3_MB_BASE + 0x0370ul)
#define FLEXCAN3_8B_MB56    (FLEXCAN3_MB_BASE + 0x0380ul)
#define FLEXCAN3_8B_MB57    (FLEXCAN3_MB_BASE + 0x0390ul)
#define FLEXCAN3_8B_MB58    (FLEXCAN3_MB_BASE + 0x03A0ul)
#define FLEXCAN3_8B_MB59    (FLEXCAN3_MB_BASE + 0x03B0ul)
#define FLEXCAN3_8B_MB60    (FLEXCAN3_MB_BASE + 0x03C0ul)
#define FLEXCAN3_8B_MB61    (FLEXCAN3_MB_BASE + 0x03D0ul)
#define FLEXCAN3_8B_MB62    (FLEXCAN3_MB_BASE + 0x03E0ul)
#define FLEXCAN3_8B_MB63    (FLEXCAN3_MB_BASE + 0x03F0ul)

#define FLEXCAN3_16B_MB0    (FLEXCAN3_MB_BASE + 0x0200ul)
#define FLEXCAN3_16B_MB1    (FLEXCAN3_MB_BASE + 0x0218ul)
#define FLEXCAN3_16B_MB2    (FLEXCAN3_MB_BASE + 0x0230ul)
#define FLEXCAN3_16B_MB3    (FLEXCAN3_MB_BASE + 0x0248ul)
#define FLEXCAN3_16B_MB4    (FLEXCAN3_MB_BASE + 0x0260ul)
#define FLEXCAN3_16B_MB5    (FLEXCAN3_MB_BASE + 0x0278ul)
#define FLEXCAN3_16B_MB6    (FLEXCAN3_MB_BASE + 0x0290ul)
#define FLEXCAN3_16B_MB7    (FLEXCAN3_MB_BASE + 0x02A8ul)
#define FLEXCAN3_16B_MB8    (FLEXCAN3_MB_BASE + 0x02C0ul)
#define FLEXCAN3_16B_MB9    (FLEXCAN3_MB_BASE + 0x02D8ul)
#define FLEXCAN3_16B_MB10   (FLEXCAN3_MB_BASE + 0x02F0ul)
#define FLEXCAN3_16B_MB11   (FLEXCAN3_MB_BASE + 0x0308ul)
#define FLEXCAN3_16B_MB12   (FLEXCAN3_MB_BASE + 0x0320ul)
#define FLEXCAN3_16B_MB13   (FLEXCAN3_MB_BASE + 0x0338ul)
#define FLEXCAN3_16B_MB14   (FLEXCAN3_MB_BASE + 0x0350ul)
#define FLEXCAN3_16B_MB15   (FLEXCAN3_MB_BASE + 0x0368ul)
#define FLEXCAN3_16B_MB16   (FLEXCAN3_MB_BASE + 0x0380ul)
#define FLEXCAN3_16B_MB17   (FLEXCAN3_MB_BASE + 0x0398ul)
#define FLEXCAN3_16B_MB18   (FLEXCAN3_MB_BASE + 0x03B0ul)
#define FLEXCAN3_16B_MB19   (FLEXCAN3_MB_BASE + 0x03C8ul)
#define FLEXCAN3_16B_MB20   (FLEXCAN3_MB_BASE + 0x03E0ul)
#define FLEXCAN3_16B_MB21   (FLEXCAN3_MB_BASE + 0x03F8ul)
#define FLEXCAN3_16B_MB22   (FLEXCAN3_MB_BASE + 0x0410ul)
#define FLEXCAN3_16B_MB23   (FLEXCAN3_MB_BASE + 0x0428ul)
#define FLEXCAN3_16B_MB24   (FLEXCAN3_MB_BASE + 0x0440ul)
#define FLEXCAN3_16B_MB25   (FLEXCAN3_MB_BASE + 0x0458ul)
#define FLEXCAN3_16B_MB26   (FLEXCAN3_MB_BASE + 0x0470ul)
#define FLEXCAN3_16B_MB27   (FLEXCAN3_MB_BASE + 0x0488ul)
#define FLEXCAN3_16B_MB28   (FLEXCAN3_MB_BASE + 0x04A0ul)
#define FLEXCAN3_16B_MB29   (FLEXCAN3_MB_BASE + 0x04B8ul)
#define FLEXCAN3_16B_MB30   (FLEXCAN3_MB_BASE + 0x04D0ul)
#define FLEXCAN3_16B_MB31   (FLEXCAN3_MB_BASE + 0x04E8ul)
#define FLEXCAN3_16B_MB32   (FLEXCAN3_MB_BASE + 0x0500ul)
#define FLEXCAN3_16B_MB33   (FLEXCAN3_MB_BASE + 0x0518ul)
#define FLEXCAN3_16B_MB34   (FLEXCAN3_MB_BASE + 0x0530ul)
#define FLEXCAN3_16B_MB35   (FLEXCAN3_MB_BASE + 0x0548ul)
#define FLEXCAN3_16B_MB36   (FLEXCAN3_MB_BASE + 0x0560ul)
#define FLEXCAN3_16B_MB37   (FLEXCAN3_MB_BASE + 0x0578ul)
#define FLEXCAN3_16B_MB38   (FLEXCAN3_MB_BASE + 0x0590ul)
#define FLEXCAN3_16B_MB39   (FLEXCAN3_MB_BASE + 0x05A8ul)
#define FLEXCAN3_16B_MB40   (FLEXCAN3_MB_BASE + 0x05C0ul)
#define FLEXCAN3_16B_MB41   (FLEXCAN3_MB_BASE + 0x05D8ul)

#define FLEXCAN3_32B_MB0    (FLEXCAN3_MB_BASE + 0x0500ul)
#define FLEXCAN3_32B_MB1    (FLEXCAN3_MB_BASE + 0x0530ul)
#define FLEXCAN3_32B_MB2    (FLEXCAN3_MB_BASE + 0x0560ul)
#define FLEXCAN3_32B_MB3    (FLEXCAN3_MB_BASE + 0x0590ul)
#define FLEXCAN3_32B_MB4    (FLEXCAN3_MB_BASE + 0x05C0ul)
#define FLEXCAN3_32B_MB5    (FLEXCAN3_MB_BASE + 0x05F0ul)
#define FLEXCAN3_32B_MB6    (FLEXCAN3_MB_BASE + 0x0620ul)
#define FLEXCAN3_32B_MB7    (FLEXCAN3_MB_BASE + 0x0650ul)
#define FLEXCAN3_32B_MB8    (FLEXCAN3_MB_BASE + 0x0680ul)
#define FLEXCAN3_32B_MB9    (FLEXCAN3_MB_BASE + 0x06B0ul)
#define FLEXCAN3_32B_MB10   (FLEXCAN3_MB_BASE + 0x06E0ul)
#define FLEXCAN3_32B_MB11   (FLEXCAN3_MB_BASE + 0x0710ul)
#define FLEXCAN3_32B_MB12   (FLEXCAN3_MB_BASE + 0x0740ul)
#define FLEXCAN3_32B_MB13   (FLEXCAN3_MB_BASE + 0x0770ul)
#define FLEXCAN3_32B_MB14   (FLEXCAN3_MB_BASE + 0x07A0ul)
#define FLEXCAN3_32B_MB15   (FLEXCAN3_MB_BASE + 0x07D0ul)
#define FLEXCAN3_32B_MB16   (FLEXCAN3_MB_BASE + 0x0800ul)
#define FLEXCAN3_32B_MB17   (FLEXCAN3_MB_BASE + 0x0830ul)
#define FLEXCAN3_32B_MB18   (FLEXCAN3_MB_BASE + 0x0860ul)
#define FLEXCAN3_32B_MB19   (FLEXCAN3_MB_BASE + 0x0890ul)
#define FLEXCAN3_32B_MB20   (FLEXCAN3_MB_BASE + 0x08C0ul)
#define FLEXCAN3_32B_MB21   (FLEXCAN3_MB_BASE + 0x08F0ul)
#define FLEXCAN3_32B_MB22   (FLEXCAN3_MB_BASE + 0x0920ul)
#define FLEXCAN3_32B_MB23   (FLEXCAN3_MB_BASE + 0x0950ul)

#define FLEXCAN3_64B_MB0    (FLEXCAN3_MB_BASE + 0x0980ul)
#define FLEXCAN3_64B_MB1    (FLEXCAN3_MB_BASE + 0x09C8ul)
#define FLEXCAN3_64B_MB2    (FLEXCAN3_MB_BASE + 0x0A10ul)
#define FLEXCAN3_64B_MB3    (FLEXCAN3_MB_BASE + 0x0A58ul)
#define FLEXCAN3_64B_MB4    (FLEXCAN3_MB_BASE + 0x0AA0ul)
#define FLEXCAN3_64B_MB5    (FLEXCAN3_MB_BASE + 0x0AE8ul)
#define FLEXCAN3_64B_MB6    (FLEXCAN3_MB_BASE + 0x0B30ul)
#define FLEXCAN3_64B_MB7    (FLEXCAN3_MB_BASE + 0x0B78ul)
#define FLEXCAN3_64B_MB8    (FLEXCAN3_MB_BASE + 0x0BC0ul)
#define FLEXCAN3_64B_MB9    (FLEXCAN3_MB_BASE + 0x0C08ul)
#define FLEXCAN3_64B_MB10   (FLEXCAN3_MB_BASE + 0x0C50ul)
#define FLEXCAN3_64B_MB11   (FLEXCAN3_MB_BASE + 0x0C98ul)
#define FLEXCAN3_64B_MB12   (FLEXCAN3_MB_BASE + 0x0CE0ul)
#define FLEXCAN3_64B_MB13   (FLEXCAN3_MB_BASE + 0x0D28ul)

// Receiving Individual Mask Registers (R/W)
#define FLEXCAN3_RXIMRx(x)  (FLEXCAN3_BASE + 0x0880ul + (x * 0x4ul))

#define FLEXCAN3_RXIMR0     (FLEXCAN3_BASE + 0x0880ul)
#define FLEXCAN3_RXIMR1     (FLEXCAN3_BASE + 0x0884ul)
#define FLEXCAN3_RXIMR2     (FLEXCAN3_BASE + 0x0888ul)
#define FLEXCAN3_RXIMR3     (FLEXCAN3_BASE + 0x088Cul)
#define FLEXCAN3_RXIMR4     (FLEXCAN3_BASE + 0x0890ul)
#define FLEXCAN3_RXIMR5     (FLEXCAN3_BASE + 0x0894ul)
#define FLEXCAN3_RXIMR6     (FLEXCAN3_BASE + 0x0898ul)
#define FLEXCAN3_RXIMR7     (FLEXCAN3_BASE + 0x089Cul)
#define FLEXCAN3_RXIMR8     (FLEXCAN3_BASE + 0x08A0ul)
#define FLEXCAN3_RXIMR9     (FLEXCAN3_BASE + 0x08A4ul)
#define FLEXCAN3_RXIMR10    (FLEXCAN3_BASE + 0x08A8ul)
#define FLEXCAN3_RXIMR11    (FLEXCAN3_BASE + 0x08ACul)
#define FLEXCAN3_RXIMR12    (FLEXCAN3_BASE + 0x08B0ul)
#define FLEXCAN3_RXIMR13    (FLEXCAN3_BASE + 0x08B4ul)
#define FLEXCAN3_RXIMR14    (FLEXCAN3_BASE + 0x08B8ul)
#define FLEXCAN3_RXIMR15    (FLEXCAN3_BASE + 0x08BCul)
#define FLEXCAN3_RXIMR16    (FLEXCAN3_BASE + 0x08C0ul)
#define FLEXCAN3_RXIMR17    (FLEXCAN3_BASE + 0x08C4ul)
#define FLEXCAN3_RXIMR18    (FLEXCAN3_BASE + 0x08C8ul)
#define FLEXCAN3_RXIMR19    (FLEXCAN3_BASE + 0x08CCul)
#define FLEXCAN3_RXIMR20    (FLEXCAN3_BASE + 0x08D0ul)
#define FLEXCAN3_RXIMR21    (FLEXCAN3_BASE + 0x08D4ul)
#define FLEXCAN3_RXIMR22    (FLEXCAN3_BASE + 0x08D8ul)
#define FLEXCAN3_RXIMR23    (FLEXCAN3_BASE + 0x08DCul)
#define FLEXCAN3_RXIMR24    (FLEXCAN3_BASE + 0x08E0ul)
#define FLEXCAN3_RXIMR25    (FLEXCAN3_BASE + 0x08E4ul)
#define FLEXCAN3_RXIMR26    (FLEXCAN3_BASE + 0x08E8ul)
#define FLEXCAN3_RXIMR27    (FLEXCAN3_BASE + 0x08ECul)
#define FLEXCAN3_RXIMR28    (FLEXCAN3_BASE + 0x08F0ul)
#define FLEXCAN3_RXIMR29    (FLEXCAN3_BASE + 0x08F4ul)
#define FLEXCAN3_RXIMR30    (FLEXCAN3_BASE + 0x08F8ul)
#define FLEXCAN3_RXIMR31    (FLEXCAN3_BASE + 0x08FCul)
#define FLEXCAN3_RXIMR32    (FLEXCAN3_BASE + 0x0900ul)
#define FLEXCAN3_RXIMR33    (FLEXCAN3_BASE + 0x0904ul)
#define FLEXCAN3_RXIMR34    (FLEXCAN3_BASE + 0x0908ul)
#define FLEXCAN3_RXIMR35    (FLEXCAN3_BASE + 0x090Cul)
#define FLEXCAN3_RXIMR36    (FLEXCAN3_BASE + 0x0910ul)
#define FLEXCAN3_RXIMR37    (FLEXCAN3_BASE + 0x0914ul)
#define FLEXCAN3_RXIMR38    (FLEXCAN3_BASE + 0x0918ul)
#define FLEXCAN3_RXIMR39    (FLEXCAN3_BASE + 0x091Cul)
#define FLEXCAN3_RXIMR40    (FLEXCAN3_BASE + 0x0920ul)
#define FLEXCAN3_RXIMR41    (FLEXCAN3_BASE + 0x0924ul)
#define FLEXCAN3_RXIMR42    (FLEXCAN3_BASE + 0x0928ul)
#define FLEXCAN3_RXIMR43    (FLEXCAN3_BASE + 0x092Cul)
#define FLEXCAN3_RXIMR44    (FLEXCAN3_BASE + 0x0930ul)
#define FLEXCAN3_RXIMR45    (FLEXCAN3_BASE + 0x0934ul)
#define FLEXCAN3_RXIMR46    (FLEXCAN3_BASE + 0x0938ul)
#define FLEXCAN3_RXIMR47    (FLEXCAN3_BASE + 0x093Cul)
#define FLEXCAN3_RXIMR48    (FLEXCAN3_BASE + 0x0940ul)
#define FLEXCAN3_RXIMR49    (FLEXCAN3_BASE + 0x0944ul)
#define FLEXCAN3_RXIMR50    (FLEXCAN3_BASE + 0x0948ul)
#define FLEXCAN3_RXIMR51    (FLEXCAN3_BASE + 0x094Cul)
#define FLEXCAN3_RXIMR52    (FLEXCAN3_BASE + 0x0950ul)
#define FLEXCAN3_RXIMR53    (FLEXCAN3_BASE + 0x0954ul)
#define FLEXCAN3_RXIMR54    (FLEXCAN3_BASE + 0x0958ul)
#define FLEXCAN3_RXIMR55    (FLEXCAN3_BASE + 0x095Cul)
#define FLEXCAN3_RXIMR56    (FLEXCAN3_BASE + 0x0960ul)
#define FLEXCAN3_RXIMR57    (FLEXCAN3_BASE + 0x0964ul)
#define FLEXCAN3_RXIMR58    (FLEXCAN3_BASE + 0x0968ul)
#define FLEXCAN3_RXIMR59    (FLEXCAN3_BASE + 0x096Cul)
#define FLEXCAN3_RXIMR60    (FLEXCAN3_BASE + 0x0970ul)
#define FLEXCAN3_RXIMR61    (FLEXCAN3_BASE + 0x0974ul)
#define FLEXCAN3_RXIMR62    (FLEXCAN3_BASE + 0x0978ul)
#define FLEXCAN3_RXIMR63    (FLEXCAN3_BASE + 0x097Cul)

// CAN FD Control Register (R/W)
#define FLEXCAN3_FDCTRL     (FLEXCAN3_BASE + 0x0C00ul)
// CAN FD Bit Timing Register (R/W)
#define FLEXCAN3_FDCBT      (FLEXCAN3_BASE + 0x0C04ul)
// CAN FD CRC Register (Read Only)
#define FLEXCAN3_FDCRC      (FLEXCAN3_BASE + 0x0C08ul)

#pragma endregion   // BASE REGISTERS

/**********\ REGISTER INFO  /**********/
#pragma region REGISTER INFO

// Each of these register sections act as bitmasks for the register

/// Module Configuration Register - FLEXCANx_MCR - (R/W)
#define FLEXCAN_MCR_MDIS        (0x1ul << 31ul)   // 1 bit
#define FLEXCAN_MCR_FRZ         (0x1ul << 30ul)   // 1 bit
#define FLEXCAN_MCR_FEN         (0x1ul << 29ul)   // 1 bit
#define FLEXCAN_MCR_HALT        (0x1ul << 28ul)   // 1 bit
#define FLEXCAN_MCR_NOTRDY      (0x1ul << 27ul)   // 1 bit
#define FLEXCAN_MCR_WAK_MSK     (0x1ul << 26ul)   // 1 bit
#define FLEXCAN_MCR_SOFT_RST    (0x1ul << 25ul)   // 1 bit
#define FLEXCAN_MCR_FRZ_ACK     (0x1ul << 24ul)   // 1 bit
#define FLEXCAN_MCR_SUPV        (0x1ul << 23ul)   // 1 bit
#define FLEXCAN_MCR_SLF_WAK     (0x1ul << 22ul)   // 1 bit
#define FLEXCAN_MCR_WRN_EN      (0x1ul << 21ul)   // 1 bit
#define FLEXCAN_MCR_LPM_ACK     (0x1ul << 20ul)   // 1 bit
#define FLEXCAN_MCR_WAK_SRC     (0x1ul << 19ul)   // 1 bit
// reserved 18
#define FLEXCAN_MCR_SRX_DIS     (0x1ul << 17ul)   // 1 bit
#define FLEXCAN_MCR_IRMQ        (0x1ul << 16ul)   // 1 bit
// reserved 15
// reserved 14
#define FLEXCAN_MCR_LPRIO_EN    (0x1ul << 13ul)   // 1 bit
#define FLEXCAN_MCR_AEN         (0x1ul << 12ul)   // 1 bit
// reserved 11
// reserved 10
#define FLEXCAN_MCR_IDAM        (0x3ul << 8ul)    // 2 bits
// reserved 7
#define FLEXCAN_MCR_MAXMB       (0x7Ful << 0ul)  // 7 bits

/// Control 1 Register - FLEXCANx_CTRL1 - (R/W)
#define FLEXCAN_CTRL1_PRESDIV   (0xFFul << 24ul) // 8 bits
#define FLEXCAN_CTRL1_RJW       (0x3ul << 22ul)   // 2 bits
#define FLEXCAN_CTRL1_PSEG1     (0x7ul << 19ul)   // 3 bits
#define FLEXCAN_CTRL1_PSEG2     (0x7ul << 16ul)   // 3 bits
#define FLEXCAN_CTRL1_BOFF_MSK  (0x1ul << 15ul)   // 1 bit
#define FLEXCAN_CTRL1_ERR_MSK   (0x1ul << 14ul)   // 1 bit
// reserved 13
#define FLEXCAN_CTRL1_LPB       (0x1ul << 12ul)   // 1 bit
#define FLEXCAN_CTRL1_TWRN_MSK  (0x1ul << 11ul)   // 1 bit
#define FLEXCAN_CTRL1_RWRN_MSK  (0x1ul << 10ul)   // 1 bit
// reserved 9
// reserved 8
#define FLEXCAN_CTRL1_SMP       (0x1ul << 7ul)    // 1 bit
#define FLEXCAN_CTRL1_BOFF_REC  (0x1ul << 6ul)    // 1 bit
#define FLEXCAN_CTRL1_TSYN      (0x1ul << 5ul)    // 1 bit
#define FLEXCAN_CTRL1_LBUF      (0x1ul << 4ul)    // 1 bit
#define FLEXCAN_CTRL1_LOM       (0x1ul << 3ul)    // 1 bit
#define FLEXCAN_CTRL1_PROP_SEG  (0x7ul << 0ul)    // 3 bits

/// Free Running Timer Register - FLEXCANx_TIMER - (R/W)
#define FLEXCAN_TIMER_TIMER     (0xFFFFul << 0ul)   // 16 bits
// reserved 16 - 31

/// Receiving Mailboxes Global Mask Register - FLEXCANx_RXMGMASK - (R/W)
#define FLEXCAN_RXMGMASK_MASK   (0xFFFFFFFFul << 0ul)   // 32 bits

/// Receiving 14 Mask Register - FLEXCANx_RX14MASK - (R/W)
#define FLEXCAN_RX14MASK_MASK   (0xFFFFFFFFul << 0ul)   // 32 bits

/// Receiving 15 Mask Register - FLEXCANx_RX15MASK - (R/W)
#define FLEXCAN_RX15MASK_MASK   (0xFFFFFFFFul << 0ul)   // 32 bits

/// Error Counter - FLEXCANx_ECR - (R/W)
// reserved 31 - 16
#define FLEXCAN_ECR_RX_ERR_COUNTER  (0xFFul << 8ul)    // 8 bits
#define FLEXCAN_ECR_TX_ERR_COUNTER  (0xFFul << 0ul)    // 8 bits

/// Error and Status 1 Register - FLEXCANx_ESR1 - (Read Clears Register)
// reserved 31 - 19
#define FLEXCAN_ESR1_SYNCH      (0x1ul << 18ul)   // 1 bit
#define FLEXCAN_ESR1_TWRN_INT   (0x1ul << 17ul)   // 1 bit
#define FLEXCAN_ESR1_RWRN_INT   (0x1ul << 16ul)   // 1 bit
#define FLEXCAN_ESR1_BIT1_ERR   (0x1ul << 15ul)   // 1 bit
#define FLEXCAN_ESR1_BIT0_ERR   (0x1ul << 14ul)   // 1 bit
#define FLEXCAN_ESR1_ACK_ERR    (0x1ul << 13ul)   // 1 bit
#define FLEXCAN_ESR1_CRC_ERR    (0x1ul << 12ul)   // 1 bit
#define FLEXCAN_ESR1_FRM_ERR    (0x1ul << 11ul)   // 1 bit
#define FLEXCAN_ESR1_STF_ERR    (0x1ul << 10ul)   // 1 bit
#define FLEXCAN_ESR1_TX_WRN     (0x1ul << 9ul)    // 1 bit
#define FLEXCAN_ESR1_RX_WRN     (0x1ul << 8ul)    // 1 bit
#define FLEXCAN_ESR1_IDLE       (0x1ul << 7ul)    // 1 bit
#define FLEXCAN_ESR1_TX         (0x1ul << 6ul)    // 1 bit
#define FLEXCAN_ESR1_FLT_CONF   (0x3ul << 4ul)    // 2 bit
#define FLEXCAN_ESR1_RX         (0x1ul << 3ul)    // 1 bit
#define FLEXCAN_ESR1_BOFF_INT   (0x1ul << 2ul)    // 1 bit
#define FLEXCAN_ESR1_ERR_INT    (0x1ul << 1ul)    // 1 bit
#define FLEXCAN_ESR1_WAK_INT    (0x1ul << 0ul)    // 1 bit

/// Interrupt Masks 2 Register - FLEXCANx_IMASK2 - (R/W)
#define FLEXCAN_IMASK2_MASK     (0xFFFFFFFFul << 0ul)   // 32 bits

/// Interrupt Masks 1 Register - FLEXCANx_IMASK1 - (R/W)
#define FLEXCAN_IMASK1_MASK     (0xFFFFFFFFul << 0ul)   // 32 bits

/// Interrupt Flags 2 Register - FLEXCANx_IFLAG2 - (R/W - Write 1s to clear)
#define FLEXCAN_IFLAG2_MASK     (0xFFFFFFFFul << 0ul)   // 32 bits

/// Interrupt Flags 1 Register - FLEXCANx_IFLAG1 - (R/W - Write 1s to clear)
#define FLEXCAN_IFLAG1_BUF31TO8 (0xFFFFFFul << 8ul)     // 24 bits
#define FLEXCAN_IFLAG1_BUF7     (0x1ul << 7ul)          // 1 bit
#define FLEXCAN_IFLAG1_BUF6     (0x1ul << 6ul)          // 1 bit
#define FLEXCAN_IFLAG1_BUF5     (0x1ul << 5ul)          // 1 bit
#define FLEXCAN_IFLAG1_BUF4TO0  (0x1Ful << 0ul)         // 5 bits

/// Control 2 Register - FLEXCANx_CTRL2 - (R/W)
// bit 31 must be 0
// reserved 30 - 29
#define FLEXCAN_CTRL2_WRMFRZ    (0x1ul << 28ul)   // 1 bit
#define FLEXCAN_CTRL2_RFFN      (0xFul << 24ul)   // 4 bits
#define FLEXCAN_CTRL2_TASD      (0x1Ful << 19ul)  // 5 bits
#define FLEXCAN_CTRL2_MRP       (0x1ul << 18ul)   // 1 bit
#define FLEXCAN_CTRL2_RRS       (0x1ul << 17ul)   // 1 bit
#define FLEXCAN_CTRL2_EACEN     (0x1ul << 16ul)   // 1 bit
// reserved 15 - 0

/// Error and Status 2 Register - FLEXCANx_ESR2 - (Read Clears Register)
// reserved 31 - 23
#define FLEXCAN_ESR2_LPTM       (0x7Ful << 16ul)  // 7 bits
// reserved 15
#define FLEXCAN_ESR2_VPS        (0x1ul << 14ul)   // 1 bit
#define FLEXCAN_ESR2_IMB        (0x1ul << 13ul)   // 1 bit
// reserved 12 - 0

/// CRC Register - FLEXCANx_CRCR - (R/W)
// reserved 31 - 23
#define FLEXCAN_CRCR_MBCRC      (0x7Ful << 16ul)    // 7 bits
// reserved 15
#define FLEXCAN_CRCR_TXCRC      (0x7FFFul << 0ul)   // 15 bits

/// Rx FIFO Global Mask Register - FLEXCANx_RXFGMASK - (R/W)
#define FLEXCAN_RXFGMASK_MASK   (0xFFFFFFFFul << 0ul)   // 32 bits

/// Rx FIFO Information Register - FLEXCANx_RXFIR - (Read Only)
// reserved 31 - 9
#define FLEXCAN_RXFIR_IDHIT     (0x1FFul << 0ul)   // 9 bits

/// Debug 1 Register - FLEXCANx_DBG1 - (R/W)
// reserved 31 - 29
#define FLEXCAN_DBG1_CBN        (0x1Ful << 24ul)    // 5 bits
// reserved 23 - 6
#define FLEXCAN_DBG1_CFSM       (0x3Ful << 0ul)     // 6 bits

/// Debug 2 Register - FLEXCANx_DBG2 - (R/W)
// bits 31 - 16 must be 0
#define FLEXCAN_DBG2_APP        (0x1ul << 15ul)     // 1 bit
#define FLEXCAN_DBG2_TAP        (0x7Ful << 8ul)     // 7 bits
#define FLEXCAN_DBG2_MPP        (0x1ul << 7ul)      // 1 bit
#define FLEXCAN_DBG2_RMP        (0x7Ful << 0ul)     // 7 bits

/// Rx Individual Mask Registers - FLEXCANx_RXIMRn - (R/W)
#define FLEXCAN_RXIMR_MASK      (0xFFFFFFFFul << 0ul)   // 32 bits

/// Glitch Filter Width Registers - FLEXCANx_GFWR - (R/W)
// bits 31 - 8 must be 0
#define FLEXCAN_GFWR_GFWR       (0xFFul << 0ul)     // 8 bits

#pragma endregion

#endif  // BUFFCAN_IMXRT1062_REGISTERS_HPP
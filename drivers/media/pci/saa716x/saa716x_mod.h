#ifndef __SAA716x_MOD_H
#define __SAA716x_MOD_H

/* BAR = 17 bits */
/*
	VI0	0x00000000
	VI1	0x00001000
	FGPI0	0x00002000
	FGPI1	0x00003000
	FGPI2	0x00004000
	FGPI3	0x00005000
	AI0	0x00006000
	AI1	0x00007000
	BAM	0x00008000
	MMU	0x00009000
	MSI	0x0000a000
	I2C_B	0x0000b000
	I2C_A	0x0000c000
	SPI	0x0000d000
	GPIO	0x0000e000
	PHI_0	0x0000f000
	CGU	0x00013000
	DCS	0x00014000
	GREG	0x00012000

	PHI_1	0x00020000
*/

#define VI0				0x00000000
#define VI1				0x00001000
#define FGPI0				0x00002000
#define FGPI1				0x00003000
#define FGPI2				0x00004000
#define FGPI3				0x00005000
#define AI0				0x00006000
#define AI1				0x00007000
#define BAM				0x00008000
#define MMU				0x00009000
#define MSI				0x0000a000
#define I2C_B				0x0000b000
#define I2C_A				0x0000c000
#define SPI				0x0000d000
#define GPIO				0x0000e000
#define PHI_0				0x0000f000
#define GREG				0x00012000
#define CGU				0x00013000
#define DCS				0x00014000
#define PHI_1				0x00020000

#endif /* __SAA716x_MOD_H */
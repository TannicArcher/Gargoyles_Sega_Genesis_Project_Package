/*
	File:		MEMMAPA.H

	Contains:	This file defines the basic memory map example from
		the Sega Genesis Software Manual for 40 cell mode.
	
	NOTE:		If you accidentally include this file twice or with
		its alternate, MEMMAPB.H(32 cell mode), you will get a compile-
		time error.

	Written by:	Burt Sloane & Randel B. Reiss of Technopop

	Copyright:	c 1990 by Sega of America, Inc., all rights reserved.

	Change History:

	To Do:
*/

/************************************************************************/
/* This file describes how you might set up the VDP for 40 cells:	*/
/*									*/
/*		0xffff	+-----------------------+			*/
/*			| Scroll B		|			*/
/*			|	character map	|			*/
/*		0xe000	+-----------------------+			*/
/*			| Scroll A		|			*/
/*			|	character map	|			*/
/*		0xc000	+-----------------------+			*/
/*			| Window character map	|			*/
/*		0xb000	+-----------------------+			*/
/*			| Horizontal scroll	|			*/
/*		0xac00	+-----------------------+			*/
/*			| Sprite list		|			*/
/*		0xa800	+-----------------------+			*/
/*			. Character definition	.			*/
/*			.	memory		.			*/
/*		0x0000	+-----------------------+			*/
/*									*/
/************************************************************************/

#ifdef __memmap
	if this line gets compiled, you have included two memory maps...
#endif
#define __memmap 1

#define 	kMspritebase	0xa800
#define		kMmaxsprites	79
#define 	kMhorizbase	0xac00
#define		kMwindowbase	0xb000
#define		kMscrAbase	0xc000
#define		kMscrAwords	4096
#define		kMscrBbase	0xe000
#define		kMscrBwords	4096

#define		kRscrAbase	0x8230
#define		kRscrBbase	0x8407
#define		kRwindowbase	0x832c
#define		kRhorizbase	0x8d2b
#define		kRspritebase	0x8554

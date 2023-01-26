SWD_2_Buffer		equ	0


			if	1=0

; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ DecompressSWD                                                          บ
; ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน
; บ Decompress data in Elmer's SWD format.                                 บ
; วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ
; บ Inputs      A0.L    Pointer to compressed data (word aligned)          บ
; บ             A1.L    Pointer to destination buffer                      บ
; บ                                                                        บ
; บ Outputs     D3.L = Length of decompressed data (.b)                    บ
; บ                                                                        บ
; บ Preserved   None                                                       บ
; บ                                                                        บ
; บ Note        Altered by Mike Lamb to use multi-bit shifts for speed.    บ
; บ             Mod: 3-29-95 by CPS for own use                            บ
; บ                                                                        บ
; บ             D6.W = No of bits required from read routine.              บ
; บ             D7.W = No of bits left in upper D1.                        บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

SWD_2_Buffer		equ	0
SWD_2_Length		equ	1

DecompressSWD		move.b	d2,tmp1_b

			moveq	#0,d7
			clr.w	tmp1_w				;length of data counter

			bra.s	.GetCommand

.ByteCommand		moveq	#8,d6
			bsr	.ReadBits
			bsr	.WriteBits
			
.GetCommand		dbra	D7,.Skip0

			move	(a0)+,d1		
			swap	d1
			moveq	#$0f,d7

.Skip0			clr.w	d1
			rol.l	#1,d1
			tst.w	d1
			beq.s	.ByteCommand	

.GetLength		moveq	#2,d2

			dbra	d7,.Skip1

			move	(a0)+,d1		
			swap	d1
			moveq	#$0f,d7	

.Skip1			clr.w	d1
			rol.l	#1,d1
			tst.w	d1
			beq.s	.GotLength
			
			moveq	#2,d6
			bsr.s	.ReadBits
			tst.w	d1
			bne.s	.GotLength	
			
			moveq	#5,d2
			moveq	#4,d6
			bsr.s	.ReadBits
			tst.w	d1
			bne.s	.GotLength	
			
			moveq	#20,d2
			moveq	#8,d6
			bsr.s	.ReadBits
			tst.w	d1
			beq	.EndOfFile	

.GotLength		add.w	d1,d2

.GetOffset		moveq	#2,d6
			bsr.s	.ReadBits
			tst.w	d1
			beq.s	.Offset5
			
			subq.w	#1,d1
			beq.s	.Offset7
			
			subq.w	#1,d1
			beq.s	.Offset9
			
			subq.w	#1,d1
.Offset10		moveq	#10,d6
			bsr.s	.ReadBits
			add.w	#$02a1,d1
			bra.s	.Copy	

.Offset9		moveq	#9,d6
			bsr.s	.ReadBits
			add.w	#$00a1,d1
			bra.s	.Copy

.Offset7		moveq	#7,d6
			bsr.s	.ReadBits
			add.w	#$0021,d1
			bra.s	.Copy

.Offset5		moveq	#5,d6
			bsr.s	.ReadBits
			addq.w	#$1,d1

.Copy			move.l	a1,a2
			sub.w	d1,a2
			subq.w	#1,d2
.CopyLoop		move.b	(a2)+,(a1)+
d1
			bsr	.WriteBits
			dbra	d2,.CopyLoop	

			bra	.GetCommand


; D6.W = No of bits required
; D7.W = No of bits left in upper word of D1.L

.ReadBits		clr.w	d1
			cmp.w	d6,d7
			bcc.s	.Skip3

			tst	d7
			beq.s	.Skip2

			rol.l	d7,d1
			sub	d7,d6

.Skip2			swap	d1
			move	(a0)+,d1
			swap	d1
			moveq	#$10,d7

.Skip3			rol.l	d6,d1
			sub	d6,d7
   			rts

.WriteBits		addq.w	#1,tmp1_w				;bump data length counter
			cmp.b	#SWD_2_Length,tmp1_b		
			beq.s	.x
			move.b	d1,(a1)+
.x			rts

.EndOfFile		rts

			endif



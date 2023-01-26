my_cold_start:		lea.l	reg_set(pc),a5		; initial data address set
			movem.w	(a5)+,d5-d7		; regster initialize d5-d7.word
			movem.l	(a5)+,a0-a4		; regster initialize a0-a4.long

my_security:		move.b	-$10ff(a1),d0		; ** a1 = $a11100 **
			andi.b	#$000f,d0		;  -$10ff(a1) = $a10000
			beq.s	my_japans			; Ver. No. check
			move.l	#'SEGA',$2f00(a1)	; "SEGA" moved to SECURITY part
my_japans:
my_reg_init:		move	(a4),d0			; vdp status dummy read
			moveq	#0,d0
			move.l	d0,a6
			move.l	a6,USP			; user stack pointer set
			moveq	#23,d1			; d1 = counter

;------<<< VDP REG. initialize >>>------
;    d5 = $8000 / d7 = $100
my_r_int1:		move.b	(a5)+,d5		; vdp reg. 0-23 set
			move.w	d5,(a4)			;    (DMA fill set)
			add	d7,d5			; 
			dbra	d1,my_r_int1		; 
		
;------<<< DMA FILL >>>---------
; already sat reg. #18,19,23
my_dma_fill:		move.l	(a5)+,(a4)
			move	d0,(a3)			; set fill data ($0) to $c00000

;-------<<< Z80 initialize >>>----
;	a0 = $a00000 / a1 = $a11100 / a2 = $a11200
; 	d0 = $0      / d7 = $100
my_z80_clr:       	move	d7,(a1)			; z80_busreq on
			move	d7,(a2)			; z80_reset off

my_z801:		btst	d0,(a1)			; z80_bgack ok ?
			bne.s	my_z801

			moveq	#37,d2			; counter set
my_z802:		move.b	(a5)+,(a0)+		; z80 program set to z80 sram
			dbra	d2,my_z802
			move	d0,(a2)			; z80_reset on
			move	d0,(a1)			; z80_busreq off
			move	d7,(a2)			; z80_reset off ( z80 start )
		
;--------<<< work ram clear >>>------------
; a6 = $0 / d0 = $0 / d6 = $3fff

my_clr_wk:		move.w	#$3fff-10,d6
my_c_wk1:		move.l	d0,-(a6)
			dbra	d6,my_c_wk1

;-------<<< VDP color clear >>>-------------
; a3 = $c00000 / a4 = $c00004 / d0 = $0
my_clr_col:		move.l	(a5)+,(a4)		; vdp reg #1 = 4, #15 = 2
			move.l	(a5)+,(a4)
			moveq	#$1f,d3			; d3 = color ram size-1
my_c_col1:		move.l	d0,(a3)
			dbra	d3,my_c_col1

; -------<<< V SCROLL clear >>>---------------
; a3 = $c00000 / a4 = $c00004 / d0 = $0
my_clr_vsc:		move.l	(a5)+,(a4)
			moveq	#19,d4			; d4 = vscroll ram size-1
my_c_vsc1:		move.l	d0,(a3)
			dbra	d4,my_c_vsc1

;---------<<< PSG clear >>>-------------------
; a3 = $c00000 / a4 = $c00004 / d0 = $0
; a5 = psg_dat (clear data) point
my_clr_psg:		moveq	#3,d5			; counter set
my_c_psg1:		move.b	(a5)+,$11(a3)
			dbra	d5,my_c_psg1
	
;-----------<<< regstars initial >>>------------
			move	d0,(a2)			; z80 reset
			movem.l	(a6),d0-d7/a0-a6	; initialize all registers
			move	#$2700,sr

			bra	hot_start























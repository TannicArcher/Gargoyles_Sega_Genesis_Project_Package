;TheStart:		tst.l	$a10008			; POWER ON check cntroller A,B
;			bne.s	h_s
;			tst.w	$a1000c			; POWER ON check cntroller C
;h_s:			bne.s	hot_start
;
;cold_start:		lea.l	reg_set(pc),a5		; initial data address set
;			movem.w	(a5)+,d5-d7		; regster initialize d5-d7.word
;			movem.l	(a5)+,a0-a4		; regster initialize a0-a4.long
;
;security:		move.b	-$10ff(a1),d0		; ** a1 = $a11100 **
;			andi.b	#$000f,d0		;  -$10ff(a1) = $a10000
;			beq.s	japans			; Ver. No. check
;			move.l	#'SEGA',$2f00(a1)	; "SEGA" moved to SECURITY part
;japans:
;reg_init:		move	(a4),d0			; vdp status dummy read
;			moveq	#0,d0
;			move.l	d0,a6
;			move.l	a6,USP			; user stack pointer set
;			moveq	#23,d1			; d1 = counter
;
;;------<<< VDP REG. initialize >>>------
;;    d5 = $8000 / d7 = $100
;r_int1:			move.b	(a5)+,d5		; vdp reg. 0-23 set
;			move.w	d5,(a4)			;    (DMA fill set)
;			add	d7,d5			; 
;			dbra	d1,r_int1		; 
;		
;;------<<< DMA FILL >>>---------
;; already sat reg. #18,19,23
;dma_fill:		move.l	(a5)+,(a4)
;			move	d0,(a3)			; set fill data ($0) to $c00000
;
;;-------<<< Z80 initialize >>>----
;;	a0 = $a00000 / a1 = $a11100 / a2 = $a11200
;; 	d0 = $0      / d7 = $100
;z80_clr:       		move	d7,(a1)			; z80_busreq on
;			move	d7,(a2)			; z80_reset off
;
;z801:			btst	d0,(a1)			; z80_bgack ok ?
;			bne.s	z801
;
;			moveq	#37,d2			; counter set
;z802:			move.b	(a5)+,(a0)+		; z80 program set to z80 sram
;			dbra	d2,z802
;			move	d0,(a2)			; z80_reset on
;			move	d0,(a1)			; z80_busreq off
;			move	d7,(a2)			; z80_reset off ( z80 start )
;		
;;--------<<< work ram clear >>>------------
;; a6 = $0 / d0 = $0 / d6 = $3fff
;clr_wk:
;c_wk1:			move.l	d0,-(a6)
;			dbra	d6,c_wk1
;
;;-------<<< VDP color clear >>>-------------
;; a3 = $c00000 / a4 = $c00004 / d0 = $0
;clr_col:		move.l	(a5)+,(a4)		; vdp reg #1 = 4, #15 = 2
;			move.l	(a5)+,(a4)
;			moveq	#$1f,d3			; d3 = color ram size-1
;c_col1:			move.l	d0,(a3)
;			dbra	d3,c_col1
;
;; -------<<< V SCROLL clear >>>---------------
;; a3 = $c00000 / a4 = $c00004 / d0 = $0
;clr_vsc:		move.l	(a5)+,(a4)
;			moveq	#19,d4			; d4 = vscroll ram size-1
;c_vsc1:			move.l	d0,(a3)
;			dbra	d4,c_vsc1
;
;;---------<<< PSG clear >>>-------------------
;; a3 = $c00000 / a4 = $c00004 / d0 = $0
;; a5 = psg_dat (clear data) point
;clr_psg:		moveq	#3,d5			; counter set
;c_psg1:			move.b	(a5)+,$11(a3)
;			dbra	d5,c_psg1
;	
;;-----------<<< regstars initial >>>------------
;			move	d0,(a2)			; z80 reset
;			movem.l	(a6),d0-d7/a0-a6	; initialize all registers
;			move	#$2700,sr


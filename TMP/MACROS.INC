
; - M A C R O S ------------------------------------------------------------

			;blit_vr sprt_attr,sprt_base,$140,vram

			;copy 68k memory/RAM to VRAM (vram/cram/vsram)
			;(OLD) I love brackets!
			;
blit_vr			macro
			move.l	#((reg15+2)<<16)+(reg19+(\3&$00ff)),vctrl
			move.l	#((reg20+((\3&$ff00)>>8))<<16)+(reg21+((\1/2)&$00ff)),vctrl
			move.l	#((reg22+(((\1/2)&$ff00)>>8))<<16)+(reg23+((((\1/2)&$ff0000)>>16)&$7f)),vctrl
			if	\4=vram
			move.l	#($40000000+(((\2<<16)&$3fff0000)+((\2>>14)&$00000003)))+$00000080,dmaram
			elseif	\4=cram
			move.l	#$c0000080,dmaram
			elseif	\4=vsram
			move.l	#$40000090,dmaram
			endif	
			move.l	#\1,a1
			jsr	DMA_2
			endm

MUSIC			macro
			move.l	#\1,music_number		
			endm

SFX			macro
			move.l	#\1,sfx_poll
			jsr	SetSFX
			endm

KILL			macro
			move.l	#\1,stop_sfx
			endm

			;((map_wide-40)*8)-15
rlim			macro
			dc.w	((\1-40)*8)-16
			endm

			;((map_deep-28)*8)+4
blim			macro
			dc.w	((\1-28)*8)+4
			endm

makeodd			macro
			if	*&1=0
			dc.b	\1
			endif
			endm

anmdef			macro
			dc.l	\1,\2,\3
			dc.w	\4
			dc.b	\5,\6
			endm
		
canmdef			macro
			dc.l	\1,\2
			endm

anm			macro
			if	\1=AJmp
			dc.w	\1		;AJmp
			dc.l	\2		;routine
			elseif	\1=ARep
			dc.w	\1		;ARep
			elseif	\1=AEnd
			dc.w	\1		;AEnd
			elseif	\1=APat
			dc.w	\1		;APat
			dc.l	\2		;routine
			elseif	\1=AMov
			dc.w	\1		;AMov
			dc.b	\2		;Flags
			dc.b	\3		;pad
			dc.w	\4		;Xspd
			dc.w	\5		;Yspd
			dc.w	\6		;Xacc
			dc.w	\7		;Yacc
			elseif	\1=AJsr
			dc.w	\1		;AJsr
			dc.l	\2		;routine
			elseif	\1=ARts
			dc.w	\1		;ARts
			elseif	\1=ANew
			dc.w	\1		;ANew
			dc.l	\2		;new anim 
			elseif	\1=AMov2
			dc.w	\1		;AMov2
			dc.b	\2		;direction
			dc.b	\3		;distance
			elseif	\1=APau
			dc.w	\1		;APau
			dc.b	\2		;duration
			dc.b	0		;pad
			elseif	\1=AVar1
			dc.w	\1		;AVar1
			dc.b	\2		;passed value
			dc.b	0		;pad
			elseif	\1=AVar2
			dc.w	\1		;AVar2
			dc.b	\2		;passed value
			dc.b	0		;pad
			elseif	\1=AVar3
			dc.w	\1		;AVar3
			dc.b	\2		;passed value
			dc.b	0		;pad
			elseif	\1=AVar4
			dc.w	\1		;AVar4
			dc.b	\2		;passed value
			dc.b	0		;pad
			elseif	\1=ALoop
			dc.w	\1		;ALoop
			dc.l	\2		;loop back to label
			dc.b	\3		;loop count
			dc.b	0		;pad
			elseif	\1=AInit
			dc.w	\1		;AInit
			elseif	\1=AMovDF
			dc.w	\1		;AMovDF
			dc.b	\2		;direction
			dc.b	\3		;distance
			endif
			endm

anm1			macro
			dc.w	0		;flag anim data
			dc.l	\1		;Label frame #
			dc.b	\2		;duration
			dc.b	\3		;flags
			endm

			
multisprite		macro	numspr,numcol,minx,miny,maxx,maxy
			dc.b	(numspr-1),numcol
			dc.w	minx,miny,maxx,maxy
obmaxvram_cnt		=	0
			endm

omv			macro
			dc.w	obmaxvram_cnt
			endm

MSNAP64K			macro
t1pc			=*
t1pc			=(t1pc+$8000)&$ffff0000
t1pc			=t1pc-*
			ds.b	t1pc
			endm
			
subsprite		macro
			dc.b	\1
			if	\1=0
			dc.b	1
			dc.w	8,8
obthisvram		=	1*32
			elseif	\1=1
			dc.b	2			
			dc.w	8,16			
obthisvram		=	2*32
			elseif	\1=2
			dc.b	3			
			dc.w	8,24			
obthisvram		=	3*32
			elseif	\1=3
			dc.b	4			
			dc.w	8,32			
obthisvram		=	4*32
			elseif	\1=4
			dc.b	2			
			dc.w	16,8
obthisvram		=	2*32
			elseif	\1=5
			dc.b	4			
			dc.w	16,16			
obthisvram		=	4*32
			elseif	\1=6
			dc.b	6			
			dc.w	16,24			
obthisvram		=	6*32
			elseif	\1=7
			dc.b	8			
			dc.w	16,32			
obthisvram		=	8*32
			elseif	\1=8
			dc.b	3			
			dc.w	24,8			
obthisvram		=	3*32
			elseif	\1=9
			dc.b	6			
			dc.w	24,16			
obthisvram		=	6*32
			elseif	\1=10
			dc.b	9			
			dc.w	24,24			
obthisvram		=	9*32
			elseif	\1=11
			dc.b	12			
			dc.w	24,32			
obthisvram		=	12*32
			elseif	\1=12
			dc.b	4			
			dc.w	32,8			
obthisvram		=	4*32
			elseif	\1=13
			dc.b	8			
			dc.w	32,16		
obthisvram		=	8*32
			elseif	\1=14
			dc.b	12			
			dc.w	32,24			
obthisvram		=	12*32
			elseif	\1=15
			dc.b	16    
			dc.w	32,32    
obthisvram		=	16*32
			endif
			dc.w	\2<<13,\3,\4
			dc.l	\5
obmaxvram_cnt		=	obmaxvram_cnt+obthisvram
			endm			

compsprite		macro	num_sprs,setptr
			dc.w	num_sprs
			dc.l	setptr
			endm

compsubsprite		macro	ssetindex,xfl,yfl,pri,xoffset,yoffset
			dc.b	ssetindex
			dc.b	((pri&1)<<2)+((yfl&1)<<1)+(xfl&1)
			dc.w	xoffset,yoffset
			endm

subcolbox		macro	minx,maxx,miny,maxy,cindex
			dc.l	"CBOX"
			dc.w	minx,miny,maxx,maxy,cindex
			endm


StRESET			macro
StateCNT		=	0
			endm

ObRESET			macro
ObjectCNT		=	0
			endm
ObDEF			macro
\1			equ	ObjectCNT*4
ObjectCNT		=	ObjectCNT+1
			endm


StDEF			macro
\1			equ	StateCNT*4
StateCNT		=	StateCNT+1
			endm
			
POLL			macro
			if	Poll_PsyQ
			dc.w	$a000+\1
			endif
			endm

PUSH_DMA		macro
			move.l	DMA_Stack,a6
			move.w	\2,-(a6)		;destination	
			move.l	\1,-(a6)		;source			
			move.w	\3,-(a6)		;length	
			move.l	a6,DMA_Stack
			endm

col			macro
			if	timing
			move.l	#$c0000000,vctrl
			move.w	#\1,vdata
			endif
			endm	

AddStack		macro
			add.l	#\1,sp
			endm
SubStack		macro
			sub.l	#\1,sp
			endm

			;convert SNES Palette to Genesis
PALETTE			macro
			rept	narg
			dc.w	((\1&$007)<<9)+((\1&$070)<<1)+((\1&$700)>>7)
			shift
			endr
			endm

ani_dma			macro
			dc.l	\1/2
			dc.w	\2,\3/2
			endm


AI_CB			macro		
			dc.b	(\31<<6)!(\30<<5)!(\29<<4)!(\28<<3)!(\27<<2)!(\26<<1)!(\25)
			dc.b	(\24<<7)!(\23<<6)!(\22<<5)!(\21<<4)!(\20<<3)!(\19<<2)!(\18<<1)!(\17)
			dc.b	(\16<<7)!(\15<<6)!(\14<<5)!(\13<<4)!(\12<<3)!(\11<<2)!(\10<<1)!(\9)
			dc.b	(\8<<7)!(\7<<6)!(\6<<5)!(\5<<4)!(\4<<3)!(\3<<2)!(\2<<1)!(\1)
			endm

AI_DATA			MACRO
			dc.w	\1,\2
			dc.b	\3,\4,\5,\6
			dc.l	\7,\8
			ENDM

AI_LIST			macro
			rept	narg
			dc.l	\1
			shift
			endr
			endm

AI_END_LIST		MACRO
			dc.l	-1
			ENDM

PUSHSTATE		macro
			move.w	OB_State(a0),OB_LastState(a0)
			endm
POPSTATE		macro
			move.w	OB_LastState(a0),OB_State(a0)
			endm

PUSHADDRS		macro
			move.l	#\1,OB_Task(a0)
			endm
POPADDRS		macro
			move.l	OB_Task(a0),a1
			endm

;SPAWNXY_LO		macro	otype,oxpos,oypos,osize
;			move.w	#osize,d3
;			bsr	SpawnBasicOBJECT_LO
;			move.w	#otype,OB_Type(a0)				;object type
;			move.w	#oxpos,OB_Xpos(a0)				;set spawnees x,y from spawners x,y
;			move.w	#oypos,OB_Ypos(a0)
;			endm
;
;SPAWNXY_HI		macro	otype,oxpos,oypos,osize
;			move.w	#osize,d3
;			bsr	SpawnBasicOBJECT_HI	
;			move.w	#otype,OB_Type(a0)				;object type
;			move.w	#oxpos,OB_Xpos(a0)				;set spawnees x,y from spawners x,y
;			move.w	#oypos,OB_Ypos(a0)
;			endm

SPAWN_LO		macro	osize
			move.w	#osize,d3
			bsr	SpawnBasicOBJECT_LO
			endm

SPAWN_HI		macro	osize
			move.w	#osize,d3
			bsr	SpawnBasicOBJECT_HI
			endm


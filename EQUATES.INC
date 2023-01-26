; - Assemble flags and stuff -----------------------------------------------

YES			EQU	1
NO			EQU	0


;BuildBinary		equ	YES
BuildBinary		equ	NO
 
timing			equ	NO	;show timing (1=yes : 0=no)	

			if	BuildBinary=NO
Poll_PsyQ		equ	YES	;1=poll PsyQ : 0=don't poll PsyQ
num_print		equ	NO	;1=yes : 0=no
debug			equ	YES	;1=on : 0=off
music_flg		equ	YES	;1=on : 0=off
disab_nme		equ	NO	;1=disable : 0=enable
disab_locks		equ	NO	;1=disable : 0=enable
disab_trigs		equ	NO	;1=disable : 0=enable
disab_plrhit		equ	NO	;1=disable : 0=enable
super_punch		equ	NO	;1=enable : 0=disable
fluff_yn		equ	YES	;0=no : 1=yes
logos_yn		equ	NO	;0=no : 1=yes
titles_yn		equ	YES	;0=no : 1=yes
sound_test		equ	NO	;0=no : 1=yes
tect_yn			equ	YES	;0=no : 1=yes
show_tect		equ	NO	;0=no : 1=yes
max_lives		equ	NO	;0=default : 1=unlimited
lose_energy		equ	YES	;1=lose : 0=don't lose
level_select		equ	YES	;1=level selector : 0=no level selector
diplay_build		equ	YES	;display build info (1=yes:0=no)
			else
Poll_PsyQ		equ	NO	;1=poll PsyQ : 0=don't poll PsyQ
num_print		equ	NO	;1=yes : 0=no
debug			equ	NO	;1=on : 0=off
music_flg		equ	YES	;1=on : 0=off
disab_nme		equ	NO	;1=disable : 0=enable
disab_locks		equ	NO	;1=disable : 0=enable
disab_trigs		equ	NO	;1=disable : 0=enable
disab_plrhit		equ	NO	;1=disable : 0=enable
super_punch		equ	NO	;1=enable : 0=disable
fluff_yn		equ	YES	;0=no : 1=yes
logos_yn		equ	YES	;0=no : 1=yes
titles_yn		equ	YES	;0=no : 1=yes
sound_test		equ	NO	;0=no : 1=yes
tect_yn			equ	YES	;0=no : 1=yes
show_tect		equ	NO	;0=no : 1=yes
max_lives		equ	NO	;0=default : 1=unlimited
lose_energy		equ	YES	;1=lose : 0=don't lose
level_select		equ	NO	;1=level selector : 0=no level selector
diplay_build		equ	NO	;display build info (1=yes:0=no)
			endif

column			equ	40	;32=32 col mode:40=40 col mode

LOLO			equ	2
LO			equ	1
HI			equ	0

; - DEMO Creation EQU's ----------------------------------------------------

;create_demo		equ	YES	;0=no : 1=yes
create_demo		equ	NO	;0=no : 1=yes
record_len		equ	(15/2)*$100
start_lev		equ	0	


; - General Equates --------------------------------------------------------

ntsc			equ	0
pal			equ	1

usa			equ	0
europe			equ	1
japan			equ	2

;system			equ	pal
;country			equ	europe
system			equ	ntsc
country			equ	usa

			if	system=ntsc	
hz5060			equ	60		;60=ntsc : 50=pal
			elseif	system=pal
hz5060			equ	50		;60=ntsc : 50=pal
			endif

			if	column=32
edge_width		equ	21
			else
edge_width		equ	25
			endif

hs_off			equ	0		;line scroll table offset

MaxLevs			equ	28
Level11			equ	0
Level12			equ	1
Level13			equ	2
Level14			equ	3
Level21			equ	4
Level22			equ	5
Level23			equ	6
Level24			equ	7
Level31			equ	8
Level32			equ	9
Level33			equ	10
Level34			equ	11
Level41			equ	12
Level42			equ	13
Level43			equ	14
Level44			equ	15
Level51			equ	16
Level61			equ	17
Level62			equ	18
Level63			equ	19
Level64			equ	20
Level71			equ	21
Level72			equ	22
Level73			equ	23
Level74			equ	24
Level75			equ	25
Level76			equ	26
Level77			equ	27

_MUS_StoryScreen	equ	72
_MUS_Boss		equ	69
_MUS_GameOver		equ	70
_MUS_Hammer		equ	71
_MUS_Continue		equ	67
_MUS_Titlepage		equ	65
_MUS_Castle		equ	60
_MUS_Rookery		equ	62
_MUS_Rooftops		equ	66
_MUS_Subway		equ	64
_MUS_Forge		equ	68

MaxDebris		equ	4-1


; - HARDWARE Specific Equates ----------------------------------------------

VDATA			equ	$c00000
VCTRL			equ	$c00004
HVCOUNTER		equ	$c00008
vdata			equ	$c00000
vctrl			equ	$c00004
hvcounter		equ	$c00008
		
joy1prt			equ	$a10003
joy2prt			equ	$a10005
joy1dir			equ	$a10009	

reg0			equ	$8000
reg1			equ	$8100
reg2			equ	$8200
reg3			equ	$8300
reg4			equ	$8400
reg5			equ	$8500
reg6			equ	$8600
reg7			equ	$8700
reg8			equ	$8800
reg9			equ	$8900
reg10			equ	$8a00
reg11			equ	$8b00
reg12			equ	$8c00
reg13			equ	$8d00
reg14			equ	$8e00
reg15			equ	$8f00
reg16			equ	$9000
reg17			equ	$9100
reg18			equ	$9200
reg19			equ	$9300
reg20			equ	$9400
reg21			equ	$9500
reg22			equ	$9600
reg23			equ	$9700	

pad			equ	0

; - VRAM Specific Equates --------------------------------------------------

; VRAM MEMORY MAP (Tentative)
;
; $0000 - $8000		- Background A/B Tileset (1024 Chars)
; $8000 - $bfff		- Flown Sprite Objects (536 Chars (5*10*10 Objects))
; $c000 - $cfff		- Background A CharMap
; $d000 - $dfff		- Resident Panel char data (128 Chars)
; $e000 - $efff		- Background B CharMap
; $f000 - $f3ff		- HScroll Table
; $f400 - $f6ff		- Sprite Attr Table ($280 bytes)
; $f680 - $ffff		- Resident Alpha-numeric char data (76 Chars)

ScrlA_Base		equ	$c000
Window_Base		equ	$d000
Sprt_Base		equ	$f400
HScrl_TabA		equ	$f000
HScrl_TabB		equ	$f002
ScrlB_Base		equ 	$e000	

VRAM_Base		equ	$0000

Panel_VRAM		equ	$d800
Panel_Len		equ	((6*4*32)+(4*32)+(23*32))/2
Health1_Base		equ	Panel_VRAM/32			;in chars
Health2_Base		equ	Health1_Base+(6*4)		;in chars
Health1_VRAM		equ	Panel_VRAM			;vram
Health2_VRAM		equ	Health1_VRAM+(6*4*32)		;vram	
Numeral_Base		equ	Health2_Base+4			;in chars
Numeral_VRAM		equ	Health2_VRAM+(1*4*32)		;vram	

L5Panel_VRAM		equ	$c000-$660
L5Panel_Len		equ	((6*4*32)+(4*32)+(23*32))/2
L5Health1_Base		equ	L5Panel_VRAM/32			;in chars
L5Health2_Base		equ	L5Health1_Base+(6*4)		;in chars
L5Numeral_Base		equ	L5Health2_Base+4		;in chars
L5Health1_VRAM		equ	L5Panel_VRAM			;vram
L5Health2_VRAM		equ	L5Health1_VRAM+(6*4*32)		;vram	
L5Numeral_VRAM		equ	L5Health2_VRAM+(1*4*32)		;vram	

Alpha_VRAM		equ	$f680
Alpha_Base		equ	Alpha_VRAM/32
_AtoF_Base		equ	Alpha_Base+($22-10)
_0to9_Base		equ	Alpha_Base+$11

vram			equ	0
cram			equ	1
vsram			equ	2
		

; - GAME Specific Equates --------------------------------------------------

max_pan			equ	4
max_nrg			equ	56

y_pos			equ	0
size			equ	2
link			equ	3
attr			equ	4
sdef			equ	5
x_pos 			equ	6

cp1			equ	$0000
cp2			equ	$2000
cp3			equ	$4000
cp4			equ	$6000	
pri			equ	$8000

up			equ	0
down			equ	1
left			equ	2
right			equ	3
but_a			equ	6
but_b			equ	4
but_c			equ	5
start			equ	7
but_0			equ	8	


MaxObs			equ	64			;max number of objects
MaxSprs			equ	80			;max number of hardware sprites
MaxChrs			equ	4			;max number of char animations

			;HI Object 	#0-31
			;Goliath Object #32
			;LO Object 	#33-54
			;LOLO Object 	#55-63
			 
GoliathObjectNumber	equ	MaxObs-32		;goliath object #32
LO_ObjectNumber		equ	MaxObs-31		;lo objects #33-54
LOLO_ObjectNumber	equ	MaxObs-9		;lolo object #55-63


; - OBJECT Structures ------------------------------------------------------

			
OB_DATA_SIZE		equ	128		;128 bytes reserved in RAM for each objects database

			RSRESET
OB_Xpos			rs.w	1		;x position
OB_Ypos			rs.w	1		;y position
OB_Zpos			rs.w	1		;z position
OB_WXpos		rs.w	1		;World x position
OB_WYpos		rs.w	1		;World y position
OB_WZpos		rs.w	1		;World z position

OB_State		rs.w	1		;Logic state
OB_LastState		rs.w	1		;Last Logic state (used for restore)

OB_HitPower		rs.b	1		;Power of Objects attack
OB_HitWait		rs.b	1		;universal being hit delay
padpadpad		rs.b	1

OB_MoveFlags		rs.b	1		;Movement flags
OB_Xspd			rs.w	1		;X speed
OB_Yspd			rs.w	1		;Y speed
OB_Xacc			rs.w	1		;X ac/decceleration
OB_Yacc			rs.w	1		;Y ac/decceleration

OB_AnChrData		rs.l	1		;Raw Char data
OB_AnSequence		rs.l	1		;Animation sequence
OB_NewAnFrm		rs.w	1		;Current animation frame
OB_OldAnFrm		rs.w	1		;Last animation frame
OB_AnPatch		rs.l	1		;Animation patch
OB_AnDex		rs.w	1		;Animation index
OB_AnFlags		rs.b	1		;Animation flags
OB_AnCnt		rs.b	1		;Counter
OB_AnCmp		rs.b	1		;Counter compare
OB_AnLoop		rs.b	1		;loop counter
OB_AnSeqTemp		rs.l	1		;Temp storage for Ajsr
OB_AnDexTemp		rs.w	1		;Temp storage for Ajsr
OB_AnSeqLab		rs.l	1		;stor for label	
OB_RefAnRam		rs.l	1		;Objects W/VRAM reference table

OB_Type			rs.w	1		;Type
OB_ObNum		rs.w	1		;Object # (from 4th layer trigger)
		
OB_EventVar1		rs.b	1		;event variable			
OB_EventVar2		rs.b	1		;event variable			
OB_EventVar3		rs.b	1		;event variable			
OB_EventVar4		rs.b	1		;event variable
			
OB_Flag1		rs.b	1		;General purpose flags	
OB_Flag2		rs.b	1		;General purpose flags	
OB_Flag3		rs.b	1		;General purpose flags	
OB_Flag4		rs.b	1		;General purpose flags	
OB_Flag5		rs.b	1		;General purpose flags	
OB_Flag6		rs.b	1		;General purpose flags	
OB_Flag7		rs.b	1		;General purpose flags	
OB_Flag8		rs.b	1		;General purpose flags	

OB_Nrg			rs.w	1		;Health	
OB_Pal			rs.w	1		;palette overide

OB_Task			rs.l	1		;Special task patch

OB_Var1			rs.b	1		;general purpose variable
OB_Var1a		rs.b	1		;general purpose variable
OB_Var2			rs.b	1		;general purpose variable
OB_Var2a		rs.b	1		;general purpose variable
OB_Var3			rs.b	1		;general purpose variable
OB_Var3a		rs.b	1		;general purpose variable
OB_Var4			rs.b	1		;general purpose variable
OB_Var4a		rs.b	1		;general purpose variable
OB_Var5			rs.b	1		;general purpose variable
OB_Var5a		rs.b	1		;general purpose variable
OB_Var6			rs.b	1		;general purpose variable
OB_Var6a		rs.b	1		;general purpose variable
OB_Var7			rs.b	1		;general purpose variable
OB_Var7a		rs.b	1		;general purpose variable
OB_Var8			rs.b	1		;general purpose variable
OB_Var8a		rs.b	1		;general purpose variable
OB_Var9			rs.b	1		;general purpose variable
OB_Var9a		rs.b	1		;general purpose variable

OB_Interact		rs.l	1		;general purpose ob # passing var
OB_Interact2		rs.l	1		;general purpose ob # passing var

OB_MasterMode		rs.w	1		;flags to say exactly what the object is doing

OB_CollisionRAM		rs.l	1		;pointer to collision database

OB_OffRoutine		rs.l	1		;Routine called when object is turned off by scrolling
OB_HitRoutine		rs.l	1		;Routine called when object takes a hit

OB_ENDSTRUCT_DB		rs.w	0

OBDBLEN			equ	OB_ENDSTRUCT_DB
  
			if	OBDBLEN>128
			inform	3,"Object database overflow"
			endif
		
		;OB_AnFlags
ob_anxflptog	equ	0
ob_anyflptog	equ	1


		;OB_MoveFlags
ob_movxdir	equ	0	;0=right>:1=left<
ob_movydir	equ	1	;0=down\/:1=up/\
ob_movxacc	equ	2	;0=acc:1=decc
ob_movyacc	equ	3	;0=acc:1=decc
ob_noxmove	equ	4	;dont store new x in objects xpos (0=store:1=dont store)
ob_noymove	equ	5	;dont store new y in objects ypos (0=store:1=dont store)

_ob_movxdir	equ	1	;0=right>:1=left<
_ob_movydir	equ	2	;0=down\/:1=up/\
_ob_movxacc	equ	4	;0=acc:1=decc
_ob_movyacc	equ	8	;0=acc:1=decc
_ob_noxmove	equ	16	;dont store new x in objects xpos (0=store:1=dont store)
_ob_noymove	equ	32	;dont store new y in objects ypos (0=store:1=dont store)


; OB_MasterMode - bit assignment :
;
;	LO BYTE :
;	
;	0 = Ground based move
;	1 = Wall based move
;	2 = Ceiling based move
;	3 = Arial based move
;	4 = Blocking (defence) 
;	5 = Being hit/hurt
;	6 = Grabbing mode  
;	7 = Attacking move
;
;	HI BYTE :
;
;	0 = 
; 
; NOTE: Multiple bit patterns will be used to signify combination modes.
;	ie. 	Arial Attack = %10001000
;		Ground Hit = %00100001
;		etc.
		
grndmode		equ	0
wallmode		equ	1
ceilmode		equ	2
airmode			equ	3
blokmode		equ	4
hitmode			equ	5
grabmode		equ	6
attkmode		equ	7

_grndmode		equ	1
_wallmode		equ	2
_ceilmode		equ	4
_airmode		equ	8
_blokmode		equ	16
_hitmode		equ	32
_grabmode		equ	64
_attkmode		equ	128

modeclr2		equ	%00001111
		

; - OBJECT FLAGS -----------------------------------------------------------
;
;		Bit	    7    6    5    4    3  2 1 0
;OB_FLAG1	-	%[hlr] [h4] [h3] [h2] [h1] y x o
;
;		o = on/off (1/0)
;		x = x flipped (1=flip:0=no)
;		y = y flipped (1=flip:0=no)	
;		h1 = object hit
;		h2 = object hit
;		h3 = object hit
;		h4 = object hit
;		hlr = side object was hit l/r (0/1)
;
;
;		Bit	   7    6  5 4   3  2   1  0
;OB_FLAG2	-	%[do] [di] k d [bk] s [so] p
;
;		p = overide object priority (set to hi)
;		so = objects are not switched off when off screen (0=switch off:1=dont switch off)
;		s = object setup flag (0=no:1=yes)
;		bk = object is being killed
;		d = object is dead
;		k = kill object
;		di = object drops an item
;		do = object is not displayed
;
;
;		Bit	    7     6    5    4  3   2    1    0
;OB_FLAG3	-	%[dsb] [dss] [ie] [ip] i [ic] [cc] [rf]  	
;
;		rf = object flown/reseident (0=resident:1=flown)
;		cc = object can carry player (0=no:1=yes)
;		ic = object is carrying player (0=no:1=yes)	
;		i = object is invulnerable to all other objects (0=no:1=yes)
;		ip = object is invulnerable to projectiles only (0=no:1=yes)
;		ie = object is invulnerable to enemies only (0=no:1=yes)
;		dss = disable sprt 2 sprt detection (0=no:1=yes)
;		dsb = disable sprt 2 bckgrnd detection (0=no:1=yes)
;
;
;		Bit	   7    6    5    4  3210
;OB_FLAG4	-	%[br] [bl] [bd] [bu] tttt
;
;		tttt = object type
;		      	0 = enemy object
;		      	1 = projectile object
;		      	2 = pickup object
;		      	3 = event object
;		bu = blocked by up    /\ (2 1/2 D only)
;		bd = blocked by down  \/ (2 1/2 D only)
;		bl = blocked by left  <<
;		br = blocked by right >>
;
;
;		Bit	 7654 3   2    1     0
;OB_FLAG5	-	%???? s [ym] [xm] [dma]
;
;		dma = flag new dma to VRAM
;		xm = used to determine objects x movement dir
;		ym = used to determine objects y movement dir
;		s = object affected by scroller (0/1 yes/no)
;		? = unassigned
;


		;OB_FLAG1
ob_active	equ	0	;on/off (1/0)
ob_xflp		equ	1	;x flipped (1=flip:0=no)
ob_yflp		equ	2	;y flipped (1=flip:0=no)	  	
ob_noclip	equ	3	;clip object (1=don't clip:0=clip)
ob_newpal	equ	4	;force palette (1=force:0=ignore) 
ob_hitting	equ	5	;object is hitting player or other object
ob_beinghit	equ	6	;object is being hit by player or other object
ob_hitside	equ	7	;side object was hit l/r (0/1)
_ob_active	equ	1	;on/off (1/0)
_ob_xflp	equ	2	;x flipped (1=flip:0=no)
_ob_yflp	equ	4	;y flipped (1=flip:0=no)	  	
_ob_clip	equ	8	;clip object (1=don't clip:0=clip)
_ob_newpal	equ	16	;force palette (1=force:0=ignore) 
_ob_hitting	equ	32	;object is hitting (player)
_ob_beinghit	equ	64	;object is being hit
_ob_hitside	equ	128	;side object was hit l/r (0/1)


		;OB_FLAG2
ob_hiprior	equ	0	;overide object priority (set to hi)
ob_nooff	equ	1	;objects are not switched off when off screen (0=switch off:1=dont switch off)
ob_nooffx	equ	2	;objects are not switched off when scroll off left/right (0=switch off:1=don't)
ob_nooffy	equ	3	;objects are not switched off when scroll off top/bottom (0=switch off:1=don't)
ob_setup	equ	4	;object setup flag (0=no:1=yes)
ob_dead		equ	5	;object is dead
ob_kill		equ	6	;kill object
ob_drop		equ	7	;object drops an item
_ob_hiprior	equ	1	;overide object priority (set to hi)
_ob_nooff	equ	2	;objects are not switched off when off screen (0=switch off:1=dont switch off)
_ob_nooffx	equ	4	;objects are not switched off when scroll off left/right (0=switch off:1=don't)
_ob_nooffy	equ	8	;objects are not switched off when scroll off top/bottom (0=switch off:1=don't)
_ob_setup	equ	16	;object setup flag (0=no:1=yes)
_ob_dead	equ	32	;object is dead
_ob_kill	equ	64	;kill object
_ob_drop	equ	128	;object drops an item


		;OB_FLAG3
ob_flown	equ	0	;object flown/reseident (0=resident:1=flown)
ob_lift		equ	1	;object can carry player (0=no:1=yes)
ob_carry	equ	2	;object is carrying player (0=no:1=yes)	
ob_inv1		equ	3	;object is invulnerable to all other objects (0=no:1=yes)
ob_inv2		equ	4	;object is invulnerable to projectiles only (0=no:1=yes)
ob_inv3		equ	5	;object is invulnerable to enemies only (0=no:1=yes)
ob_notect1	equ	6	;disable sprt 2 sprt detection (0=no:1=yes)
ob_notect2	equ	7	;disable sprt 2 bckgrnd detection (0=no:1=yes)
_ob_flown	equ	1	;object reseident/flown (0/1)
_ob_lift	equ	2	;object can carry player (0=no:1=yes)
_ob_carry	equ	4	;object is carrying player (0=no:1=yes)	
_ob_inv1	equ	8	;object is invulnerable to all other objects (0=no:1=yes)
_ob_inv2	equ	16	;object is invulnerable to projectiles only (0=no:1=yes)
_ob_inv3	equ	32	;object is invulnerable to enemies only (0=no:1=yes)
_ob_notect1	equ	64	;disable sprt 2 sprt detection (0=no:1=yes)
_ob_notect2	equ	128	;disable sprt 2 bckgrnd detection (0=no:1=yes)


		;OB_FLAG4
ob_retrig	equ	3	;object re-triggers (0=re-trigger:1=don't re-trigger)
ob_blockup	equ	4	;blocked by up    /\ (2 1/2 D only)
ob_blockdown	equ	5	;blocked by down  \/ (2 1/2 D only)
ob_blockleft 	equ	6	;blocked by left  <<
ob_blockright	equ	7	;blocked by right >>


		;OB_FLAG5
ob_newdma	equ	0	;flag new dma to VRAM
ob_movlftrte	equ	1	;used to determine objects x movement dir
ob_movupdn	equ	2	;used to determine objects y movement dir
ob_noscroll	equ	3	;object affected by scroller (0/1 yes/no)
ob_tidy		equ	4	;tidy object display
_ob_newdma	equ	1	;flag new dma to VRAM
_ob_movlftrte	equ	2	;used to determine objects x movement dir
_ob_movupdn	equ	4	;used to determine objects y movement dir
_ob_noscroll	equ	8	;object affected by scroller (0/1 yes/no)
_ob_tidy	equ	16	;tidy object display

		;OB_FLAG6
ob_attk_small	equ	0		;nme/plr doing a small attack
ob_attk_med	equ	1		;nme/plr doing a medium attack
ob_attk_big	equ	2		;nme/plr doing a big attack
ob_hit_small	equ	3		;nme/plr taking a small hit
ob_hit_med	equ	4		;nme/plr taking a medium hit
ob_hit_big	equ	5		;nme/plr taking a big hit
ob_generic1	equ	6		;generic flag
ob_generic2	equ	7		;generic flag
_ob_attk_small	equ	1		;nme/plr doing a small attack
_ob_attk_med	equ	2		;nme/plr doing a medium attack
_ob_attk_big	equ	4		;nme/plr doing a big attack
_ob_hit_small	equ	8		;nme/plr taking a small hit
_ob_hit_med	equ	16		;nme/plr taking a medium hit
_ob_hit_big	equ	32		;nme/plr taking a big hit


obattk_mask	equ	%00000111
obhit_mask	equ	%00111000
ob_dropitem	equ	%00001111


CH_DATA_SIZE		equ	16		;16 bytes reserved in RAM for each character animation database

			rsreset
CH_AnSequence		rs.l	1		;Animation sequence
CH_AnDex		rs.w	1		;Animation index
CH_AnPatch		rs.l	1		;Routine patch (special events)
CH_AnFlags		rs.b	1		;Animation flags
CH_AnCnt		rs.b	1		;Counter
CH_AnCmp		rs.b	1		;Counter compare
pad2			rs.b	1

			;CH_ANFLAGS
ch_onoff		equ	0


; - LEVEL DATA Structure ---------------------------------------------------

			rsreset
_ChrA			rs.l	1
_ChrB			rs.l	1
_MapA			rs.l	1
_MapB			rs.l	1
_BlkA			rs.l	1
_BlkB			rs.l	1
_MPal			rs.l	1
_Flr			rs.l	1
_Con			rs.l	1
_MWide			rs.w	1
_MDeep			rs.w	1
_LLim			rs.w	1
_RLim			rs.w	1
_TLim			rs.w	1
_BLim			rs.w	1
_PlrX			rs.w	1
_PlrY			rs.w	1
_MapX			rs.w	1
_MapY			rs.w	1
_PixX			rs.w	1
_PixY			rs.w	1
_Obj			rs.l	1 
_Canm			rs.l	1
_Music			rs.l	1


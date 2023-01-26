
; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ PALETTE DATA TABLES							   บ
; ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน
; บ Entry: 								   บ
; บ  Exit: 								   บ
; บ  Used: 								   บ
; ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน
; บ Palettes are broken down as follows ;			  	   บ
; บ  Pallete #1	-	0 .. 7	-	Parallax			   บ
; บ 			8 .. 15	-	Life meter/status indicators	   บ
; บ  Palette #2	-	0 .. 15	-	Foreground/level specific enemies  บ
; บ  Palette #3	-	0 .. 7	-	Goliath				   บ
; บ 			8 .. 15	-	Non level specific enemies	   บ
; บ  Palette #4	-	0 .. 7	-	Explosions/effects/powerups	   บ
; บ 		-	8 .. 15	-	Level specific enemies		   บ
; บ 									   บ
; บ DATA #1;								   บ
; บ  Palette vec (to DATA #2) vec[1].l .. vec[n].l,-1			   บ
; บ 									   บ
; บ DATA #2;								   บ
; บ  Palette vec (.l)							   บ
; บ  Colour count (.w)							   บ
; บ  Palette data (.w .. .w)						   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ


; - LEVEL #1 ---------------------------------------------------------------

l11p1		
l12p1		
l13p1		
l14p1		dc.l	GamePal1
		dc.w	31	
		PALETTE $000,$210,$620,$400,$610,$004,$226,$244	;Pens 0-7
		PALETTE $000,$100,$200,$300,$400,$500,$620,$770	;Pens 8-15
		PALETTE $000,$001,$111,$211,$011,$232,$021,$100	;Pens 16-23
		PALETTE $070,$070,$070,$070,$070,$070,$070,$070	;Pens 24-31


l00p1		dc.l	GamePal1
		dc.w	63
		PALETTE	$000,$000,$000,$000,$000,$000,$000,$000		
		PALETTE	$000,$000,$000,$000,$000,$000,$000,$000		
		PALETTE	$000,$000,$000,$000,$000,$000,$000,$000		
		PALETTE	$000,$000,$000,$000,$000,$000,$000,$000		
		PALETTE	$000,$000,$000,$000,$000,$000,$000,$000		
		PALETTE	$000,$000,$000,$000,$000,$000,$000,$000		
		PALETTE	$000,$000,$000,$000,$000,$000,$000,$000		
		PALETTE	$000,$000,$000,$000,$000,$000,$000,$000		
		

; - LEVEL #2 ---------------------------------------------------------------

l21p1		
l22p1		
l23p1		dc.l	GamePal1
		dc.w	31
		PALETTE $000,$100,$200,$300,$400,$500,$510,$520	;Pens 0-7
		PALETTE $410,$310,$210,$000,$760,$750,$740,$730	;Pens 8-15
		PALETTE $000,$777,$760,$740,$720,$000,$101,$100	;Pens 16-23
		PALETTE $201,$200,$210,$300,$310,$410,$400,$500	;Pens 24-31

l24p1		dc.l	GamePal1
		dc.w	31
		PALETTE $000,$000,$100,$100,$210,$310,$410,$510	;Pens 0-7
		PALETTE $400,$300,$200,$520,$201,$500,$100,$101	;Pens 8-15
		PALETTE $000,$777,$760,$740,$720,$000,$101,$100	;Pens 16-23
		PALETTE	$0720,$0510,$0300,$0100,$0777,$0760,$0430,$0210



; - LEVEL #3 ---------------------------------------------------------------

l31p1		
l32p1		
l33p1		dc.l	GamePal1
		dc.w	31
		PALETTE $000,$001,$010,$100,$110,$000,$122,$541	;Pens 0-7
		PALETTE $002,$111,$011,$530,$770,$310,$730,$070	;Pens 8-15
		PALETTE $000,$001,$002,$003,$012,$122,$342,$500	;Pens 16-23
		PALETTE $100,$210,$321,$777,$010,$020,$131,$163	;Pens 24-31

l34p1  		dc.l	GamePal1
		dc.w	31	
		PALETTE $000,$443,$332,$774,$372,$232,$222,$372	;Pens 0-7
		PALETTE $121,$100,$221,$111,$011,$010,$000,$001	;Pens 8-15
		PALETTE $000,$700,$001,$002,$023,$011,$221,$355	;Pens 16-23
		PALETTE $100,$210,$321,$777,$010,$020,$131,$163	;Pens 24-31

	
; - LEVEL #4 ---------------------------------------------------------------
; - CUT


; - LEVEL #5 ---------------------------------------------------------------

l51p1		dc.l	GamePal1
		dc.w	31
		PALETTE $000,$000,$011,$010,$120,$221,$422,$655	;Pens 0-7
		PALETTE $777,$775,$652,$530,$420,$310,$200,$100	;Pens 8-15
		PALETTE $000,$000,$001,$112,$113,$234,$345,$455	;Pens 16-23
		PALETTE $100,$210,$321,$777,$010,$020,$131,$163	;Pens 24-31


; - LEVEL #6 ---------------------------------------------------------------
; - CUT


; - LEVEL #7 ---------------------------------------------------------------

l71p1		
l72p1		
l73p1		
l74p1
l75p1
l76p1		dc.l	GamePal1
		dc.w	31
		PALETTE $000,$000,$000,$111,$100,$200,$300,$500	;Pens 0-7
		PALETTE $420,$730,$730,$741,$752,$730,$741,$752	;Pens 8-15
		PALETTE $000,$100,$200,$300,$610,$500,$400,$600	;Pens 16-23
		PALETTE $100,$210,$321,$777,$010,$020,$131,$163	;Pens 24-31

l77p1a		dc.l	GamePal1
		dc.w	31
		PALETTE $000,$000,$110,$221,$222,$332,$221,$320	;Pens 0-7
		PALETTE $500,$330,$010,$011,$200,$300,$400,$700	;Pens 8-15
		PALETTE $000,$100,$200,$300,$400,$500,$510,$113	;Pens 16-23
		PALETTE $615,$615,$615,$615,$615,$615,$615,$615	;Pens 24-31

l77p1b		dc.l	GamePal1
		dc.w	31
		PALETTE $000,$000,$100,$110,$111,$210,$221,$320	;Pens 0-7
		PALETTE $500,$330,$010,$011,$200,$300,$400,$700	;Pens 8-15
		PALETTE $000,$100,$200,$300,$400,$500,$510,$113	;Pens 16-23
		PALETTE $615,$615,$615,$615,$615,$615,$615,$615	;Pens 24-31


; - General ENEMY/OBJECT Palettes ------------------------------------------

GolPal		dc.l	GamePal3
		dc.w	15
		PALETTE	$0000,$0000,$0710,$0122,$0334,$0310,$0743,$0444
		PALETTE	$0333,$0222,$0111,$0777,$0530,$0541,$0652,$0664
GolPal2		dc.l	GamePal3
		dc.w	15
		PALETTE $000,$000,$700,$410,$620,$210,$743,$740	;Pens 48-55
		PALETTE $630,$321,$111,$764,$620,$640,$652,$664	;Pens 56-63


PanPal		dc.l	GamePal1+16
		dc.w	7
		PALETTE	$0515,$0510,$0500,$0400,$0333,$0222,$0111,$0000

RobotPal	dc.l	GamePal4
		dc.w	15
		PALETTE	$0000,$0111,$0222,$0333,$0444,$0555,$0666,$0777
		PALETTE	$0001,$0112,$0115,$0227,$0010,$0070,$0050,$0030
RobotPal2	dc.l	GamePal4
		dc.w	15
		PALETTE $000,$111,$321,$520,$531,$740,$750,$765	;Pens 32-39
		PALETTE $000,$100,$111,$222,$010,$070,$050,$030	;Pens 40-47
	

VikingPal	dc.l	GamePal4
		dc.w	15
		PALETTE	$0000,$0100,$0200,$0211,$0400,$0422,$0432,$0321
		PALETTE	$0210,$0000,$0001,$0112,$0011,$0010,$0122,$0232

VikingPal2	dc.l	GamePal4
		dc.w	15
		PALETTE $000,$100,$400,$211,$520,$531,$641,$321	;Pens 48-55
		PALETTE $420,$000,$001,$111,$111,$110,$222,$432	;Pens 56-63

VikingPal3	dc.l	GamePal4
		dc.w	15
		PALETTE $000,$100,$200,$211,$400,$422,$432,$321	;Pens 32-39
		PALETTE $210,$000,$001,$112,$011,$010,$122,$232	;Pens 40-47

VikingPal4	dc.l	GamePal4
		dc.w	15
		PALETTE $000,$000,$100,$200,$410,$310,$531,$751	;Pens 48-55
		PALETTE $200,$707,$001,$211,$421,$443,$763,$665	;Pens 56-63
		
DemonaPal2a	dc.l	GamePal4
		dc.w	15
DemonaPal2	PALETTE	$0000,$0100,$0300,$0610,$0730,$0740,$0751,$0762	
		PALETTE	$0774,$0707,$0233,$0112,$0445,$0234,$0222,$0111

ExpPal		dc.l	GamePal2+16
		dc.w	7
		PALETTE	$0100,$0210,$0321,$0777,$0010,$0020,$0131,$0163
Exp2Pal		dc.l	GamePal2+16
		dc.w	7
		PALETTE	$0300,$0510,$0720,$0777,$0100,$0210,$0430,$0760
Exp3Pal		dc.l	GamePal2+16
		dc.w	7
		PALETTE	$0012,$0135,$0457,$0777,$0001,$0003,$0014,$0026

ElevFXPal	dc.l	GamePal4
		dc.w	15
		PALETTE $000,$443,$332,$774,$372,$232,$222,$372	;Pens 0-7
		PALETTE $121,$100,$221,$111,$011,$010,$000,$001	;Pens 8-15

DemonaPal	dc.l	GamePal4
		dc.w	15
DemPAL		PALETTE	$0000,$0000,$0543,$0432,$0211,$0200,$0710,$0334
		PALETTE	$0223,$0112,$0100,$0777,$0445,$0234,$0222,$0111

RabidPal	dc.l	GamePal4
		dc.w	15
		PALETTE	$0000,$0111,$0222,$0333,$0444,$0555,$0666,$0777
		PALETTE	$0001,$0112,$0115,$0227,$0010,$0070,$0050,$0030

XanatosPal	dc.l	GamePal4
		dc.w	15
		PALETTE	$0000,$0000,$0710,$0300,$0611,$0310,$0743,$0742
		PALETTE	$0422,$0222,$0200,$0765,$0020,$0141,$0352,$0574
	
Car1Pal		dc.l	GamePal1
		dc.w	15
		PALETTE $000,$443,$332,$774,$372,$232,$222,$372	;Pens 0-7
		PALETTE $121,$100,$221,$111,$011,$010,$000,$001	;Pens 8-15
		PALETTE $000,$700,$001,$002,$023,$011,$221,$355	;Pens 16-23
		PALETTE $100,$210,$321,$777,$010,$020,$131,$163	;Pens 24-31

Car2Pal		dc.l	GamePal1
		dc.w	15
		PALETTE $000,$332,$222,$774,$760,$442,$222,$300	;Pens 0-7
		PALETTE $372,$100,$112,$111,$011,$010,$000,$001	;Pens 8-15
		PALETTE $000,$700,$001,$002,$023,$011,$221,$355	;Pens 16-23
		PALETTE $100,$210,$321,$777,$010,$020,$131,$163	;Pens 24-31

Car3Pal		dc.l	GamePal1
		dc.w	15
		PALETTE $000,$332,$222,$774,$760,$442,$222,$300	;Pens 0-7
		PALETTE $372,$100,$112,$111,$011,$010,$000,$001	;Pens 8-15
		PALETTE $000,$700,$001,$002,$023,$011,$221,$355	;Pens 16-23
		PALETTE $100,$210,$321,$777,$010,$020,$131,$163	;Pens 24-31


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ LEVEL DATA - Used by main setup routines.				   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

LevDATA_Vecs		dc.l	Lev11DATA,Lev12DATA,Lev13DATA,Lev14DATA		;level11 .. 14
			dc.l	Lev21DATA,Lev22DATA,Lev23DATA,Lev24DATA		;level21 .. 24
			dc.l	Lev31DATA,Lev32DATA,Lev33DATA,Lev34DATA		;level31 .. 34
			dc.l	-1,-1,-1,-1
			dc.l	Lev51DATA					;level51
			dc.l	-1,-1,-1,-1
			dc.l	Lev71DATA,Lev72DATA,Lev73DATA,Lev74DATA		;level71 .. 74
			dc.l	Lev75DATA,Lev76DATA,Lev77DATA


DeathPal		dc.l	l00p1,GolPal,-1

; - LEVEL 1.1 .. 1.4 -------------------------------------------------------

Lev11Pal		dc.l	l11p1,GolPal,VikingPal,Exp2Pal,-1
Lev11DATA		dc.l	Lev1Chr,-1				;char data
			dc.l	Lev11MapA,Lev1MapB			;map data
			dc.l	Lev1Blk,-1				;block data
			dc.l	Lev11Pal 				;palette
			dc.l	Lev1Flr 				;floor
			dc.l	Lev1Con 				;contour
			dc.w	256*2,37*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	256*2					;right  "      "
			dc.w	0					;top    "      "
			blim	36*2					;bottom "      "
			dc.w	$40,$180				;plr x,y
			dc.w	$00,$c9					;map x,y
			dc.w	$3ff0,$c9				;scroll x,y
			dc.l	L11_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.l	0					;music

Lev12Pal		dc.l	l12p1,GolPal,VikingPal,Exp2Pal,-1
Lev12DATA		dc.l	Lev1Chr,-1				;char data
			dc.l	Lev12MapA,Lev1MapB			;map data
			dc.l	Lev1Blk,-1				;block data
			dc.l	Lev12Pal 				;palette
			dc.l	Lev1Flr 				;floor
			dc.l	Lev1Con 				;contour
			dc.w	92*2,85*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	92*2					;right  "      "
			dc.w	0					;top    "      "
			blim	84*2					;bottom "      "
			dc.w	$38,$53f				;plr x,y
			dc.w	$00,$45d  				;map x,y
			dc.w	$3ff0,$45d				;scroll x,y
			dc.l	L12_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.l	0					;music

Lev13Pal		dc.l	l13p1,GolPal,VikingPal,Exp2Pal,-1
Lev13DATA		dc.l	Lev1Chr,-1				;char data
			dc.l	Lev13MapA,Lev1MapB			;map data
			dc.l	Lev1Blk,-1				;block data
			dc.l	Lev13Pal 				;palette
			dc.l	Lev1Flr 				;floor
			dc.l	Lev1Con 				;contour
			dc.w	38*2,200*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	38*2					;right  "      "
			dc.w	0					;top    "      "
			blim	199*2					;bottom "      "
			dc.w	$2e,$c60				;plr x,y
			dc.w	$00,$b8e				;map x,y
			dc.w	$3ff0,$38e				;scroll x,y
			dc.l	L13_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.l	0					;music

Lev14Pal		dc.l	l14p1,GolPal,VikingPal3,Exp3Pal,-1
Lev14DATA		dc.l	Lev1Chr,-1				;char data
			dc.l	Lev14MapA,Lev1MapB			;map data
			dc.l	Lev1Blk,-1				;block data
			dc.l	Lev14Pal 				;palette
			dc.l	Lev1Flr 				;floor
			dc.l	Lev1Con 				;contour
			dc.w	26*2,48*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	26*2					;right  "      "
			dc.w	0					;top    "      "
			blim	48*2					;bottom "      "
			dc.w	$50,0					;plr x,y
			dc.w	0,0					;map x,y
			dc.w	$3ff0,0					;scroll x,y
			dc.l	L14_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.l	0					;music

; - LEVEL 2.1 .. 2.4 -------------------------------------------------------

Lev21Pal		dc.l	l21p1,GolPal2,VikingPal2,-1
Lev21DATA		dc.l	Lev2Chr,-1				;char data
			dc.l	Lev21MapA,Lev2MapB			;map data
			dc.l	Lev2Blk,-1				;block data
			dc.l	Lev21Pal 				;palette
			dc.l	Lev2Flr 				;floor
			dc.l	Lev2Con 				;contour
			dc.w	100*2,100*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	100*2					;right  "      "
			dc.w	0					;top    "      "
			blim	99*2					;bottom "      "
			dc.w	$70,$0					;plr x,y
			dc.w	$0,$0					;map x,y
			dc.w	$3ff0,$0				;scroll x,y
			dc.l	L21_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.l	0					;music

Lev22Pal		dc.l	l22p1,GolPal2,VikingPal2,-1
Lev22DATA		dc.l	Lev2Chr,-1				;char data
			dc.l	Lev22MapA,Lev2MapB			;map data
			dc.l	Lev2Blk,-1				;block data
			dc.l	Lev22Pal 				;palette
			dc.l	Lev2Flr 				;floor
			dc.l	Lev2Con 				;contour
			dc.w	64*2,160*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	64*2					;right  "      "
			dc.w	0					;top    "      "
			blim	159*2					;bottom "      "
			dc.w	$50,$120				;plr x,y
			dc.w	$00,$71  				;map x,y
			dc.w	$3ff0,$71				;scroll x,y
			dc.l	L22_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.l	0					;music

Lev23Pal		dc.l	l23p1,GolPal2,VikingPal2,-1
Lev23DATA		dc.l	Lev2Chr,-1				;char data
			dc.l	Lev23MapA,Lev2MapB			;map data
			dc.l	Lev2Blk,-1				;block data
			dc.l	Lev23Pal 				;palette
			dc.l	Lev2Flr 				;floor
			dc.l	Lev2Con 				;contour
			dc.w	160*2,50*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	160*2					;right  "      "
			dc.w	0					;top    "      "
			blim	49*2					;bottom "      "
			dc.w	$54,$2b1				;plr x,y
			dc.w	$00,$202  				;map x,y
			dc.w	$3ff0,$202				;scroll x,y
			dc.l	L23_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.l	0					;music

Lev24Pal		dc.l	l24p1,GolPal2,VikingPal2,ExpPal,-1
Lev24DATA		dc.l	Lev24Chr,-1				;char data
			dc.l	Lev24MapAa,Lev24MapB			;map data
			dc.l	Lev24Blk,-1				;block data
			dc.l	Lev24Pal 				;palette
			dc.l	Lev24Flr 				;floor
			dc.l	Lev24Con 				;contour
			dc.w	32*2,16*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	32*2					;right  "      "
			dc.w	0					;top    "      "
			blim	15*2					;bottom "      "
			dc.w	$50,$d6					;plr x,y
			dc.w	$00,$0e					;map x,y
			dc.w	$3ff0,$0e				;scroll x,y
			dc.l	L24_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.l	0					;music


; - LEVEL 3.1 .. 3.4 -------------------------------------------------------

Lev31Pal		dc.l	l31p1,ExpPal,GolPal,RobotPal,-1
Lev31DATA		dc.l	Lev3Chr,-1				;char data
			dc.l	Lev31MapA,Lev3MapB			;map data
			dc.l	Lev3Blk,-1				;block data
			dc.l	Lev31Pal 				;palette
			dc.l	Lev3Flr 				;floor
			dc.l	Lev3Con 				;contour
			dc.w	288*2,26*2				;width,depth
			dc.w	6					;left scroll limit
			rlim	288*2					;right  "      "
			dc.w	0					;top    "      "
			blim	24*2					;bottom "      "
			dc.w	$80,0					;plr x,y
			dc.w	0,0					;map x,y
			dc.w	$3ff0,0					;scroll x,y
			dc.l	L31_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.l	0					;music

Lev32Pal		dc.l	l32p1,ExpPal,GolPal,RobotPal,-1
Lev32DATA		dc.l	Lev3Chr,-1				;char data
			dc.l	Lev32MapA,Lev3MapB			;map data
			dc.l	Lev3Blk,-1				;block data
			dc.l	Lev32Pal 				;palette
			dc.l	Lev3Flr 				;floor
			dc.l	Lev3Con 				;contour
			dc.w	112*2,80*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	112*2					;right  "      "
			dc.w	0					;top    "      "
			blim	79*2					;bottom "      "
			dc.w	$4f,$23f				;plr x,y
			dc.w	$00,$18b  				;map x,y
			dc.w	$3ff0,$18b				;scroll x,y
			dc.l	L32_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.l	0					;music

Lev33Pal		dc.l	l33p1,ExpPal,GolPal,RobotPal,-1
Lev33DATA		dc.l	Lev3Chr,-1				;char data
			dc.l	Lev33MapA,Lev3MapB			;map data
			dc.l	Lev3Blk,-1				;block data
			dc.l	Lev33Pal 				;palette
			dc.l	Lev3Flr 				;floor
			dc.l	Lev3Con 				;contour
			dc.w	32*2,224*2				;width,depth
			dc.w	4					;left scroll limit
			rlim	32*2					;right  "      "
			dc.w	0					;top    "      "
			blim	223*2					;bottom "      "
			dc.w	$48,$ddc				;plr x,y
			dc.w	$00,$d10				;map x,y
			dc.w	$3ff4,$510				;scroll x,y
			dc.l	L33_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.l	0					;music

Lev34Pal		dc.l	l34p1,ExpPal,GolPal,RobotPal,-1
Lev34DATA		dc.l	Lev34Chr,-1				;char data
			dc.l	Lev34MapAa,Lev34MapBa			;map data
			dc.l	Lev34Blk,-1				;block data
			dc.l	Lev34Pal 				;palette
			dc.l	Lev34Flr 				;floor
			dc.l	Lev34Con 				;contour
			dc.w	32*2,16*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	32*2					;right  "      "
			dc.w	0					;top    "      "
			blim	15*2					;bottom "      "
			dc.w	$b7,0					;plr x,y
			dc.w	$20,0  					;map x,y
			dc.w	$3fd0,0					;scroll x,y
			dc.l	L34_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.l	0					;music


; - LEVEL 5.1 -------------------------------------------------------------

Lev51Pal		dc.l	l51p1,GolPal,RobotPal,ExpPal,-1
Lev51DATA		dc.l	Lev5Chr,-1				;char data
			dc.l	Lev51MapA,Lev5MapBa			;map data
			dc.l	Lev5Blk,-1				;block data
			dc.l	Lev51Pal 				;palette
			dc.l	Lev5Flr 				;floor
			dc.l	Lev5Con 				;contour
			dc.w	464*2,16*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	464*2					;right  "      "
			dc.w	0					;top    "      "
			blim	16*2					;bottom "      "
;			dc.w	$1a1d,$d3				;plr x,y
;			dc.w	$1988,$24				;map x,y
;			dc.w	$2668,$24				;scroll x,y
			dc.w	$40,0					;plr x,y
			dc.w	0,0					;map x,y
			dc.w	$3ff0,0					;scroll x,y
			dc.l	L51_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.l	0					;music

Lev51DATA2		dc.l	Lev5Chr,-1				;char data
			dc.l	Lev51MapAa,-1				;map data
			dc.l	Lev5Blk,-1				;block data
			dc.l	Lev51Pal 				;palette
			dc.l	Lev5Flr 				;floor
			dc.l	Lev5Con 				;contour
			dc.w	40*2,16*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	40*2					;right  "      "
			dc.w	0					;top    "      "
			blim	16*2					;bottom "      "
			dc.w	$48,$d3					;plr x,y
			dc.w	$00,$24					;map x,y
			dc.w	$3ff0,$24				;scroll x,y
			dc.l	L51_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.l	0					;music

; - LEVEL 7.1 .. 7.7 -------------------------------------------------------

Lev71Pal		dc.l	l71p1,GolPal2,RobotPal2,ExpPal,-1
Lev71DATA		dc.l	Lev7Chr,-1				;char data
			dc.l	Lev71MapA,Lev7MapB			;map data
			dc.l	Lev7Blk,-1				;block data
			dc.l	Lev71Pal 				;palette
			dc.l	Lev7Flr 				;floor
			dc.l	Lev7Con 				;contour
			dc.w	208*2,48*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	208*2					;right  "      "
			dc.w	0					;top    "      "
			blim	47*2					;bottom "      "
			dc.w	$4c,$29a				;plr x,y
			dc.w	$00,$1eb  				;map x,y
			dc.w	$3ff0,$1eb				;scroll x,y
			dc.l	L71_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.l	0					;music

Lev72Pal		dc.l	l72p1,GolPal2,RobotPal2,ExpPal,-1
Lev72DATA		dc.l	Lev7Chr,-1				;char data
			dc.l	Lev72MapA,Lev7MapB			;map data
			dc.l	Lev7Blk,-1				;block data
			dc.l	Lev72Pal 				;palette
			dc.l	Lev7Flr 				;floor
			dc.l	Lev7Con 				;contour
			dc.w	73*2,80*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	73*2					;right  "      "
			dc.w	0					;top    "      "
			blim	79*2					;bottom "      "
			dc.w	$44,$3e0				;plr x,y
			dc.w	$00,$331				;map x,y
			dc.w	$3ff0,$331				;scroll x,y
			dc.l	L71_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.l	0					;music

Lev73Pal		dc.l	l73p1,GolPal2,RobotPal2,ExpPal,-1
Lev73DATA		dc.l	Lev7Chr,-1				;char data
			dc.l	Lev73MapA,Lev7MapB			;map data
			dc.l	Lev7Blk,-1				;block data
			dc.l	Lev73Pal 				;palette
			dc.l	Lev7Flr 				;floor
			dc.l	Lev7Con 				;contour
			dc.w	224*2,23*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	224*2					;right  "      "
			dc.w	0					;top    "      "
			blim	22*2					;bottom "      "
			dc.w	$dcc,$f0				;plr x,y
			dc.w	$cb5,$41					;map x,y
			dc.w	$333b,$41				;scroll x,y
			dc.l	L71_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.l	0					;music

Lev74Pal		dc.l	l74p1,GolPal2,RobotPal2,ExpPal,-1
Lev74DATA		dc.l	Lev7Chr,-1				;char data
			dc.l	Lev74MapA,Lev7MapB			;map data
			dc.l	Lev7Blk,-1				;block data
			dc.l	Lev74Pal 				;palette
			dc.l	Lev7Flr 				;floor
			dc.l	Lev7Con 				;contour
			dc.w	32*2,160*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	32*2					;right  "      "
			dc.w	0					;top    "      "
			blim	159*2					;bottom "      "
			dc.w	$1c4,$9c9				;plr x,y
			dc.w	$b4,$90b				;map x,y
			dc.w	$3f3c,$10b				;scroll x,y
			dc.l	L71_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.l	0					;music

Lev75Pal		dc.l	l75p1,GolPal2,RobotPal2,ExpPal,-1
Lev75DATA		dc.l	Lev7Chr,-1				;char data
			dc.l	Lev75MapA,Lev7MapB			;map data
			dc.l	Lev7Blk,-1				;block data
			dc.l	Lev75Pal 				;palette
			dc.l	Lev7Flr 				;floor
			dc.l	Lev7Con 				;contour
			dc.w	160*2,64*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	160*2					;right  "      "
			dc.w	0					;top    "      "
			blim	63*2					;bottom "      "
			dc.w	$4c,$3ba				;plr x,y
			dc.w	$00,$30b				;map x,y
			dc.w	$3ff0,$30b				;scroll x,y
			dc.l	L71_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.l	0					;music

Lev76Pal		dc.l	l76p1,GolPal2,RobotPal2,ExpPal,-1
Lev76DATA		dc.l	Lev7Chr,-1				;char data
			dc.l	Lev76MapA,Lev7MapB			;map data
			dc.l	Lev7Blk,-1				;block data
			dc.l	Lev76Pal 				;palette
			dc.l	Lev7Flr 				;floor
			dc.l	Lev7Con 				;contour
			dc.w	96*2,112*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	96*2					;right  "      "
			dc.w	0					;top    "      "
			blim	111*2					;bottom "      "
			dc.w	$4c,$6ca				;plr x,y
			dc.w	$00,$60d  				;map x,y
			dc.w	$3ff0,$60d				;scroll x,y
			dc.l	L71_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.l	0					;music

Lev77Pala		dc.l	l77p1a,GolPal,DemonaPal,ExpPal,-1
Lev77Palb		dc.l	l77p1b,GolPal,RabidPal,ExpPal,-1
Lev77DATA		dc.l	Lev77Chr,-1				;char data
			dc.l	Lev77MapAa,Lev77MapB			;map data
			dc.l	Lev77Blk,-1				;block data
			dc.l	Lev77Pala 				;palette
			dc.l	Lev77Flr 				;floor
			dc.l	Lev77Con 				;contour
			dc.w	40*2,108*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	40*2					;right  "      "
			dc.w	0					;top    "      "
			blim	107*2					;bottom "      "
			dc.w	$190,$6ab+$50				;plr x,y
			dc.w	$85,$5ce				;map x,y
			dc.w	$3f6b,$5ce				;scroll x,y
			dc.l	L77_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.l	0					;music


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ SHELL SETUP DATA TABLES						   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

IPal		dc.l	GamePal1
		dc.w	63	
		PALETTE $000,$776,$765,$655,$654,$554,$543,$443	;Pens 0-7
		PALETTE $432,$321,$221,$210,$110,$100,$000,$005	;Pens 8-15
		PALETTE $000,$707,$707,$707,$707,$707,$707,$707	;Pens 16-23
		PALETTE $707,$707,$707,$707,$707,$707,$707,$707	;Pens 24-31
		PALETTE $000,$707,$707,$707,$707,$707,$707,$707	;Pens 32-39
		PALETTE $707,$707,$707,$707,$707,$707,$707,$707	;Pens 40-47
		PALETTE $000,$707,$707,$707,$707,$707,$707,$707	;Pens 48-55
		PALETTE $707,$707,$707,$707,$707,$707,$000,$000	;Pens 56-63

YLPal		dc.l	GamePal1
		dc.w	63	
		PALETTE $000,$776,$765,$655,$654,$554,$543,$443	;Pens 0-7
		PALETTE $432,$321,$221,$210,$110,$100,$000,$005	;Pens 8-15
		PALETTE $000,$707,$707,$707,$707,$707,$707,$707	;Pens 16-23
		PALETTE $707,$707,$707,$707,$707,$707,$707,$707	;Pens 24-31
		PALETTE $000,$707,$707,$707,$707,$707,$707,$707	;Pens 32-39
		PALETTE $707,$707,$707,$707,$707,$707,$707,$707	;Pens 40-47
		PALETTE $000,$707,$707,$707,$707,$707,$707,$707	;Pens 48-55
		PALETTE $707,$707,$707,$707,$707,$707,$000,$000	;Pens 56-63

BL1Pal		dc.l	GamePal1
		dc.w	63	
		PALETTE $000,$774,$763,$752,$741,$730,$631,$533	;Pens 0-7
		PALETTE $223,$112,$012,$011,$000,$210,$420,$122	;Pens 8-15
		PALETTE $000,$000,$642,$421,$210,$500,$532,$543	;Pens 16-23
		PALETTE $654,$766,$655,$444,$334,$223,$112,$000	;Pens 24-31
		PALETTE $717,$717,$717,$717,$717,$717,$717,$717	;Pens 32-39
		PALETTE $717,$717,$717,$717,$717,$717,$717,$717	;Pens 40-47
		PALETTE $717,$717,$717,$717,$717,$717,$717,$717	;Pens 48-55
		PALETTE $717,$717,$717,$717,$717,$717,$000,$000	;Pens 56-63

BL2Pal		dc.l	GamePal1
		dc.w	63
		PALETTE $000,$011,$666,$710,$445,$224,$112,$100	;Pens 0-7
		PALETTE $555,$753,$001,$222,$110,$200,$300,$000	;Pens 8-15
		PALETTE $000,$011,$223,$510,$445,$234,$112,$000	;Pens 16-23
		PALETTE $555,$765,$544,$444,$433,$322,$211,$050	;Pens 24-31
		PALETTE $756,$756,$756,$756,$756,$756,$756,$756	;Pens 32-39
		PALETTE $756,$756,$756,$756,$756,$756,$756,$756	;Pens 40-47
		PALETTE $756,$756,$756,$756,$756,$756,$756,$756	;Pens 48-55
		PALETTE $717,$717,$717,$717,$717,$717,$000,$000	;Pens 56-63

EL2Pal		dc.l	GamePal1
		dc.w	63	
		PALETTE $000,$002,$012,$023,$133,$244,$454,$776	;Pens 0-7
		PALETTE $765,$753,$643,$632,$421,$212,$001,$000	;Pens 8-15
		PALETTE $000,$655,$543,$321,$210,$000,$445,$224	;Pens 16-23
		PALETTE $730,$740,$101,$555,$334,$223,$112,$001	;Pens 24-31
		PALETTE $007,$007,$007,$007,$007,$007,$007,$007	;Pens 32-39
		PALETTE $007,$007,$007,$007,$007,$007,$007,$007	;Pens 40-47
		PALETTE $007,$007,$007,$007,$007,$007,$007,$007	;Pens 48-55
		PALETTE $717,$717,$717,$717,$717,$717,$000,$000	;Pens 56-63

BL3Pal		dc.l	GamePal1
		dc.w	63	
		PALETTE $000,$002,$012,$023,$133,$244,$454,$776	;Pens 0-7
		PALETTE $765,$753,$643,$632,$421,$212,$001,$000	;Pens 8-15
		PALETTE $000,$655,$543,$321,$210,$000,$445,$224	;Pens 16-23
		PALETTE $036,$046,$101,$555,$334,$223,$112,$001	;Pens 24-31
		PALETTE $007,$007,$007,$007,$007,$007,$007,$007	;Pens 32-39
		PALETTE $007,$007,$007,$007,$007,$007,$007,$007	;Pens 40-47
		PALETTE $007,$007,$007,$007,$007,$007,$007,$007	;Pens 48-55
		PALETTE $707,$707,$707,$707,$707,$707,$000,$000	;Pens 56-63

BL5Pal		dc.l	GamePal1
		dc.w	63  
		PALETTE $000,$600,$052,$161,$372,$573,$777,$566	;Pens 0-7
		PALETTE $445,$121,$111,$321,$763,$641,$531,$010	;Pens 8-15
		PALETTE $001,$110,$121,$221,$510,$100,$211,$321	;Pens 16-23
		PALETTE $543,$665,$553,$444,$333,$222,$111,$000	;Pens 24-31
		PALETTE $746,$746,$746,$746,$746,$746,$746,$746	;Pens 32-39
		PALETTE $746,$746,$746,$746,$746,$746,$746,$746	;Pens 40-47
		PALETTE $746,$746,$746,$746,$746,$746,$746,$746	;Pens 48-55
		PALETTE $707,$707,$707,$707,$707,$707,$000,$000	;Pens 56-63

BL7Pal		dc.l	GamePal1
		dc.w	63	
		PALETTE $000,$774,$763,$752,$741,$730,$520,$310	;Pens 0-7
		PALETTE $200,$100,$000,$001,$002,$013,$014,$024	;Pens 8-15
		PALETTE $707,$707,$707,$707,$707,$707,$707,$707	;Pens 16-23
		PALETTE $707,$707,$707,$707,$707,$707,$707,$707	;Pens 24-31
		PALETTE $707,$707,$707,$707,$707,$707,$707,$707	;Pens 32-39
		PALETTE $707,$707,$707,$707,$707,$707,$707,$707	;Pens 40-47
		PALETTE $707,$707,$707,$707,$707,$707,$707,$707	;Pens 48-55
		PALETTE $333,$222,$111,$777,$530,$541,$000,$000	;Pens 56-63

ML7Pal		dc.l	GamePal1
		dc.w	63	
		PALETTE $000,$774,$763,$752,$741,$730,$520,$310	;Pens 0-7
		PALETTE $200,$100,$000,$001,$002,$013,$014,$024	;Pens 8-15
		PALETTE $707,$707,$707,$707,$707,$707,$707,$707	;Pens 16-23
		PALETTE $707,$707,$707,$707,$707,$707,$707,$707	;Pens 24-31
		PALETTE $707,$707,$707,$707,$707,$707,$707,$707	;Pens 32-39
		PALETTE $707,$707,$707,$707,$707,$707,$707,$707	;Pens 40-47
		PALETTE $707,$707,$707,$707,$707,$707,$707,$707	;Pens 48-55
		PALETTE $707,$707,$707,$707,$707,$707,$000,$333	;Pens 56-63

EL7Pal		dc.l	GamePal1
		dc.w	63	
		PALETTE $000,$002,$012,$023,$133,$244,$454,$776	;Pens 0-7
		PALETTE $765,$753,$643,$632,$421,$212,$001,$000	;Pens 8-15
		PALETTE $001,$726,$726,$726,$726,$500,$333,$222	;Pens 16-23
		PALETTE $112,$111,$765,$654,$433,$322,$211,$000	;Pens 24-31
		PALETTE $726,$726,$726,$726,$726,$726,$726,$726	;Pens 32-39
		PALETTE $726,$726,$726,$726,$726,$726,$726,$726	;Pens 40-47
		PALETTE $726,$726,$726,$726,$726,$726,$726,$726	;Pens 48-55
		PALETTE $717,$717,$717,$717,$717,$717,$000,$000	;Pens 56-63

ConPal		dc.l	GamePal1
		dc.w	63	
		PALETTE $000,$455,$543,$542,$431,$320,$210,$100	;Pens 0-7
		PALETTE $000,$030,$030,$030,$030,$030,$030,$030	;Pens 8-15
		PALETTE $007,$007,$007,$007,$007,$007,$007,$007	;Pens 16-23
		PALETTE $007,$007,$007,$007,$007,$007,$007,$007	;Pens 24-31
		PALETTE $007,$007,$007,$007,$007,$007,$007,$007	;Pens 32-39
		PALETTE $007,$007,$007,$007,$007,$007,$007,$007	;Pens 40-47
		PALETTE $007,$007,$007,$007,$007,$007,$007,$007	;Pens 48-55
		PALETTE $007,$007,$007,$007,$007,$007,$007,$007	;Pens 56-63

OptPal		dc.l	GamePal1
		dc.w	63	
		PALETTE $000,$000,$001,$013,$014,$015,$016,$017	;Pens 0-7
		PALETTE $027,$037,$047,$012,$707,$707,$707,$707	;Pens 8-15
		PALETTE $012,$655,$543,$321,$210,$000,$445,$224	;Pens 16-23
		PALETTE $007,$007,$101,$555,$334,$223,$112,$001	;Pens 24-31
		PALETTE $707,$707,$707,$707,$707,$707,$707,$707	;Pens 32-39
		PALETTE $707,$707,$707,$707,$707,$707,$000,$000	;Pens 56-63
		PALETTE $707,$707,$707,$707,$707,$707,$707,$707	;Pens 48-55
		PALETTE $007,$007,$007,$007,$007,$007,$666,$444	;Pens 40-47

TPPal		dc.l	GamePal1
		dc.w	63	
		PALETTE $000,$542,$431,$421,$653,$200,$100,$007	;Pens 0-7
		PALETTE $310,$720,$520,$100,$777,$761,$750,$210	;Pens 8-15
		PALETTE $012,$542,$431,$421,$653,$200,$100,$000	;Pens 16-23
		PALETTE $310,$720,$520,$100,$777,$761,$750,$210	;Pens 24-31
		PALETTE $007,$007,$007,$007,$007,$007,$007,$007	;Pens 32-39
		PALETTE $007,$007,$007,$007,$007,$007,$000,$000	;Pens 56-63
		PALETTE $007,$007,$007,$007,$007,$007,$007,$007	;Pens 48-55
		PALETTE $007,$007,$007,$007,$007,$007,$666,$444	;Pens 40-47
							    

TitlesPal		dc.l	TPPal,-1
TitlesDATA		dc.l	TitlePageChr,-1				;char data
			dc.l	TitlePageMapA,TitlePageMapB		;map data
			dc.l	TitlePageBlk,-1				;block data
			dc.l	TitlesPal 				;palette
			dc.l	-1	 				;floor
			dc.l	-1	 				;contour
			dc.w	20*2,16*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	20*2					;right  "      "
			dc.w	0					;top    "      "
			blim	15*2					;bottom "      "
			dc.w	0,0					;plr x,y
			dc.w	0,0  					;map x,y
			dc.w	0,0					;scroll x,y
			dc.l	-1					;ob trigger data
			dc.l	-1					;char anim 
			dc.l	0					;music

YouLosePal		dc.l	YLPal,-1
YouLoseDATA		dc.l	YouLoseChr,-1				;char data
			dc.l	YouLoseMapA,YouLoseMapB			;map data
			dc.l	YouLoseBlk,-1				;block data
			dc.l	YouLosePal 				;palette
			dc.l	-1	 				;floor
			dc.l	-1	 				;contour
			dc.w	20*2,16*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	20*2					;right  "      "
			dc.w	0					;top    "      "
			blim	15*2					;bottom "      "
			dc.w	0,0					;plr x,y
			dc.w	0,0  					;map x,y
			dc.w	0,0					;scroll x,y
			dc.l	-1					;ob trigger data
			dc.l	-1					;char anim 
			dc.l	0					;music

ContinuePal		dc.l	ConPal,GolPal,RobotPal,ExpPal,-1
ContinueDATA		dc.l	ContinueChr,-1				;char data
			dc.l	ContinueMapA,ContinueMapB		;map data
			dc.l	ContinueBlk,-1				;block data
			dc.l	ContinuePal 				;palette
			dc.l	-1	 				;floor
			dc.l	-1	 				;contour
			dc.w	20*2,16*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	20*2					;right  "      "
			dc.w	0					;top    "      "
			blim	15*2					;bottom "      "
			dc.w	0,0					;plr x,y
			dc.w	0,0					;map x,y
			dc.w	0,0					;scroll x,y
			dc.l	-1					;ob trigger data
			dc.l	-1					;char anim 
			dc.l	0					;music

OptionsPal		dc.l	OptPal,-1
OptionsDATA		dc.l	OptionsChr,-1				;char data
			dc.l	OptionsMapA,OptionsMapB			;map data
			dc.l	OptionsBlk,-1				;block data
			dc.l	OptionsPal 				;palette
			dc.l	-1	 				;floor
			dc.l	-1	 				;contour
			dc.w	20*2,16*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	20*2					;right  "      "
			dc.w	0					;top    "      "
			blim	15*2					;bottom "      "
			dc.w	0,0					;plr x,y
			dc.w	0,0  					;map x,y
			dc.w	0,0					;scroll x,y
			dc.l	-1					;ob trigger data
			dc.l	-1					;char anim 
			dc.l	0					;music

IntroPal		dc.l	IPal,-1
IntroDATA		dc.l	IntroChr,-1				;char data
			dc.l	IntroMapA,IntroMapB			;map data
			dc.l	IntroBlk,-1				;block data
			dc.l	IntroPal 				;palette
			dc.l	-1	 				;floor
			dc.l	-1	 				;contour
			dc.w	20*2,16*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	20*2					;right  "      "
			dc.w	0					;top    "      "
			blim	15*2					;bottom "      "
			dc.w	0,0					;plr x,y
			dc.w	0,0  					;map x,y
			dc.w	0,0					;scroll x,y
			dc.l	-1					;ob trigger data
			dc.l	-1					;char anim 
			dc.l	0					;music


BeginL1Pal		dc.l	BL1Pal,-1
BeginL1DATA		dc.l	BeginL1Chr,-1				;char data
			dc.l	BeginL1MapA,BeginL1MapB			;map data
			dc.l	BeginL1Blk,-1				;block data
			dc.l	BeginL1Pal 				;palette
			dc.l	-1	 				;floor
			dc.l	-1	 				;contour
			dc.w	20*2,16*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	20*2					;right  "      "
			dc.w	0					;top    "      "
			blim	15*2					;bottom "      "
			dc.w	0,0					;plr x,y
			dc.w	0,0  					;map x,y
			dc.w	0,-$18					;scroll x,y
			dc.l	-1					;ob trigger data
			dc.l	-1					;char anim 
			dc.l	0					;music

BeginL2Pal		dc.l	BL2Pal,-1
BeginL2DATA		dc.l	BeginL2Chr,-1				;char data
			dc.l	BeginL2MapA,BeginL2MapB			;map data
			dc.l	BeginL2Blk,-1				;block data
			dc.l	BeginL2Pal 				;palette
			dc.l	-1	 				;floor
			dc.l	-1	 				;contour
			dc.w	20*2,16*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	20*2					;right  "      "
			dc.w	0					;top    "      "
			blim	15*2					;bottom "      "
			dc.w	0,0					;plr x,y
			dc.w	0,0  					;map x,y
			dc.w	0,0					;scroll x,y
			dc.l	-1					;ob trigger data
			dc.l	-1					;char anim 
			dc.l	0					;music

EndL2Pal		dc.l	EL2Pal,-1
EndL2DATA		dc.l	EndL2Chr,-1				;char data
			dc.l	EndL2MapA,EndL2MapB			;map data
			dc.l	EndL2Blk,-1				;block data
			dc.l	EndL2Pal 				;palette
			dc.l	-1	 				;floor
			dc.l	-1	 				;contour
			dc.w	20*2,16*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	20*2					;right  "      "
			dc.w	0					;top    "      "
			blim	15*2					;bottom "      "
			dc.w	0,0					;plr x,y
			dc.w	0,0  					;map x,y
			dc.w	0,0					;scroll x,y
			dc.l	-1					;ob trigger data
			dc.l	-1					;char anim 
			dc.l	0					;music

BeginL3Pal		dc.l	BL3Pal,-1
BeginL3DATA		dc.l	BeginL3Chr,-1				;char data
			dc.l	BeginL3MapA,BeginL3MapB			;map data
			dc.l	BeginL3Blk,-1				;block data
			dc.l	BeginL3Pal 				;palette
			dc.l	-1	 				;floor
			dc.l	-1	 				;contour
			dc.w	20*2,16*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	20*2					;right  "      "
			dc.w	0					;top    "      "
			blim	15*2					;bottom "      "
			dc.w	0,0					;plr x,y
			dc.w	0,0  					;map x,y
			dc.w	0,0					;scroll x,y
			dc.l	-1					;ob trigger data
			dc.l	-1					;char anim 
			dc.l	0					;music

BeginL5Pal		dc.l	BL5Pal,-1
BeginL5DATA		dc.l	BeginL5Chr,-1				;char data
			dc.l	BeginL5MapA,BeginL5MapB			;map data
			dc.l	BeginL5Blk,-1				;block data
			dc.l	BeginL5Pal 				;palette
			dc.l	-1	 				;floor
			dc.l	-1	 				;contour
			dc.w	20*2,16*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	20*2					;right  "      "
			dc.w	0					;top    "      "
			blim	15*2					;bottom "      "
			dc.w	0,0					;plr x,y
			dc.w	0,0  					;map x,y
			dc.w	0,0					;scroll x,y
			dc.l	-1					;ob trigger data
			dc.l	-1					;char anim 
			dc.l	0					;music

BeginL7Pal		dc.l	BL7Pal,-1
BeginL7DATA		dc.l	BeginL7Chr,-1				;char data
			dc.l	BeginL7MapA,BeginL7MapB			;map data
			dc.l	BeginL7Blk,-1				;block data
			dc.l	BeginL7Pal 				;palette
			dc.l	-1	 				;floor
			dc.l	-1	 				;contour
			dc.w	20*2,16*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	20*2					;right  "      "
			dc.w	0					;top    "      "
			blim	15*2					;bottom "      "
			dc.w	0,0					;plr x,y
			dc.w	0,0  					;map x,y
			dc.w	0,0					;scroll x,y
			dc.l	-1					;ob trigger data
			dc.l	-1					;char anim 
			dc.l	0					;music

MidL7Pal		dc.l	ML7Pal,-1
MidL7DATA		dc.l	MiddleL7Chr,-1				;char data
			dc.l	MiddleL7MapA,MiddleL7MapB		;map data
			dc.l	MiddleL7Blk,-1				;block data
			dc.l	MidL7Pal 				;palette
			dc.l	-1	 				;floor
			dc.l	-1	 				;contour
			dc.w	20*2,16*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	20*2					;right  "      "
			dc.w	0					;top    "      "
			blim	15*2					;bottom "      "
			dc.w	0,0					;plr x,y
			dc.w	0,0  					;map x,y
			dc.w	0,0					;scroll x,y
			dc.l	-1					;ob trigger data
			dc.l	-1					;char anim 
			dc.l	0					;music

EndL7Pal		dc.l	EL7Pal,-1
EndL7DATA		dc.l	EndL7Chr,-1				;char data
			dc.l	EndL7MapA,EndL7MapB			;map data
			dc.l	EndL7Blk,-1				;block data
			dc.l	EndL7Pal 				;palette
			dc.l	-1	 				;floor
			dc.l	-1	 				;contour
			dc.w	20*2,16*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	20*2					;right  "      "
			dc.w	0					;top    "      "
			blim	15*2					;bottom "      "
			dc.w	0,0					;plr x,y
			dc.w	0,0  					;map x,y
			dc.w	0,0					;scroll x,y
			dc.l	-1					;ob trigger data
			dc.l	-1					;char anim 
			dc.l	0					;music


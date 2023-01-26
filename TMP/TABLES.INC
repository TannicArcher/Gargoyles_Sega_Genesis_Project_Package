
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
		PALETTE $310,$100,$200,$300,$000,$021,$110,$000	;Pens 0-7
		PALETTE $011,$221,$310,$330,$210,$111,$321,$420	;Pens 8-15
		PALETTE $310,$100,$200,$300,$210,$410,$420,$000	;Pens 16-23
		PALETTE $725,$725,$725,$725,$725,$725,$725,$725	;Pens 24-31

; - LEVEL #2 ---------------------------------------------------------------

l21p1		
l22p1		
l23p1		
l24p1		dc.l	GamePal1
		dc.w	31
		PALETTE $310,$100,$200,$300,$000,$021,$110,$000	;Pens 0-7
		PALETTE $011,$221,$310,$330,$210,$111,$321,$420	;Pens 8-15
		PALETTE $310,$100,$200,$300,$210,$410,$420,$000	;Pens 16-23
		PALETTE $725,$725,$725,$725,$725,$725,$725,$725	;Pens 24-31

; - LEVEL #3 ---------------------------------------------------------------

l31p1		dc.l	GamePal1
		dc.w	31
		PALETTE $336,$002,$020,$200,$220,$000,$233,$430	;Pens 0-7
		PALETTE $003,$222,$022,$640,$320,$420,$600,$400	;Pens 8-15
		PALETTE $110,$000,$001,$002,$012,$122,$231,$431	;Pens 16-23
		PALETTE $707,$707,$707,$707,$707,$707,$707,$707	;Pens 24-31

l32p1		dc.l	GamePal1
		dc.w	31
		PALETTE $003,$001,$010,$100,$110,$000,$122,$320	;Pens 0-7
		PALETTE $002,$111,$011,$530,$770,$310,$300,$070	;Pens 8-15
		PALETTE $003,$000,$001,$002,$012,$122,$231,$500	;Pens 16-23
		PALETTE $707,$707,$707,$707,$707,$707,$707,$707	;Pens 24-31

l33p1		dc.l	GamePal1
		dc.w	31
		PALETTE $225,$001,$010,$100,$110,$000,$122,$320	;Pens 0-7
		PALETTE $002,$111,$011,$530,$210,$310,$500,$300	;Pens 8-15
		PALETTE $110,$000,$001,$002,$012,$122,$231,$431	;Pens 16-23
		PALETTE $707,$707,$707,$707,$707,$707,$707,$707	;Pens 24-31

l34p1		dc.l	GamePal1
		dc.w	31
		PALETTE $225,$001,$010,$100,$110,$000,$122,$320	;Pens 0-7
		PALETTE $002,$111,$011,$530,$750,$310,$500,$070	;Pens 8-15
		PALETTE $110,$000,$001,$002,$012,$122,$231,$431	;Pens 16-23
		PALETTE $707,$707,$707,$707,$707,$707,$707,$707	;Pens 24-31

		
; - LEVEL #4 ---------------------------------------------------------------

l41p1		
l42p1		
l43p1		
l44p1		dc.l	GamePal1
		dc.w	31
		PALETTE $310,$100,$200,$300,$000,$021,$110,$000	;Pens 0-7
		PALETTE $011,$221,$310,$330,$210,$111,$321,$420	;Pens 8-15
		PALETTE $310,$100,$200,$300,$210,$410,$420,$000	;Pens 16-23
		PALETTE $725,$725,$725,$725,$725,$725,$725,$725	;Pens 24-31


; - LEVEL #5 ---------------------------------------------------------------

l51p1		dc.l	GamePal1
		dc.w	31
		PALETTE $310,$100,$200,$300,$000,$021,$110,$000	;Pens 0-7
		PALETTE $011,$221,$310,$330,$210,$111,$321,$420	;Pens 8-15
		PALETTE $310,$100,$200,$300,$210,$410,$420,$000	;Pens 16-23
		PALETTE $725,$725,$725,$725,$725,$725,$725,$725	;Pens 24-31


; - LEVEL #6 ---------------------------------------------------------------

l61p1		
l62p1		
l63p1		
l64p1		dc.l	GamePal1
		dc.w	31
		PALETTE $310,$100,$200,$300,$000,$021,$110,$000	;Pens 0-7
		PALETTE $011,$221,$310,$330,$210,$111,$321,$420	;Pens 8-15
		PALETTE $310,$100,$200,$300,$210,$410,$420,$000	;Pens 16-23
		PALETTE $725,$725,$725,$725,$725,$725,$725,$725	;Pens 24-31


; - LEVEL #7 ---------------------------------------------------------------

l71p1		
l72p1		
l73p1		
l74p1		dc.l	GamePal1
		dc.w	31
		PALETTE $310,$100,$200,$300,$000,$021,$110,$000	;Pens 0-7
		PALETTE $011,$221,$310,$330,$210,$111,$321,$420	;Pens 8-15
		PALETTE $310,$100,$200,$300,$210,$410,$420,$000	;Pens 16-23
		PALETTE $725,$725,$725,$725,$725,$725,$725,$725	;Pens 24-31


; - PLAYROOM ---------------------------------------------------------------

l99p1		dc.l	GamePal1
		dc.w	31
		PALETTE $000,$705,$705,$705,$705,$705,$705,$705	;Pens 0-7
		PALETTE $705,$705,$705,$705,$705,$777,$777,$777	;Pens 8-15
		PALETTE $705,$705,$705,$705,$705,$705,$705,$705	;Pens 16-23
		PALETTE $705,$705,$705,$705,$705,$333,$555,$777	;Pens 24-31


; - General ENEMY/OBJECT Palettes ------------------------------------------

GolPal		dc.l	GamePal3
		dc.w	15
		PALETTE	$0022,$0000,$0710,$0122,$0334,$0310,$0743,$0444
		PALETTE	$0333,$0222,$0111,$0777,$0707,$0707,$0707,$0707

PanPal		dc.l	GamePal1+16
		dc.w	7
		PALETTE	$0515,$0510,$0500,$0400,$0333,$0222,$0111,$0000

StrawmanPal	dc.l	Pal4
		dc.w	15
		PALETTE	$0563,$0762,$0640,$0530,$0330,$0530,$0420,$0310
		PALETTE	$0630,$0520,$0410,$0300,$0630,$0420,$0310,$0100

RapBotPal	dc.l	GamePal4
		dc.w	15
		PALETTE	$0002,$0111,$0222,$0333,$0444,$0555,$0666,$0777
		PALETTE	$0001,$0112,$0777,$0377,$0007,$0600,$0500,$0300

TriloBotPal	dc.l	GamePal4
		dc.w	15
		PALETTE	$0120,$0707,$0110,$0111,$0321,$0421,$0532,$0652
		PALETTE	$0000,$0000,$0222,$0332,$0443,$0444,$0655,$0777


SniBotPal	dc.l	GamePal4
		dc.w	15
		PALETTE	$0220,$0000,$0011,$0122,$0233,$0344,$0454,$0466
		PALETTE	$0777,$0700,$0600,$0500,$0400,$0300,$0200,$0100


ExpPal		dc.l	GamePal2+16
		dc.w	7
		PALETTE	$0100,$0210,$0321,$0777,$0010,$0020,$0131,$0163


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ LEVEL DATA - Used by main setup routines.				   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

LevDATA_Vecs		dc.l	Lev11DATA,Lev12DATA,Lev13DATA,Lev14DATA		;level11 .. 14
			dc.l	Lev21DATA,Lev22DATA,Lev23DATA,Lev24DATA		;level21 .. 24
			dc.l	Lev31DATA,Lev32DATA,Lev33DATA,Lev34DATA		;level31 .. 34
			dc.l	Lev41DATA,Lev42DATA,Lev43DATA,Lev44DATA		;level41 .. 44
			dc.l	Lev51DATA					;level51
			dc.l	Lev61DATA,Lev62DATA,Lev63DATA,Lev64DATA		;level61 .. 64
			dc.l	Lev71DATA,Lev72DATA,Lev73DATA,Lev74DATA		;level71 .. 74
			dc.l	Lev99DATA


; - LEVEL 1.1 .. 1.4 -------------------------------------------------------

Lev11Pal		dc.l	l11p1,GolPal,-1;PanPal,-1
Lev11DATA		dc.l	Lev11ChrA,-1				;char data
			dc.l	Lev11MapA,Lev11MapB			;map data
			dc.l	Lev11BlkA,-1				;block data
			dc.l	Lev11Pal 				;palette
			dc.l	Lev11Flr 				;floor
			dc.l	Lev11Con 				;contour
			dc.w	320*2,30*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	30*2					;bottom "      "
			dc.w	$40,$180				;plr x,y
			dc.w	$00,$c9					;map x,y
			dc.w	$3ff0,$c9				;scroll x,y
			dc.l	L11_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music

Lev12Pal		dc.l	l12p1,GolPal,-1;PanPal,-1
Lev12DATA		dc.l	Lev11ChrA,-1				;char data
			dc.l	Lev12MapA,Lev11MapB			;map data
			dc.l	Lev11BlkA,-1				;block data
			dc.l	Lev12Pal 				;palette
			dc.l	Lev12Flr 				;floor
			dc.l	Lev12Con 				;contour
			dc.w	320*2,30*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	30*2					;bottom "      "
			dc.w	$40,$180				;plr x,y
			dc.w	$00,$c9					;map x,y
			dc.w	$3ff0,$c9				;scroll x,y
			dc.l	L12_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music

Lev13Pal		dc.l	l13p1,GolPal,-1;PanPal,-1
Lev13DATA		dc.l	Lev11ChrA,-1				;char data
			dc.l	Lev13MapA,Lev11MapB			;map data
			dc.l	Lev11BlkA,-1				;block data
			dc.l	Lev13Pal 				;palette
			dc.l	Lev13Flr 				;floor
			dc.l	Lev13Con 				;contour
			dc.w	320*2,30*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	30*2					;bottom "      "
			dc.w	$40,$180				;plr x,y
			dc.w	$00,$c9					;map x,y
			dc.w	$3ff0,$c9				;scroll x,y
			dc.l	L13_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music

Lev14Pal		dc.l	l14p1,GolPal,-1;PanPal,-1
Lev14DATA		dc.l	Lev11ChrA,-1				;char data
			dc.l	Lev14MapA,Lev11MapB			;map data
			dc.l	Lev11BlkA,-1				;block data
			dc.l	Lev14Pal 				;palette
			dc.l	Lev14Flr 				;floor
			dc.l	Lev14Con 				;contour
			dc.w	320*2,30*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	30*2					;bottom "      "
			dc.w	$40,$180				;plr x,y
			dc.w	$00,$c9					;map x,y
			dc.w	$3ff0,$c9				;scroll x,y
			dc.l	L14_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music

; - LEVEL 2.1 .. 2.4 -------------------------------------------------------

Lev21Pal		dc.l	l21p1,GolPal,-1;PanPal,-1
Lev21DATA		dc.l	Lev21ChrA,-1				;char data
			dc.l	Lev21MapA,Lev21MapB			;map data
			dc.l	Lev21BlkA,-1				;block data
			dc.l	Lev21Pal 				;palette
			dc.l	Lev21Flr 				;floor
			dc.l	Lev21Con 				;contour
			dc.w	320*2,30*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	30*2					;bottom "      "
			dc.w	$40,$180				;plr x,y
			dc.w	$00,$c9					;map x,y
			dc.w	$3ff0,$c9				;scroll x,y
			dc.l	L21_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music

Lev22Pal		dc.l	l22p1,GolPal,-1;PanPal,-1
Lev22DATA		dc.l	Lev21ChrA,-1				;char data
			dc.l	Lev22MapA,Lev21MapB			;map data
			dc.l	Lev21BlkA,-1				;block data
			dc.l	Lev22Pal 				;palette
			dc.l	Lev22Flr 				;floor
			dc.l	Lev22Con 				;contour
			dc.w	320*2,30*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	30*2					;bottom "      "
			dc.w	$40,$180				;plr x,y
			dc.w	$00,$c9					;map x,y
			dc.w	$3ff0,$c9				;scroll x,y
			dc.l	L22_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music

Lev23Pal		dc.l	l23p1,GolPal,-1;PanPal,-1
Lev23DATA		dc.l	Lev21ChrA,-1				;char data
			dc.l	Lev23MapA,Lev21MapB			;map data
			dc.l	Lev21BlkA,-1				;block data
			dc.l	Lev23Pal 				;palette
			dc.l	Lev23Flr 				;floor
			dc.l	Lev23Con 				;contour
			dc.w	320*2,30*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	30*2					;bottom "      "
			dc.w	$40,$180				;plr x,y
			dc.w	$00,$c9					;map x,y
			dc.w	$3ff0,$c9				;scroll x,y
			dc.l	L23_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music

Lev24Pal		dc.l	l24p1,GolPal,-1;PanPal,-1
Lev24DATA		dc.l	Lev21ChrA,-1				;char data
			dc.l	Lev24MapA,Lev21MapB			;map data
			dc.l	Lev21BlkA,-1				;block data
			dc.l	Lev24Pal 				;palette
			dc.l	Lev24Flr 				;floor
			dc.l	Lev24Con 				;contour
			dc.w	320*2,30*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	30*2					;bottom "      "
			dc.w	$40,$180				;plr x,y
			dc.w	$00,$c9					;map x,y
			dc.w	$3ff0,$c9				;scroll x,y
			dc.l	L24_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music


; - LEVEL 3.1 .. 3.4 -------------------------------------------------------

Lev31Pal		dc.l	l31p1,ExpPal,GolPal,TriloBotPal,-1
Lev31DATA		dc.l	Lev31ChrA,-1				;char data
			dc.l	Lev31MapA,Lev31MapB			;map data
			dc.l	Lev31BlkA,-1				;block data
			dc.l	Lev31Pal 				;palette
			dc.l	Lev31Flr 				;floor
			dc.l	Lev31Con 				;contour
			dc.w	320*2,26*2				;width,depth
			dc.w	6					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	25*2					;bottom "      "
			dc.w	$120,$120				;plr x,y
			dc.w	0,$70					;map x,y
			dc.w	$3ff0,$70				;scroll x,y
			dc.l	L31_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music

Lev32Pal		dc.l	l32p1,ExpPal,GolPal,RapBotPal,-1
Lev32DATA		dc.l	Lev32ChrA,-1				;char data
			dc.l	Lev32MapA,Lev32MapB			;map data
			dc.l	Lev32BlkA,-1				;block data
			dc.l	Lev32Pal 				;palette
			dc.l	Lev32Flr 				;floor
			dc.l	Lev32Con 				;contour
			dc.w	320*2,32*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	31*2					;bottom "      "
			dc.w	$10,$1b7				;plr x,y
			dc.w	$00,$100  				;map x,y
			dc.w	$3ff0,$100				;scroll x,y
			dc.l	L32_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music

Lev33Pal		dc.l	l33p1,ExpPal,GolPal,RapBotPal,-1
Lev33DATA		dc.l	Lev33ChrA,-1				;char data
			dc.l	Lev33MapA,Lev33MapB			;map data
			dc.l	Lev33BlkA,-1				;block data
			dc.l	Lev33Pal 				;palette
			dc.l	Lev33Flr 				;floor
			dc.l	Lev33Con 				;contour
			dc.w	128*2,31*2				;width,depth
			dc.w	4					;left scroll limit
			rlim	128*2					;right  "      "
			dc.w	0					;top    "      "
			blim	31*2					;bottom "      "
			dc.w	$65,$1a5				;plr x,y
			dc.w	$00,$e9					;map x,y
			dc.w	$3ff4,$e9				;scroll x,y
			dc.l	L33_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music

Lev34Pal		dc.l	l34p1,ExpPal,GolPal,-1;PanPal,-1
Lev34DATA		dc.l	Lev34ChrA,-1				;char data
			dc.l	Lev34MapA,Lev34MapB			;map data
			dc.l	Lev34BlkA,-1				;block data
			dc.l	Lev34Pal 				;palette
			dc.l	Lev34Flr 				;floor
			dc.l	Lev34Con 				;contour
			dc.w	60*2,21*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	60*2					;right  "      "
			dc.w	0					;top    "      "
			blim	20*2					;bottom "      "
			dc.w	$68,$e0					;plr x,y
			dc.w	$00,$29  				;map x,y
			dc.w	$3ff0,$29				;scroll x,y
			dc.l	L34_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music


; - LEVEL 4.1 .. 4.4 -------------------------------------------------------

Lev41Pal		dc.l	l41p1,ExpPal,GolPal,TriloBotPal,-1;-1;PanPal,-1
Lev41DATA		dc.l	Lev41ChrA,-1				;char data
			dc.l	Lev41MapA,Lev41MapB			;map data
			dc.l	Lev41BlkA,-1				;block data
			dc.l	Lev41Pal 				;palette
			dc.l	Lev41Flr 				;floor
			dc.l	Lev41Con 				;contour
			dc.w	320*2,26*2				;width,depth
			dc.w	6					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	25*2					;bottom "      "
			dc.w	$120,$120				;plr x,y
			dc.w	0,$70					;map x,y
			dc.w	$3ff0,$70				;scroll x,y
			dc.l	L41_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music

Lev42Pal		dc.l	l42p1,ExpPal,GolPal,-1;PanPal,-1
Lev42DATA		dc.l	Lev41ChrA,-1				;char data
			dc.l	Lev42MapA,Lev41MapB			;map data
			dc.l	Lev41BlkA,-1				;block data
			dc.l	Lev42Pal 				;palette
			dc.l	Lev42Flr 				;floor
			dc.l	Lev42Con 				;contour
			dc.w	320*2,32*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	31*2					;bottom "      "
			dc.w	$10,$1b7				;plr x,y
			dc.w	$00,$100  				;map x,y
			dc.w	$3ff0,$100				;scroll x,y
			dc.l	L42_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music

Lev43Pal		dc.l	l43p1,ExpPal,GolPal,RapBotPal,-1;PanPal,-1
Lev43DATA		dc.l	Lev41ChrA,-1				;char data
			dc.l	Lev43MapA,Lev41MapB			;map data
			dc.l	Lev41BlkA,-1				;block data
			dc.l	Lev43Pal 				;palette
			dc.l	Lev43Flr 				;floor
			dc.l	Lev43Con 				;contour
			dc.w	320*2,30*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	30*2					;bottom "      "
			dc.w	$40,$180				;plr x,y
			dc.w	$00,$c9					;map x,y
			dc.w	$3ff0,$c9				;scroll x,y
			dc.l	L43_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music

Lev44Pal		dc.l	l44p1,ExpPal,GolPal,-1;PanPal,-1
Lev44DATA		dc.l	Lev41ChrA,-1				;char data
			dc.l	Lev44MapA,Lev41MapB			;map data
			dc.l	Lev41BlkA,-1				;block data
			dc.l	Lev44Pal 				;palette
			dc.l	Lev44Flr 				;floor
			dc.l	Lev44Con 				;contour
			dc.w	320*2,30*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	30*2					;bottom "      "
			dc.w	$40,$180				;plr x,y
			dc.w	$00,$c9					;map x,y
			dc.w	$3ff0,$c9				;scroll x,y
			dc.l	L44_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music


; - LEVEL 5.1 -------------------------------------------------------------

Lev51Pal		dc.l	l51p1,GolPal,-1
Lev51DATA		dc.l	Lev51ChrA,-1				;char data
			dc.l	Lev51MapA,Lev51MapB			;map data
			dc.l	Lev51BlkA,-1				;block data
			dc.l	Lev51Pal 				;palette
			dc.l	Lev51Flr 				;floor
			dc.l	Lev51Con 				;contour
			dc.w	320*2,30*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	30*2					;bottom "      "
			dc.w	$40,$180				;plr x,y
			dc.w	$00,$c9					;map x,y
			dc.w	$3ff0,$c9				;scroll x,y
			dc.l	L51_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music


; - LEVEL 6.1 .. 6.4 -------------------------------------------------------

Lev61Pal		dc.l	l61p1,GolPal,-1;PanPal,-1
Lev61DATA		dc.l	Lev61ChrA,-1				;char data
			dc.l	Lev61MapA,Lev61MapB			;map data
			dc.l	Lev61BlkA,-1				;block data
			dc.l	Lev61Pal 				;palette
			dc.l	Lev61Flr 				;floor
			dc.l	Lev61Con 				;contour
			dc.w	320*2,30*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	30*2					;bottom "      "
			dc.w	$40,$180				;plr x,y
			dc.w	$00,$c9					;map x,y
			dc.w	$3ff0,$c9				;scroll x,y
			dc.l	L61_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music

Lev62Pal		dc.l	l62p1,GolPal,-1;PanPal,-1
Lev62DATA		dc.l	Lev61ChrA,-1				;char data
			dc.l	Lev62MapA,Lev61MapB			;map data
			dc.l	Lev61BlkA,-1				;block data
			dc.l	Lev62Pal 				;palette
			dc.l	Lev62Flr 				;floor
			dc.l	Lev62Con 				;contour
			dc.w	320*2,30*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	30*2					;bottom "      "
			dc.w	$40,$180				;plr x,y
			dc.w	$00,$c9					;map x,y
			dc.w	$3ff0,$c9				;scroll x,y
			dc.l	L62_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music

Lev63Pal		dc.l	l63p1,GolPal,-1;PanPal,-1
Lev63DATA		dc.l	Lev61ChrA,-1				;char data
			dc.l	Lev63MapA,Lev61MapB			;map data
			dc.l	Lev61BlkA,-1				;block data
			dc.l	Lev63Pal 				;palette
			dc.l	Lev63Flr 				;floor
			dc.l	Lev63Con 				;contour
			dc.w	320*2,30*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	30*2					;bottom "      "
			dc.w	$40,$180				;plr x,y
			dc.w	$00,$c9					;map x,y
			dc.w	$3ff0,$c9				;scroll x,y
			dc.l	L63_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music

Lev64Pal		dc.l	l64p1,GolPal,-1;PanPal,-1
Lev64DATA		dc.l	Lev61ChrA,-1				;char data
			dc.l	Lev64MapA,Lev61MapB			;map data
			dc.l	Lev61BlkA,-1				;block data
			dc.l	Lev64Pal 				;palette
			dc.l	Lev64Flr 				;floor
			dc.l	Lev64Con 				;contour
			dc.w	320*2,30*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	30*2					;bottom "      "
			dc.w	$40,$180				;plr x,y
			dc.w	$00,$c9					;map x,y
			dc.w	$3ff0,$c9				;scroll x,y
			dc.l	L64_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music


; - LEVEL 7.1 .. 7.4 -------------------------------------------------------

Lev71Pal		dc.l	l71p1,GolPal,-1;PanPal,-1
Lev71DATA		dc.l	Lev71ChrA,-1				;char data
			dc.l	Lev71MapA,Lev71MapB			;map data
			dc.l	Lev71BlkA,-1				;block data
			dc.l	Lev71Pal 				;palette
			dc.l	Lev71Flr 				;floor
			dc.l	Lev71Con 				;contour
			dc.w	320*2,30*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	30*2					;bottom "      "
			dc.w	$40,$180				;plr x,y
			dc.w	$00,$c9					;map x,y
			dc.w	$3ff0,$c9				;scroll x,y
			dc.l	L71_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music

Lev72Pal		dc.l	l72p1,GolPal,-1;PanPal,-1
Lev72DATA		dc.l	Lev71ChrA,-1				;char data
			dc.l	Lev72MapA,Lev71MapB			;map data
			dc.l	Lev71BlkA,-1				;block data
			dc.l	Lev72Pal 				;palette
			dc.l	Lev72Flr 				;floor
			dc.l	Lev72Con 				;contour
			dc.w	320*2,30*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	30*2					;bottom "      "
			dc.w	$40,$180				;plr x,y
			dc.w	$00,$c9					;map x,y
			dc.w	$3ff0,$c9				;scroll x,y
			dc.l	L72_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music

Lev73Pal		dc.l	l73p1,GolPal,-1;PanPal,-1
Lev73DATA		dc.l	Lev71ChrA,-1				;char data
			dc.l	Lev73MapA,Lev71MapB			;map data
			dc.l	Lev71BlkA,-1				;block data
			dc.l	Lev73Pal 				;palette
			dc.l	Lev73Flr 				;floor
			dc.l	Lev73Con 				;contour
			dc.w	320*2,30*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	30*2					;bottom "      "
			dc.w	$40,$180				;plr x,y
			dc.w	$00,$c9					;map x,y
			dc.w	$3ff0,$c9				;scroll x,y
			dc.l	L73_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music

Lev74Pal		dc.l	l74p1,GolPal,-1;PanPal,-1
Lev74DATA		dc.l	Lev71ChrA,-1				;char data
			dc.l	Lev74MapA,Lev71MapB			;map data
			dc.l	Lev71BlkA,-1				;block data
			dc.l	Lev74Pal 				;palette
			dc.l	Lev74Flr 				;floor
			dc.l	Lev74Con 				;contour
			dc.w	320*2,30*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	320*2					;right  "      "
			dc.w	0					;top    "      "
			blim	30*2					;bottom "      "
			dc.w	$40,$180				;plr x,y
			dc.w	$00,$c9					;map x,y
			dc.w	$3ff0,$c9				;scroll x,y
			dc.l	L74_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music


; - PLAYROOM --------------------------------------------------------------

Lev99Pal		dc.l	l99p1,GolPal,RapBotPal,ExpPal,-1
Lev99DATA		dc.l	Lev99ChrA,-1				;char data
			dc.l	Lev99MapA,-1				;map data
			dc.l	Lev99BlkA,-1				;block data
			dc.l	Lev99Pal 				;palette
			dc.l	Lev99Flr 				;floor
			dc.l	Lev99Con 				;contour
			dc.w	144*2,40*2				;width,depth
			dc.w	0					;left scroll limit
			rlim	144*2					;right  "      "
			dc.w	0					;top    "      "
			blim	40*2					;bottom "      "
			dc.w	$88,$270				;plr x,y
			dc.w	$08,$1a5				;map x,y
			dc.w	$3fe8,$1a5				;scroll x,y
			dc.l	L99_OBDATA_VEC				;ob trigger data
			dc.l	CAnimDL1				;char anim 
			dc.w	0					;music


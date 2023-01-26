; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ OBJECT DATA TABLES. Unique for each LEVEL.				   บ
; ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน
; บ These tables are directly and indirectly accessed using		   บ
; บ the ENTRY from the 4TH LAYER of the TUME map (OBJECT).		   บ
; บ This value (-1) is used as an index into these tables.		   บ
; บ 									   บ
; บ The Tables in this file are ;					   บ
; บ 									   บ
; บ L?_OBDATA_VEC = Vector to DATA that needs to be passed to the Object.  บ
; บ l?0? = Data table for the OBJECT.					   บ
; บ 									   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ


; - OBJECT DATA TABLES. Unique for each level. -----------------------------
; - DATA TABLE STRUCTURE ...
;
; l1o1			dc.w	????????_OB		;Object TYPE 		(00<: OB_Type.w)
;			dc.w	0			;Energy			(02<: OB_Nrg.w)
;			dc.w	0			;MAX VRAM Size		(04<: .w)
;			dc.b	%00000000		;Flags			(06<: OB_Flag1.b)	
;			dc.b	%00000000		;Flags			(07 : OB_Flag2.b)	
;			dc.b	%00000000		;Flags			(08 : OB_Flag3.b)	
;			dc.b	%00000000		;Flags			(09 : OB_Flag4.b)	
;			dc.b	%00000000		;Flags			(0a<: OB_Flag5.b)	
;			dc.b	%00000000		;Flags			(0b : OB_Flag6.b)	
;			dc.b	0			;Variables		(0c<: OB_Var1.b)
;			dc.b	0			;Variables		(0d : OB_Var1a.b)
;			dc.b	0			;Variables		(0e : OB_Var2.b)
;			dc.b	0			;Variables		(0f : OB_Var2a.b)
;			dc.b	0			;Variables		(10<: OB_Var3.b)
;			dc.b	0			;Variables		(11 : OB_Var3a.b)
;			dc.b	0			;Variables		(12 : OB_Var4.b)
;			dc.b	0			;Variables		(13 : OB_Var4a.b)
;			dc.b	0			;Variables		(14<: OB_Var5.b)
;			dc.b	0			;Variables		(15 : OB_Var5a.b)
;			dc.b	0			;Variables		(16 : OB_Var6.b)
;			dc.b	0			;Variables		(17 : OB_Var6a.b)
;			dc.b	0			;Variables		(18<: OB_Var7.b)
;			dc.b	0			;Variables		(19 : OB_Var7a.b)
;			dc.b	0			;Starting STATE 	(1e<: OB_State.b)
;			dc.b	0			;pad			(1f : pad.b)
;			dc.l	0			;Palette		(20 : palette.l)	
;			even
;
;
;
; - OBJECT FLAGS -----------------------------------------------------------
;
;		Bit	    7    6    5    4    3  2 1 0
;OB_FLAG1	-	%[hlr] [h4] [h3] [h2] [h1] y x o
;		o = on/off (1/0)
;		x = x flipped (1=flip:0=no)
;		y = y flipped (1=flip:0=no)	
;		h1 = object hit
;		h2 = object hit
;		h3 = object hit
;		h4 = object hit
;		hlr = side object was hit l/r (0/1)
;
;		Bit	   7    6  5 4   3  2   1  0
;OB_FLAG2	-	%[do] [di] k d [bk] s [so] p
;		p = overide object priority (set to hi)
;		so = objects are not switched off when off screen (0=switch off:1=dont switch off)
;		s = object setup flag (0=no:1=yes)
;		bk = object is being killed
;		d = object is dead
;		k = kill object
;		di = object drops an item
;		do = object is not displayed
;
;		Bit	    7     6    5    4  3   2    1    0
;OB_FLAG3	-	%[dsb] [dss] [ie] [ip] i [ic] [cc] [rf]  	
;		rf = object flown/reseident (0=resident:1=flown)
;		cc = object can carry player (0=no:1=yes)
;		ic = object is carrying player (0=no:1=yes)	
;		i = object is invulnerable to all other objects (0=no:1=yes)
;		ip = object is invulnerable to projectiles only (0=no:1=yes)
;		ie = object is invulnerable to enemies only (0=no:1=yes)
;		dss = disable sprt 2 sprt detection (0=no:1=yes)
;		dsb = disable sprt 2 bckgrnd detection (0=no:1=yes)
;
;		Bit	   7    6    5    4  3210
;OB_FLAG4	-	%[br] [bl] [bd] [bu] tttt
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
;		Bit	 7654 3   2    1     0
;OB_FLAG5	-	%???? s [ym] [xm] [dma]
;		dma = flag new dma to VRAM
;		xm = used to determine objects x movement dir
;		ym = used to determine objects y movement dir
;		s = object affected by scroller (0/1 yes/no)
;		? = unassigned
;


; - LEVEL #1 ---------------------------------------------------------------

L11_OBDATA_VEC	dc.l	OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01
		dc.l	OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTweapexp01,OTweapexp02,OTweapexp01,OTweapexp02,OTweapexp01,OTweapexp02,OTweapexp01,OTweapexp02
		dc.l	OTl1breakwall01,OTl1breakwall02,OTl1breakwall03,OTl1breakwall04,OTl1breakwall05,OTl1breakwall06,OTl1breakwall07,OTl1breakwall08,OTl1breakwall09,OTl1breakwall0a,OTl1breakwall0b,OTl1breakwall0c,OTl1breakwall0d,OTl1breakwall0e,OTl1breakwall0f,OTl1breakwall10
		dc.l	OTcatapult01,OTcatapult02,OTcatapult03,OTcatapult04,OTcatapult05,OTcatapult06,OTcatapult07,OTcatapult08,OTbalista01,OTbalista02,OTbalista03,OTbalista04,OTbalista05,OTbalista06,OTbalista07,OTbalista08
		dc.l	OTl1breakfloor01,OTl1breakfloor02,OTl1breakfloor03,OTl1breakfloor04,OTl1breakfloor05,OTl1breakfloor06,OTl1breakfloor07,OTl1breakfloor08,OTpastewall01,OTpastewall02,OTpastewall03,OTpastewall04,OTpastewall05,OTpastewall06,OTpastewall07,OTpastewall08
		dc.l	OTgatecrush01,-1,-1,-1,-1,-1,-1,-1,OTweight01,OTweight02,OTweight03,OTweight04,OTweight05,OTweight06,OTweight07,OTweight08
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTwallfire01,OTwallfire02,OTwallfire01,OTwallfire02,OTspitpot01,OTspitpot02,OTspitpot01,OTspitpot01,OTcastlebit01,OTcastlebit02,OTcastlebit03,OTcastlebit04,-1,-1,-1,-1
		dc.l	OToilgen01,OToilgen02,OToilgen01,OToilgen01,OToilgen01,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon03,OTicon03,OTicon03,OTicon03,OTicon01,OTicon01,OTicon01,OTicon01
		dc.l	OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon05,OTicon05,OTicon05,OTicon05,OTicon06,OTicon06,OTicon06,OTicon06

L12_OBDATA_VEC	dc.l	OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01
		dc.l	OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTweapexp01,OTweapexp02,OTweapexp01,OTweapexp02,OTweapexp01,OTweapexp02,OTweapexp01,OTweapexp02
		dc.l	OTl1breakwall01,OTl1breakwall02,OTl1breakwall03,OTl1breakwall04,OTl1breakwall05,OTl1breakwall06,OTl1breakwall07,OTl1breakwall08,OTl1breakwall09,OTl1breakwall0a,OTl1breakwall0b,OTl1breakwall0c,OTl1breakwall0d,OTl1breakwall0e,OTl1breakwall0f,OTl1breakwall10
		dc.l	OTcatapult01,OTcatapult02,OTcatapult03,OTcatapult04,OTcatapult05,OTcatapult06,OTcatapult07,OTcatapult08,OTbalista01,OTbalista02,OTbalista03,OTbalista04,OTbalista05,OTbalista06,OTbalista07,OTbalista08
		dc.l	OTl1breakfloor01,OTl1breakfloor02,OTl1breakfloor03,OTl1breakfloor04,OTl1breakfloor05,OTl1breakfloor06,OTl1breakfloor07,OTl1breakfloor08,OTpastewall01,OTpastewall02,OTpastewall03,OTpastewall04,OTpastewall05,OTpastewall06,OTpastewall07,OTpastewall08
		dc.l	OTgatecrush01,-1,-1,-1,-1,-1,-1,-1,OTweight01,OTweight02,OTweight03,OTweight04,OTweight05,OTweight06,OTweight07,OTweight08
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTwallfire01,OTwallfire02,OTwallfire01,OTwallfire02,OTspitpot01,OTspitpot02,OTspitpot01,OTspitpot01,OTcastlebit01,OTcastlebit02,OTcastlebit03,OTcastlebit04,-1,-1,-1,-1
		dc.l	OToilgen01,OToilgen02,OToilgen01,OToilgen01,OToilgen01,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon03,OTicon03,OTicon03,OTicon03,OTicon01,OTicon01,OTicon01,OTicon01
		dc.l	OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon05,OTicon05,OTicon05,OTicon05,OTicon06,OTicon06,OTicon06,OTicon06

L13_OBDATA_VEC	dc.l	OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01
		dc.l	OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTweapexp01,OTweapexp02,OTweapexp01,OTweapexp02,OTweapexp01,OTweapexp02,OTweapexp01,OTweapexp02
		dc.l	OTl1breakwall01,OTl1breakwall02,OTl1breakwall03,OTl1breakwall04,OTl1breakwall05,OTl1breakwall06,OTl1breakwall07,OTl1breakwall08,OTl1breakwall09,OTl1breakwall0a,OTl1breakwall0b,OTl1breakwall0c,OTl1breakwall0d,OTl1breakwall0e,OTl1breakwall0f,OTl1breakwall10
		dc.l	OTcatapult01,OTcatapult02,OTcatapult03,OTcatapult04,OTcatapult05,OTcatapult06,OTcatapult07,OTcatapult08,OTbalista01,OTbalista02,OTbalista03,OTbalista04,OTbalista05,OTbalista06,OTbalista07,OTbalista08
		dc.l	OTl1breakfloor01,OTl1breakfloor02,OTl1breakfloor03,OTl1breakfloor04,OTl1breakfloor05,OTl1breakfloor06,OTl1breakfloor07,OTl1breakfloor08,OTpastewall01,OTpastewall02,OTpastewall03,OTpastewall04,OTpastewall05,OTpastewall06,OTpastewall07,OTpastewall08
		dc.l	OTgatecrush01,-1,-1,-1,-1,-1,-1,-1,OTweight01,OTweight02,OTweight03,OTweight04,OTweight05,OTweight06,OTweight07,OTweight08
		dc.l	OTweightcrush01,OTweightcrush01,OTweightcrush01,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTwallfire01,OTwallfire02,OTwallfire01,OTwallfire02,OTspitpot01,OTspitpot01,OTspitpot01,OTspitpot01,OTcastlebit01,OTcastlebit02,OTcastlebit03,OTcastlebit04,-1,-1,-1,-1
		dc.l	OToilgen01,OToilgen02,OToilgen01,OToilgen01,OToilgen01,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon03,OTicon03,OTicon03,OTicon03,OTicon01,OTicon01,OTicon01,OTicon01
		dc.l	OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon05,OTicon05,OTicon05,OTicon05,OTicon06,OTicon06,OTicon06,OTicon06

L14_OBDATA_VEC	dc.l	OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01
		dc.l	OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTweapexp01,OTweapexp02,OTweapexp01,OTweapexp02,OTweapexp01,OTweapexp02,OTweapexp01,OTweapexp02
		dc.l	OTl1breakwall01,OTl1breakwall02,OTl1breakwall03,OTl1breakwall04,OTl1breakwall05,OTl1breakwall06,OTl1breakwall07,OTl1breakwall08,OTl1breakwall09,OTl1breakwall0a,OTl1breakwall0b,OTl1breakwall0c,OTl1breakwall0d,OTl1breakwall0e,OTl1breakwall0f,OTl1breakwall10
		dc.l	OTcatapult01,OTcatapult02,OTcatapult03,OTcatapult04,OTcatapult05,OTcatapult06,OTcatapult07,OTcatapult08,OTbalista01,OTbalista02,OTbalista03,OTbalista04,OTbalista05,OTbalista06,OTbalista07,OTbalista08
		dc.l	OTl1breakfloor01,OTl1breakfloor02,OTl1breakfloor03,OTl1breakfloor04,OTl1breakfloor05,OTl1breakfloor06,OTl1breakfloor07,OTl1breakfloor08,OTpastewall01,OTpastewall02,OTpastewall03,OTpastewall04,OTpastewall05,OTpastewall06,OTpastewall07,OTpastewall08
		dc.l	OTgatecrush01,-1,-1,-1,-1,-1,-1,-1,OTweight01,OTweight02,OTweight03,OTweight04,OTweight05,OTweight06,OTweight07,OTweight08
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTwallfire01,OTwallfire02,OTwallfire01,OTwallfire02,OTspitpot01,OTspitpot01,OTspitpot01,OTspitpot01,OTcastlebit01,OTcastlebit02,OTcastlebit03,OTcastlebit04,-1,-1,-1,-1
		dc.l	OToilgen01,OToilgen02,OToilgen01,OToilgen01,OToilgen01,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTsorcerer01,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon03,OTicon03,OTicon03,OTicon03,OTicon01,OTicon01,OTicon01,OTicon01
		dc.l	OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon05,OTicon05,OTicon05,OTicon05,OTicon06,OTicon06,OTicon06,OTicon06


; - LEVEL #2 ---------------------------------------------------------------

L21_OBDATA_VEC	dc.l	OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01
		dc.l	OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01
		dc.l	OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01
		dc.l	OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01
		dc.l	OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01
		dc.l	OTclawstump01,OTclawstump02,OTclawstump03,OTclawstump04,OTclawstump05,OTclawstump06,OTclawstump07,OTclawstump08,OTclawstump01,OTclawstump02,OTclawstump03,OTclawstump04,OTclawstump05,OTclawstump06,OTclawstump07,OTclawstump08
		dc.l	OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01
		dc.l	OTventr01,OTventr02,OTventr03,OTventr04,OTventr05,OTventr06,OTventr07,OTventr08,OTventr09,OTventr0a,OTventr0b,OTventr0c,OTventr0d,OTventr0e,OTventr0f,OTventr10
		dc.l	OTchainr01,OTchainr02,OTchainr03,OTchainr04,OTchainr05,OTchainr06,OTchainr07,OTchainr08,OTchainr09,OTchainr0a,OTchainr0b,OTchainr0c,OTchainr0d,OTchainr0e,OTchainr0f,OTchainr10
		dc.l	OTventl01,OTventl02,OTventl03,OTventl04,OTventl05,OTventl06,OTventl07,OTventl08,OTventl09,OTventl0a,OTventl0b,OTventl0c,OTventl0d,OTventl0e,OTventl0f,OTventl10
		dc.l	OTchainl01,OTchainl02,OTchainl03,OTchainl04,OTchainl05,OTchainl06,OTchainl07,OTchainl08,OTchainl09,OTchainl0a,OTchainl0b,OTchainl0c,OTchainl0d,OTchainl0e,OTchainl0f,OTchainl10
		dc.l	-1,OTflick01,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon03,OTicon03,OTicon03,OTicon03,OTicon01,OTicon01,OTicon01,OTicon01
		dc.l	OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon05,OTicon05,OTicon05,OTicon05,OTicon06,OTicon06,OTicon06,OTicon06

L22_OBDATA_VEC	dc.l	OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01
		dc.l	OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01
		dc.l	OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01
		dc.l	OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01
		dc.l	OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01
		dc.l	OTclawstump01,OTclawstump02,OTclawstump03,OTclawstump04,OTclawstump05,OTclawstump06,OTclawstump07,OTclawstump08,OTclawstump01,OTclawstump02,OTclawstump03,OTclawstump04,OTclawstump05,OTclawstump06,OTclawstump07,OTclawstump08
		dc.l	OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01
		dc.l	OTventr01,OTventr02,OTventr03,OTventr04,OTventr05,OTventr06,OTventr07,OTventr08,OTventr09,OTventr0a,OTventr0b,OTventr0c,OTventr0d,OTventr0e,OTventr0f,OTventr10
		dc.l	OTchainr01,OTchainr02,OTchainr03,OTchainr04,OTchainr05,OTchainr06,OTchainr07,OTchainr08,OTchainr09,OTchainr0a,OTchainr0b,OTchainr0c,OTchainr0d,OTchainr0e,OTchainr0f,OTchainr10
		dc.l	OTventl01,OTventl02,OTventl03,OTventl04,OTventl05,OTventl06,OTventl07,OTventl08,OTventl09,OTventl0a,OTventl0b,OTventl0c,OTventl0d,OTventl0e,OTventl0f,OTventl10
		dc.l	OTchainl01,OTchainl02,OTchainl03,OTchainl04,OTchainl05,OTchainl06,OTchainl07,OTchainl08,OTchainl09,OTchainl0a,OTchainl0b,OTchainl0c,OTchainl0d,OTchainl0e,OTchainl0f,OTchainl10
		dc.l	-1,OTflick01,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon03,OTicon03,OTicon03,OTicon03,OTicon01,OTicon01,OTicon01,OTicon01
		dc.l	OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon05,OTicon05,OTicon05,OTicon05,OTicon06,OTicon06,OTicon06,OTicon06

L23_OBDATA_VEC	dc.l	OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01,OTvalkyrie01
		dc.l	OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01,OTmornstar01
		dc.l	OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01,OTarcher01
		dc.l	OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01,OTclaw01
		dc.l	OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01,OTstump01
		dc.l	OTclawstump01,OTclawstump02,OTclawstump03,OTclawstump04,OTclawstump05,OTclawstump06,OTclawstump07,OTclawstump08,OTclawstump01,OTclawstump02,OTclawstump03,OTclawstump04,OTclawstump05,OTclawstump06,OTclawstump07,OTclawstump08
		dc.l	OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01,OTfiregen01
		dc.l	OTventr01,OTventr02,OTventr03,OTventr04,OTventr05,OTventr06,OTventr07,OTventr08,OTventr09,OTventr0a,OTventr0b,OTventr0c,OTventr0d,OTventr0e,OTventr0f,OTventr10
		dc.l	OTchainr01,OTchainr02,OTchainr03,OTchainr04,OTchainr05,OTchainr06,OTchainr07,OTchainr08,OTchainr09,OTchainr0a,OTchainr0b,OTchainr0c,OTchainr0d,OTchainr0e,OTchainr0f,OTchainr10
		dc.l	OTventl01,OTventl02,OTventl03,OTventl04,OTventl05,OTventl06,OTventl07,OTventl08,OTventl09,OTventl0a,OTventl0b,OTventl0c,OTventl0d,OTventl0e,OTventl0f,OTventl10
		dc.l	OTchainl01,OTchainl02,OTchainl03,OTchainl04,OTchainl05,OTchainl06,OTchainl07,OTchainl08,OTchainl09,OTchainl0a,OTchainl0b,OTchainl0c,OTchainl0d,OTchainl0e,OTchainl0f,OTchainl10
		dc.l	-1,OTflick01,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon03,OTicon03,OTicon03,OTicon03,OTicon01,OTicon01,OTicon01,OTicon01
		dc.l	OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon05,OTicon05,OTicon05,OTicon05,OTicon06,OTicon06,OTicon06,OTicon06

L24_OBDATA_VEC	dc.l	OTmutantviking01,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon03,OTicon03,OTicon03,OTicon03,OTicon01,OTicon01,OTicon01,OTicon01
		dc.l	OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon05,OTicon05,OTicon05,OTicon05,OTicon06,OTicon06,OTicon06,OTicon06


; - LEVEL #3 ---------------------------------------------------------------

L31_OBDATA_VEC	dc.l	OTspider01,OTspider02,OTspider03,OTspider04,OTspider01,OTspider02,OTspider03,OTspider04,OTspider01,OTspider02,OTspider03,OTspider04,OTspider01,OTspider02,OTspider03
		dc.l	OTwasp01,OTwasp01,OTwasp01,OTwasp01,OTwasp01,OTwasp01,OTsniper01,OTsniper01,OTraptor01,OTraptor01,OTraptor01,OTraptor01,OTraptor01,OTraptor01,OTraptor01,OTraptor01
		dc.l	OTroofraptor01,OTroofraptor02,OTroofraptor03,OTroofraptor04,OTroofraptor05,OTroofraptor06,OTroofraptor07,OTroofraptor08,OTeyeup01,OTeyedn01,OTeyeraptor01,OTeyeraptor02,OTeyeraptor03,OTeyeraptor04,-1,-1
		dc.l	OTsign01,OTsign02,OTsign03,OTsign04,OTsign05,OTsign06,OTsign07,OTsign08,OTsign09,OTsign0a,OTsign0b,OTsign0c,OTsign0d,OTsign0e,OTsign0f,OTsign10
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTbwall01,OTbwall02,OTbwall03,OTbwall04,OTbwall05,OTbwall06,OTbwall07,OTbwall08,OTbwall09,OTbwall0a,OTbwall0b,OTbwall0c,OTbwall0d,OTbwall0e,OTbwall0f,OTbwall10
		dc.l	OTsteam01,OTsteam02,OTsteam03,OTsteam04,OTsteam05,OTsteam06,OTsteam07,OTsteam08,OTsteam09,OTsteam0a,OTsteam0b,OTsteam0c,OTsteam0d,OTsteam0e,OTsteam0f,OTsteam10
		dc.l	OTskylight01,OTskylight02,OTskylight03,OTskylight04,OTskylight05,OTskylight06,OTskylight07,OTskylight08,OTskylight09,OTskylight0a,OTskylight0b,OTskylight0c,OTskylight0d,OTskylight0e,OTskylight0f,OTskylight10
		dc.l	OTbreaklight01,OTbreaklight02,OTbreaklight03,OTbreaklight04,OTbreaklight05,OTbreaklight06,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTsniper01,OTsniper01,OTsniper01,OTsniper01,OTsniper01,OTsniper01,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTthrowcrate01,OTthrowcrate02,OTthrowcrate03,OTthrowcrate04,OTthrowcrate05,OTthrowcrate06,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTbrkedgel01,OTbrkedgel02,OTbrkedgel03,OTbrkedgel04,OTbrkedgel05,OTbrkedgel06,OTbrkedgel07,OTbrkedgel08,OTbrkedgel09,OTbrkedgel0a,OTbrkedgel0b,OTbrkedgel0c,OTbrkedgel0d,OTbrkedgel0e,OTbrkedgel0f,OTbrkedgel10
		dc.l	OTbrkedger01,OTbrkedger02,OTbrkedger03,OTbrkedger04,OTbrkedger05,OTbrkedger06,OTbrkedger07,OTbrkedger08,OTbrkedger09,OTbrkedger0a,OTbrkedger0b,OTbrkedger0c,OTbrkedger0d,OTbrkedger0e,OTbrkedger0f,OTbrkedger10
		dc.l	OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon03,OTicon03,OTicon03,OTicon03,OTicon01,OTicon01,OTicon01,OTicon01
		dc.l	OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon05,OTicon05,OTicon05,OTicon05,OTicon06,OTicon06,OTicon06,OTicon06

L32_OBDATA_VEC	dc.l	OTspider01,OTspider02,OTspider03,OTspider04,OTspider01,OTspider02,OTspider03,OTspider04,OTspider01,OTspider02,OTspider03,OTspider04,OTspider01,OTspider02,OTspider03
		dc.l	OTwasp01,OTwasp01,OTwasp01,OTwasp01,OTwasp01,OTwasp01,OTsniper01,OTsniper01,OTraptor01,OTraptor01,OTraptor01,OTraptor01,OTraptor01,OTraptor01,OTraptor01,OTraptor01
		dc.l	OTroofraptor01,OTroofraptor02,OTroofraptor03,OTroofraptor04,OTroofraptor05,OTroofraptor06,OTroofraptor07,OTroofraptor08,OTeyeup01,OTeyedn01,OTeyeraptor01,OTeyeraptor02,OTeyeraptor03,OTeyeraptor04,-1,-1
		dc.l	OTsign01,OTsign02,OTsign03,OTsign04,OTsign05,OTsign06,OTsign07,OTsign08,OTsign09,OTsign0a,OTsign0b,OTsign0c,OTsign0d,OTsign0e,OTsign0f,OTsign10
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTbwall01,OTbwall02,OTbwall03,OTbwall04,OTbwall05,OTbwall06,OTbwall07,OTbwall08,OTbwall09,OTbwall0a,OTbwall0b,OTbwall0c,OTbwall0d,OTbwall0e,OTbwall0f,OTbwall10
		dc.l	OTsteam01,OTsteam02,OTsteam03,OTsteam04,OTsteam05,OTsteam06,OTsteam07,OTsteam08,OTsteam09,OTsteam0a,OTsteam0b,OTsteam0c,OTsteam0d,OTsteam0e,OTsteam0f,OTsteam10
		dc.l	OTskylight01,OTskylight02,OTskylight03,OTskylight04,OTskylight05,OTskylight06,OTskylight07,OTskylight08,OTskylight09,OTskylight0a,OTskylight0b,OTskylight0c,OTskylight0d,OTskylight0e,OTskylight0f,OTskylight10
		dc.l	OTbreaklight01,OTbreaklight02,OTbreaklight03,OTbreaklight04,OTbreaklight05,OTbreaklight06,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTsniper01,OTsniper01,OTsniper01,OTsniper01,OTsniper01,OTsniper01,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTthrowcrate01,OTthrowcrate02,OTthrowcrate03,OTthrowcrate04,OTthrowcrate05,OTthrowcrate06,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTbrkedgel01,OTbrkedgel02,OTbrkedgel03,OTbrkedgel04,OTbrkedgel05,OTbrkedgel06,OTbrkedgel07,OTbrkedgel08,OTbrkedgel09,OTbrkedgel0a,OTbrkedgel0b,OTbrkedgel0c,OTbrkedgel0d,OTbrkedgel0e,OTbrkedgel0f,OTbrkedgel10
		dc.l	OTbrkedger01,OTbrkedger02,OTbrkedger03,OTbrkedger04,OTbrkedger05,OTbrkedger06,OTbrkedger07,OTbrkedger08,OTbrkedger09,OTbrkedger0a,OTbrkedger0b,OTbrkedger0c,OTbrkedger0d,OTbrkedger0e,OTbrkedger0f,OTbrkedger10
		dc.l	OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon03,OTicon03,OTicon03,OTicon03,OTicon01,OTicon01,OTicon01,OTicon01
		dc.l	OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon05,OTicon05,OTicon05,OTicon05,OTicon06,OTicon06,OTicon06,OTicon06

L33_OBDATA_VEC	dc.l	OTspider01,OTspider02,OTspider03,OTspider04,OTspider01,OTspider02,OTspider03,OTspider04,OTspider01,OTspider02,OTspider03,OTspider04,OTspider01,OTspider02,OTspider03
		dc.l	OTwasp01,OTwasp01,OTwasp01,OTwasp01,OTwasp01,OTwasp01,OTsniper01,OTsniper01,OTraptor01,OTraptor01,OTraptor01,OTraptor01,OTraptor01,OTraptor01,OTraptor01,OTraptor01
		dc.l	OTroofraptor01,OTroofraptor02,OTroofraptor03,OTroofraptor04,OTroofraptor05,OTroofraptor06,OTroofraptor07,OTroofraptor08,OTeyeup01,OTeyedn01,OTeyeraptor01,OTeyeraptor02,OTeyeraptor03,OTeyeraptor04,-1,-1
		dc.l	OTsign01,OTsign02,OTsign03,OTsign04,OTsign05,OTsign06,OTsign07,OTsign08,OTsign09,OTsign0a,OTsign0b,OTsign0c,OTsign0d,OTsign0e,OTsign0f,OTsign10
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTbwall01,OTbwall02,OTbwall03,OTbwall04,OTbwall05,OTbwall06,OTbwall07,OTbwall08,OTbwall09,OTbwall0a,OTbwall0b,OTbwall0c,OTbwall0d,OTbwall0e,OTbwall0f,OTbwall10
		dc.l	OTsteam01,OTsteam02,OTsteam03,OTsteam04,OTsteam05,OTsteam06,OTsteam07,OTsteam08,OTsteam09,OTsteam0a,OTsteam0b,OTsteam0c,OTsteam0d,OTsteam0e,OTsteam0f,OTsteam10
		dc.l	OTskylight01,OTskylight02,OTskylight03,OTskylight04,OTskylight05,OTskylight06,OTskylight07,OTskylight08,OTskylight09,OTskylight0a,OTskylight0b,OTskylight0c,OTskylight0d,OTskylight0e,OTskylight0f,OTskylight10
		dc.l	OTbreaklight01,OTbreaklight02,OTbreaklight03,OTbreaklight04,OTbreaklight05,OTbreaklight06,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTsniper01,OTsniper01,OTsniper01,OTsniper01,OTsniper01,OTsniper01,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTthrowcrate01,OTthrowcrate02,OTthrowcrate03,OTthrowcrate04,OTthrowcrate05,OTthrowcrate06,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTbrkedgel01,OTbrkedgel02,OTbrkedgel03,OTbrkedgel04,OTbrkedgel05,OTbrkedgel06,OTbrkedgel07,OTbrkedgel08,OTbrkedgel09,OTbrkedgel0a,OTbrkedgel0b,OTbrkedgel0c,OTbrkedgel0d,OTbrkedgel0e,OTbrkedgel0f,OTbrkedgel10
		dc.l	OTbrkedger01,OTbrkedger02,OTbrkedger03,OTbrkedger04,OTbrkedger05,OTbrkedger06,OTbrkedger07,OTbrkedger08,OTbrkedger09,OTbrkedger0a,OTbrkedger0b,OTbrkedger0c,OTbrkedger0d,OTbrkedger0e,OTbrkedger0f,OTbrkedger10
		dc.l	OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon03,OTicon03,OTicon03,OTicon03,OTicon01,OTicon01,OTicon01,OTicon01
		dc.l	OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon05,OTicon05,OTicon05,OTicon05,OTicon06,OTicon06,OTicon06,OTicon06

L34_OBDATA_VEC	dc.l	OTmutspider01,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon03,OTicon03,OTicon03,OTicon03,OTicon01,OTicon01,OTicon01,OTicon01
		dc.l	OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon05,OTicon05,OTicon05,OTicon05,OTicon06,OTicon06,OTicon06,OTicon06


; - LEVEL #5 ---------------------------------------------------------------
			       								
L51_OBDATA_VEC	dc.l	OTspider01,OTspider02,OTspider03,OTspider04,OTwaspgen01,-1,-1,OTraptorS01,OTraptorS01,OTraptorS01,OTraptorS01,OTraptorS01,OTraptorS01,OTraptorS01,OTraptorS01
		dc.l	OTsniper01,OTsniper01,OTsniper01,OTsniper01,OTsniper01,OTsniper01,OTsniper01,OTsniper01,OTraptor01,OTraptor01,OTraptor01,OTraptor01,OTraptor01,OTraptor01,OTraptor01,OTraptor01
		dc.l	OTplasma01,OTplasma01,OTplasma01,OTplasma01,OTplasma01,OTplasma01,OTplasma01,OTplasma01,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTelecgen01,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTl5wall01,OTl5wall02,OTl5wall03,OTl5wall04,OTl5wall05,OTl5wall06,OTl5wall07,OTl5wall08,OTl5wall09,OTl5wall10,OTl5wall11,OTl5wall12,OTl5wall13,OTl5wall14,OTl5wall15,OTl5wall16
		dc.l	OTl5skylight01,OTl5skylight02,OTl5skylight03,OTl5skylight04,OTl5skylight05,OTl5skylight06,OTl5skylight07,OTl5skylight08,OTl5skylight09,OTl5skylight10,OTl5skylight11,OTl5skylight12,OTl5skylight13,OTl5skylight14,OTl5skylight15,OTl5skylight16
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon03,OTicon03,OTicon03,OTicon03,OTicon01,OTicon01,OTicon01,OTicon01
		dc.l	OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon05,OTicon05,OTicon05,OTicon05,OTicon06,OTicon06,OTicon06,OTicon06


; - LEVEL #7 ---------------------------------------------------------------

L71_OBDATA_VEC	dc.l	-1,-1,OTwasp01,OTwasp01,OTwasp01,OTwasp01,OTwasp01,OTwasp01,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTraptor01,OTraptor01,OTraptor01,OTraptor01,OTraptor01,OTraptor01,OTraptor01,OTraptor01,OTsniper01,OTsniper01,OTsniper01,OTsniper01,OTsniper01,OTsniper01,OTsniper01,OTsniper01
		dc.l	OTplasma01,OTplasma01,OTplasma01,OTplasma01,OTplasma01,OTplasma01,OTplasma01,OTplasma01,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTspider01,OTspider02,OTspider03,OTspider04,OTspider01,OTspider02,OTspider03,OTspider04,OTspider01,OTspider02,OTspider03,OTspider04,OTspider01,OTspider02,OTspider03,OTspider04
		dc.l	OTenergizer01,OTenergizer02,OTenergizer03,OTenergizer04,OTenergizer05,OTenergizer06,OTenergizer07,OTenergizer08,OTenergizer09,OTenergizer10,-1,-1,-1,-1,-1,-1
		dc.l	OTceilflame01,OTfloorflame01,OTwallflamel01,OTwallflamer01,OTceilflame01,OTfloorflame01,OTwallflamel01,OTwallflamer01,OTceilflame01,OTfloorflame01,OTwallflamel01,OTwallflamer01,OTceilflame01,OTfloorflame01,OTwallflamel01,OTwallflamer01
		dc.l	OTbigcouldrongen01,OTbigcouldrongen02,OTbigcouldrongen03,OTbigcouldrongen04,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTvertflame01,OTvertflame01,OTflick01,OTvertflame01,OTvertflame01,OTvertflame01,OTvertflame01,OTvertflame01,OTvertflame02,OTvertflame02,OTvertflame02,OTvertflame02,OTvertflame02,OTvertflame02,OTvertflame02,OTvertflame02
		dc.l	OTtroughgen01,OTtroughgen02,OTtroughgen03,OTtroughgen04,OTtroughgen01,OTtroughgen02,OTtroughgen03,OTtroughgen04,OTtroughgen01,OTtroughgen02,OTtroughgen03,OTtroughgen04,OTtroughgen01,OTtroughgen02,OTtroughgen03,OTtroughgen04
		dc.l	OTorbplat01,OTorbplat02,OTorbplat03,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTrobotgen01,OTrobotgen01,OTrobotgen01,OTrobotgen01,OTrobotgen01,OTrobotgen01,OTrobotgen01,OTrobotgen01,OTrobotgen01,OTrobotgen01,OTrobotgen01,OTrobotgen01,OTrobotgen01,OTrobotgen01,OTrobotgen01,OTrobotgen01
		dc.l	OTfurnace01,OTfurnace01,OTfurnace01,OTfurnace01,OTfurnace01,OTfurnace01,OTfurnace01,OTfurnace01,OTfurnace01,OTfurnace01,OTfurnace01,OTfurnace01,OTfurnace01,OTfurnace01,OTfurnace01,OTfurnace01
		dc.l	OTrockgen01,OTrockgen02,OTrockgen03,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon03,OTicon03,OTicon03,OTicon03,OTicon01,OTicon01,OTicon01,OTicon01
		dc.l	OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon05,OTicon05,OTicon05,OTicon05,OTicon06,OTicon06,OTicon06,OTicon06

L77_OBDATA_VEC	dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
;		dc.l	OTwallpaste01,OTwallpaste02,OTwallpaste03,OTwallpaste04,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
;		dc.l	OTwallpaste11,OTwallpaste12,OTwallpaste13,OTwallpaste14,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
;		dc.l	OTwallpaste21,OTwallpaste22,OTwallpaste23,OTwallpaste24,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
;		dc.l	OTwallpaste31,OTwallpaste32,OTwallpaste33,OTwallpaste34,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTedgepaste01,OTedgepaste02,OTedgepaste03,OTedgepaste04,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
		dc.l	OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon04,OTicon03,OTicon03,OTicon03,OTicon03,OTicon01,OTicon01,OTicon01,OTicon01
		dc.l	OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon02,OTicon05,OTicon05,OTicon05,OTicon05,OTicon06,OTicon06,OTicon06,OTicon06


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ OBJECT DATA DEFINITIONS						   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

OTsorcerer01		dc.w	Sorcerer_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Sorcerer_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000010,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO 									;pad
			dc.l	-1 

OTl1breakwall01		dc.w	L1BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0								;Starting STATE
			dc.b	HI									;pad
			dc.l	-1 
OTl1breakwall02		dc.w	L1BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1 
OTl1breakwall03		dc.w	L1BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1 
OTl1breakwall04		dc.w	L1BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	3,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1 
OTl1breakwall05		dc.w	L1BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	4,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1 
OTl1breakwall06		dc.w	L1BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	5,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1 
OTl1breakwall07		dc.w	L1BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	6,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1 
OTl1breakwall08		dc.w	L1BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	7,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1 
OTl1breakwall09		dc.w	L1BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	8,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1 
OTl1breakwall0a		dc.w	L1BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	9,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1 
OTl1breakwall0b		dc.w	L1BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$a,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1 
OTl1breakwall0c		dc.w	L1BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$b,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1 
OTl1breakwall0d		dc.w	L1BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$c,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1 
OTl1breakwall0e		dc.w	L1BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$d,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1 
OTl1breakwall0f		dc.w	L1BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$e,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1 
OTl1breakwall10		dc.w	L1BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$f,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1 

OTcatapult01		dc.w	Catapult_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Catapult_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,-6,13,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 
OTcatapult02		dc.w	Catapult_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Catapult_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,8,9,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 
OTcatapult03		dc.w	Catapult_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Catapult_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,-9,7,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 
OTcatapult04		dc.w	Catapult_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Catapult_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	3,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 
OTcatapult05		dc.w	Catapult_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Catapult_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	4,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 
OTcatapult06		dc.w	Catapult_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Catapult_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	5,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 
OTcatapult07		dc.w	Catapult_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Catapult_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	6,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 
OTcatapult08		dc.w	Catapult_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Catapult_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	7,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 

OTl1breakfloor01	dc.w	L1BreakFloor_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakFloor_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 
OTl1breakfloor02	dc.w	L1BreakFloor_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakFloor_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 
OTl1breakfloor03	dc.w	L1BreakFloor_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakFloor_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 
OTl1breakfloor04	dc.w	L1BreakFloor_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakFloor_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	3,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 
OTl1breakfloor05	dc.w	L1BreakFloor_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakFloor_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	4,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 
OTl1breakfloor06	dc.w	L1BreakFloor_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakFloor_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	5,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 
OTl1breakfloor07	dc.w	L1BreakFloor_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakFloor_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	6,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 
OTl1breakfloor08	dc.w	L1BreakFloor_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L1BreakFloor_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	7,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 

OTweight01		dc.w	Weight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	0									;MAX VRAM Size		
			dc.b	%00000001,%00000010,%00000000,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,$28,0,0,0,$ac-$30,0,$3c,0,0,0,0						;Variables
			dc.b	0     	      								;Starting STATE
			dc.b	0									;pad
			dc.l	-1 
OTweight02		dc.w	Weight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	0									;MAX VRAM Size		
			dc.b	%00000001,%00000010,%00000000,%00000000,%00000000,%00000000		;Flags
			dc.b	1,0,0,$28,0,0,0,$bc+16,0,$2c,0,0,0,0					;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 
OTweight03		dc.w	Weight_OB			 					;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	0									;MAX VRAM Size		
			dc.b	%00000001,%00000010,%00000000,%00000000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 
OTweight04		dc.w	Weight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	0									;MAX VRAM Size		
			dc.b	%00000001,%00000010,%00000000,%00000000,%00000000,%00000000		;Flags
			dc.b	3,0,0,$28,0,0,0,$cc,0,$30,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 
OTweight05		dc.w	Weight_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	0									;MAX VRAM Size		
			dc.b	%00000001,%00000010,%00000000,%00000000,%00000000,%00000000		;Flags
			dc.b	4,0,0,$28,0,0,$ff,$74,$ff,$c0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 
OTweight06		dc.w	Weight_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	0									;MAX VRAM Size		
			dc.b	%00000001,%00000010,%00000000,%00000000,%00000000,%00000000		;Flags
			dc.b	5,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 
OTweight07		dc.w	Weight_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	0									;MAX VRAM Size		
			dc.b	%00000001,%00000010,%00000000,%00000000,%00000000,%00000000		;Flags
			dc.b	6,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 
OTweight08		dc.w	Weight_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	0									;MAX VRAM Size		
			dc.b	%00000001,%00000010,%00000000,%00000000,%00000000,%00000000		;Flags
			dc.b	7,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 

OTgatecrush01		dc.w	GateCrusher_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Gate_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0      									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 

OTweightcrush01		dc.w	WeightCrusher_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	0									;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000000,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0     	      								;Starting STATE
			dc.b	0									;pad
			dc.l	-1 

OTwallfire01		dc.w	WallFire_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	WallFire_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 
OTwallfire02		dc.w	WallFire_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	WallFire_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 

OTspitpot01		dc.w	SpittingCouldron_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Couldron_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$2c,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 
OTspitpot02		dc.w	SpittingCouldron_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Couldron_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$1c,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 

OTcastlebit01		dc.w	CastlePiece_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	CastlePiece1_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 
OTcastlebit02		dc.w	CastlePiece_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	CastlePiece2_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 
OTcastlebit03		dc.w	CastlePiece_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	CastlePiece3_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 
OTcastlebit04		dc.w	CastlePiece_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	CastlePiece4_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	3,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 

OToilgen01		dc.w	OilGenerator_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	32									;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 
OToilgen02		dc.w	OilGenerator_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	32									;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,$14,$1e,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 

OTbalista01		dc.w	Balista_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Balista_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,1,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 
OTbalista02		dc.w	Balista_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Balista_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	1,1,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 
OTbalista03		dc.w	Balista_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Balista_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	2,1,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 
OTbalista04		dc.w	Balista_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Balista_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	3,1,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 
OTbalista05		dc.w	Balista_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Balista_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	4,1,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 
OTbalista06		dc.w	Balista_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Balista_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	5,1,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 
OTbalista07		dc.w	Balista_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Balista_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	6,1,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 
OTbalista08		dc.w	Balista_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Balista_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	7,1,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1 

OTpastewall01		dc.w	PasteWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	PasteWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 
OTpastewall02		dc.w	PasteWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	PasteWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 
OTpastewall03		dc.w	PasteWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	PasteWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 
OTpastewall04		dc.w	PasteWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	PasteWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	3,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 
OTpastewall05		dc.w	PasteWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	PasteWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	4,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 
OTpastewall06		dc.w	PasteWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	PasteWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	5,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 
OTpastewall07		dc.w	PasteWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	PasteWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	6,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 
OTpastewall08		dc.w	PasteWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	PasteWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	7,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1 

OTmutantviking01	dc.w	MutVikBody_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	MutVikBody_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LOLO									;pad
			dc.l	-1 

OTfloor01		dc.w	Floor_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Floor_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette

OTclaw01		dc.w	Claw_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Claw_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette

OTstump01		dc.w	Stump_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Stump_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
	
OTclawstump01		dc.w	ClawStump_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	ClawStump_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,$56,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTclawstump02		dc.w	ClawStump_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	ClawStump_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,$66,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTclawstump03		dc.w	ClawStump_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	ClawStump_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,$76,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTclawstump04		dc.w	ClawStump_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	ClawStump_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,$86,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTclawstump05		dc.w	ClawStump_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	ClawStump_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,$96,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTclawstump06		dc.w	ClawStump_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	ClawStump_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,$a6,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTclawstump07		dc.w	ClawStump_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	ClawStump_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,$b6,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTclawstump08		dc.w	ClawStump_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	ClawStump_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,$c6,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette

OTfiregen01		dc.w	StumpFireGen_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	32									;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,$1,$20,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0 									;pad
			dc.l	-1 
			
OTventr01		dc.w	Vent_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0	  								;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventr02		dc.w	Vent_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventr03		dc.w	Vent_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventr04		dc.w	Vent_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	3,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventr05		dc.w	Vent_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	4,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventr06		dc.w	Vent_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	5,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventr07		dc.w	Vent_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	6,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventr08		dc.w	Vent_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	7,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventr09		dc.w	Vent_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	8,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventr0a		dc.w	Vent_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	9,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventr0b		dc.w	Vent_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$a,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventr0c		dc.w	Vent_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$b,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventr0d		dc.w	Vent_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$c,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventr0e		dc.w	Vent_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$d,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventr0f		dc.w	Vent_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$e,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventr10		dc.w	Vent_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$f,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
			
OTchainr01		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainr02		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainr03		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainr04		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	3,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainr05		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	4,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainr06		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	5,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainr07		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	6,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainr08		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	7,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainr09		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	8,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainr0a		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	9,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainr0b		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$a,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainr0c		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$b,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainr0d		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$c,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainr0e		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$d,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainr0f		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$e,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainr10		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$f,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			
OTventl01		dc.w	Vent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventl02		dc.w	Vent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventl03		dc.w	Vent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventl04		dc.w	Vent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	3,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventl05		dc.w	Vent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	4,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventl06		dc.w	Vent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	5,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventl07		dc.w	Vent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	6,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventl08		dc.w	Vent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	7,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventl09		dc.w	Vent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	8,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventl0a		dc.w	Vent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	9,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventl0b		dc.w	Vent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$a,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventl0c		dc.w	Vent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$b,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventl0d		dc.w	Vent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$c,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventl0e		dc.w	Vent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$d,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventl0f		dc.w	Vent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$e,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTventl10		dc.w	Vent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Vent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$f,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
			
OTchainl01		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainl02		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainl03		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainl04		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	3,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainl05		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	4,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainl06		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	5,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainl07		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	6,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainl08		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	7,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainl09		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	8,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainl0a		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	9,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainl0b		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$a,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainl0c		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$b,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainl0d		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$c,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainl0e		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$d,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainl0f		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$e,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTchainl10		dc.w	Chain_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Chain_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$f,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			
OTflick01		dc.w	FlameLick_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	FlameLick_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette


OTvalkyrie01		dc.w	Valkyrie_OB								;Object TYPE 		
			dc.w	Valkyrie_NRG								;Energy			
			dc.w	Valkyrie_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTweapexp01		dc.w	WeaponExp_OB								;Object TYPE 		
			dc.w	WeaponExp_NRG								;Energy			
			dc.w	WeaponExp_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,1,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTweapexp02		dc.w	WeaponExp_OB								;Object TYPE 		
			dc.w	WeaponExp_NRG								;Energy			
			dc.w	WeaponExp_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,$80,0,0,0,0,0 						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTmornstar01		dc.w	MorningStar_OB								;Object TYPE 		
			dc.w	MorningStar_NRG								;Energy			
			dc.w	MorningStar_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTarcher01		dc.w	Archer_OB								;Object TYPE 		
			dc.w	Archer_NRG								;Energy			
			dc.w	Archer_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTraptorS01		dc.w	RaptorBot_OB								;Object TYPE 		
			dc.w	RaptorBot_NRG								;Energy			
			dc.w	RaptorBot_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000010,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	-1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTeyeup01		dc.w	EyeRooftopUp_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	32									;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTeyedn01		dc.w	EyeRooftopDn_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	32									;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTeyeraptor01		dc.w	EyeRaptor_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	32									;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0										;pad
			dc.l	-1									;Palette
			even
OTeyeraptor02		dc.w	EyeRaptor_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	32									;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTeyeraptor03		dc.w	EyeRaptor_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	32									;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTeyeraptor04		dc.w	EyeRaptor_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	32									;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	3,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTroofraptor01		dc.w	RaptorBot_OB								;Object TYPE 		
			dc.w	RaptorBot_NRG								;Energy			
			dc.w	RaptorBot_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000010,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	-2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTroofraptor02		dc.w	RaptorBot_OB								;Object TYPE 		
			dc.w	RaptorBot_NRG								;Energy			
			dc.w	RaptorBot_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000010,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	-2,0,1,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTroofraptor03		dc.w	RaptorBot_OB								;Object TYPE 		
			dc.w	RaptorBot_NRG								;Energy			
			dc.w	RaptorBot_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000010,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	-2,0,2,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTroofraptor04		dc.w	RaptorBot_OB								;Object TYPE 		
			dc.w	RaptorBot_NRG								;Energy			
			dc.w	RaptorBot_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000010,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	-2,0,3,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTroofraptor05		dc.w	RaptorBot_OB								;Object TYPE 		
			dc.w	RaptorBot_NRG								;Energy			
			dc.w	RaptorBot_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000010,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	-2,0,4,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTroofraptor06		dc.w	RaptorBot_OB								;Object TYPE 		
			dc.w	RaptorBot_NRG								;Energy			
			dc.w	RaptorBot_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000010,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	-2,0,5,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTroofraptor07		dc.w	RaptorBot_OB								;Object TYPE 		
			dc.w	RaptorBot_NRG								;Energy			
			dc.w	RaptorBot_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000010,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	-2,0,6,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTroofraptor08		dc.w	RaptorBot_OB								;Object TYPE 		
			dc.w	RaptorBot_NRG								;Energy			
			dc.w	RaptorBot_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000010,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	-2,0,7,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTraptor01		dc.w	RaptorBot_OB								;Object TYPE 		
			dc.w	RaptorBot_NRG									;Energy			
			dc.w	RaptorBot_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000010,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTicon01		dc.w	Icon_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Icon_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	ICN_Continue,0,0,0,0,0,1,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTicon02		dc.w	Icon_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Icon_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	ICN_Life,0,0,0,0,0,1,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTicon03		dc.w	Icon_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Icon_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	ICN_FullHealth,0,0,0,0,0,1,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTicon04		dc.w	Icon_OB									;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Icon_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	ICN_PartHealth,0,0,0,0,0,1,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTicon05		dc.w	Icon_OB		
			dc.w	0									;Energy			
			dc.w	Icon_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	ICN_Strength,0,0,0,0,0,1,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTicon06		dc.w	Icon_OB		
			dc.w	0									;Energy			
			dc.w	Icon_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	ICN_Invincible,0,0,0,0,0,1,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTplasma01		dc.w	PlasmaBot_OB	  							;Object TYPE 		
			dc.w	PlasmaBot_NRG								;Energy			
			dc.w	PlasmaBot_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTceilflame01		dc.w	FloorFlame_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	FloorFlame_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTfloorflame01		dc.w	FloorFlame_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	FloorFlame_MAX_Size							;MAX VRAM Size		
			dc.b	%00000101,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTwallflamel01		dc.w	WallFlame_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	WallFlame_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTwallflamer01		dc.w	WallFlame_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	WallFlame_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTenergizer01		dc.w	Energizer_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Energizer_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0    									;pad
			dc.l	-1									;Palette
			even
OTenergizer02		dc.w	Energizer_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Energizer_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTenergizer03		dc.w	Energizer_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Energizer_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTenergizer04		dc.w	Energizer_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Energizer_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	3,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTenergizer05		dc.w	Energizer_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Energizer_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	4,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTenergizer06		dc.w	Energizer_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Energizer_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	5,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTenergizer07		dc.w	Energizer_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Energizer_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	6,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTenergizer08		dc.w	Energizer_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Energizer_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	7,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTenergizer09		dc.w	Energizer_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Energizer_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	8,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTenergizer10		dc.w	Energizer_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Energizer_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	9,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTwallpaste01		dc.w	WallPaste_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	WallPaste_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTwallpaste02		dc.w	WallPaste_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	WallPaste_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	1,$80,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTwallpaste03		dc.w	WallPaste_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	WallPaste_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTwallpaste04		dc.w	WallPaste_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	WallPaste_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	2,$80,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
			
OTwallpaste11		dc.w	WallPaste_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	WallPaste_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	1,0,1,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTwallpaste12		dc.w	WallPaste_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	WallPaste_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	1,$80,1,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTwallpaste13		dc.w	WallPaste_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	WallPaste_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	2,0,1,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTwallpaste14		dc.w	WallPaste_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	WallPaste_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	2,$80,1,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette

OTwallpaste21		dc.w	WallPaste_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	WallPaste_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	1,0,2,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTwallpaste22		dc.w	WallPaste_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	WallPaste_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	1,$80,2,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTwallpaste23		dc.w	WallPaste_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	WallPaste_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	2,0,2,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTwallpaste24		dc.w	WallPaste_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	WallPaste_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	2,$80,2,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette

OTwallpaste31		dc.w	WallPaste_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	WallPaste_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,$80,3,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTwallpaste32		dc.w	WallPaste_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	WallPaste_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	1,0,3,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTwallpaste33		dc.w	WallPaste_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	WallPaste_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	1,$80,3,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTwallpaste34		dc.w	WallPaste_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	WallPaste_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	2,0,3,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette

OTedgepaste01		dc.w	EdgePaste_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	EdgePaste_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1
OTedgepaste02		dc.w	EdgePaste_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	EdgePaste_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTedgepaste03		dc.w	EdgePaste_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	EdgePaste_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
OTedgepaste04		dc.w	EdgePaste_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	EdgePaste_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	3,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
									;Palette
OTrobotgen01		dc.w	RobotGenerator_OB 							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	RobotGen_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
			even

OTl5wall01		dc.w	L5Wall_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Wall_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5wall02		dc.w	L5Wall_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Wall_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5wall03		dc.w	L5Wall_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Wall_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5wall04		dc.w	L5Wall_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Wall_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	3,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5wall05		dc.w	L5Wall_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Wall_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	4,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5wall06		dc.w	L5Wall_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Wall_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	5,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5wall07		dc.w	L5Wall_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Wall_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	6,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5wall08		dc.w	L5Wall_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Wall_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	7,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5wall09		dc.w	L5Wall_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Wall_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	8,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5wall10		dc.w	L5Wall_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Wall_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	9,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5wall11		dc.w	L5Wall_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Wall_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$a,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5wall12		dc.w	L5Wall_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Wall_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$b,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5wall13		dc.w	L5Wall_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Wall_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$c,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5wall14		dc.w	L5Wall_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Wall_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$d,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5wall15		dc.w	L5Wall_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Wall_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$e,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5wall16		dc.w	L5Wall_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Wall_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$f,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTl5skylight01		dc.w	L5Skylight_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Skylight_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5skylight02		dc.w	L5Skylight_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Skylight_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5skylight03		dc.w	L5Skylight_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Skylight_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5skylight04		dc.w	L5Skylight_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Skylight_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	3,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5skylight05		dc.w	L5Skylight_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Skylight_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	4,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5skylight06		dc.w	L5Skylight_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Skylight_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	5,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5skylight07		dc.w	L5Skylight_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Skylight_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	6,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5skylight08		dc.w	L5Skylight_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Skylight_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	7,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5skylight09		dc.w	L5Skylight_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Skylight_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	8,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5skylight10		dc.w	L5Skylight_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Skylight_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	9,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5skylight11		dc.w	L5Skylight_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Skylight_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$a,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5skylight12		dc.w	L5Skylight_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Skylight_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$b,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5skylight13		dc.w	L5Skylight_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Skylight_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$c,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5skylight14		dc.w	L5Skylight_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Skylight_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$d,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5skylight15		dc.w	L5Skylight_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Skylight_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$e,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTl5skylight16		dc.w	L5Skylight_OB 								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	L5Skylight_MAX_Size								;MAX VRAM Size
			dc.b	%00000001,%00000001,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$f,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTwaspgen01		dc.w	WaspGenerator_OB 							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	32									;MAX VRAM Size
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTelecgen01		dc.w	ElecGenerator_OB 							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	32									;MAX VRAM Size
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTorbplat01		dc.w	OPOrb_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	OPOrb_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000010,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,1,1,1,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0      									;Starting STATE
			dc.b	LOLO									;pad
			dc.l	-1									;Palette
			even
OTorbplat02		dc.w	OPOrb_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	OPOrb_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000010,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LOLO									;pad
			dc.l	-1									;Palette
			even
OTorbplat03		dc.w	OPOrb_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	OPOrb_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000010,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LOLO									;pad
			dc.l	-1									;Palette
			even

OTfurnace01		dc.w	Furnace_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Furnace_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
			even

OTvertflame01		dc.w	VertFlame_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	VertFlame_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
			even
OTvertflame02		dc.w	VertFlame_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	VertFlame_MAX_Size							;MAX VRAM Size		
			dc.b	%00000101,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
			even

OTbigcouldrongen01	dc.w	BigCouldronGen_OB  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	32									;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbigcouldrongen02	dc.w	BigCouldronGen_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	32									;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,1,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbigcouldrongen03	dc.w	BigCouldronGen_OB  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	32									;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,2,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbigcouldrongen04	dc.w	BigCouldronGen_OB  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	32									;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,3,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTtrough01		dc.w	Trough_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Trough_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
			even
OTtrough02		dc.w	Trough_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Trough_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,1,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
			even
OTtrough03		dc.w	Trough_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Trough_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,2,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
			even
OTtrough04		dc.w	Trough_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	Trough_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,3,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
			even

OTtroughgen01		dc.w	TroughGen_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	32									;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$e0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTtroughgen02		dc.w	TroughGen_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	32									;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$e0,1,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTtroughgen03		dc.w	TroughGen_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	32									;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$e0,2,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTtroughgen04		dc.w	TroughGen_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	32									;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$e0,3,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTrockgen01		dc.w	RockGenerator_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	32									;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,$c0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTrockgen02		dc.w	RockGenerator_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	32									;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	1,$60,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTrockgen03		dc.w	RockGenerator_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	32									;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	2,$30,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette

OTbigrock01		dc.w	BigRock_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BigRock_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTmedrock01		dc.w	MediumRock_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	MediumRock_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
OTsmallrock01		dc.w	SmallRock_OB	  							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SmallRock_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			
OTspider01		dc.w	SpiderBot_OB	  							;Object TYPE 		
			dc.w	SpiderBot_NRG								;Energy			
			dc.w	SpiderBot_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	SpiBotSetHorzSTATE							;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTspider02		dc.w	SpiderBot_OB	  							;Object TYPE 		
			dc.w	SpiderBot_NRG								;Energy			
			dc.w	SpiderBot_MAX_Size							;MAX VRAM Size		
			dc.b	%00000101,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	SpiBotSetHorzSTATE							;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTspider03		dc.w	SpiderBot_OB	  							;Object TYPE 		
			dc.w	SpiderBot_NRG								;Energy			
			dc.w	SpiderBot_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	SpiBotSetVertSTATE							;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTspider04		dc.w	SpiderBot_OB	  							;Object TYPE 		
			dc.w	SpiderBot_NRG								;Energy			
			dc.w	SpiderBot_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	SpiBotSetVertSTATE							;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTmutspider01		dc.w	MutantSpiderBot_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SpiderBot_MAX_Size								;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
			even

OTwasp01		dc.w	WaspBot_OB	  							;Object TYPE 		
			dc.w	WaspBot_NRG									;Energy			
			dc.w	WaspBot_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTsniper01		dc.w	SniperBot_OB	  							;Object TYPE 		
			dc.w	SniperBot_NRG								;Energy			
			dc.w	SniperBot_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTbwall01		dc.w	BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
			even
OTbwall02		dc.w	BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1									;Palette
			even
OTbwall03		dc.w	BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
			even
OTbwall04		dc.w	BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	3,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1									;Palette
			even
OTbwall05		dc.w	BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	4,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
			even
OTbwall06		dc.w	BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	5,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1									;Palette
			even
OTbwall07		dc.w	BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	6,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
			even
OTbwall08		dc.w	BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	7,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1									;Palette
			even
OTbwall09		dc.w	BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	8,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
			even
OTbwall0a		dc.w	BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	9,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1									;Palette
			even
OTbwall0b		dc.w	BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$a,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
			even
OTbwall0c		dc.w	BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$b,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1									;Palette
			even
OTbwall0d		dc.w	BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$c,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
			even
OTbwall0e		dc.w	BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$d,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1									;Palette
			even
OTbwall0f		dc.w	BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$e,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	LO									;pad
			dc.l	-1									;Palette
			even
OTbwall10		dc.w	BreakWall_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakWall_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$f,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	HI									;pad
			dc.l	-1									;Palette
			even

OTsign01		dc.w	SignPiece_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SignPiece_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsign02		dc.w	SignPiece_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SignPiece_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsign03		dc.w	SignPiece_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SignPiece_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsign04		dc.w	SignPiece_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SignPiece_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	3,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsign05		dc.w	SignPiece_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SignPiece_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	4,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsign06		dc.w	SignPiece_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SignPiece_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	5,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsign07		dc.w	SignPiece_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SignPiece_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	6,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsign08		dc.w	SignPiece_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SignPiece_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	7,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsign09		dc.w	SignPiece_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SignPiece_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	8,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsign0a		dc.w	SignPiece_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SignPiece_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	9,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsign0b		dc.w	SignPiece_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SignPiece_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$a,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsign0c		dc.w	SignPiece_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SignPiece_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$b,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsign0d		dc.w	SignPiece_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SignPiece_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$c,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsign0e		dc.w	SignPiece_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SignPiece_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$d,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsign0f		dc.w	SignPiece_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SignPiece_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$e,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsign10		dc.w	SignPiece_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SignPiece_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$f,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTsteam01		dc.w	SteamVent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SteamVent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%10000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsteam02		dc.w	SteamVent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SteamVent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%10000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsteam03		dc.w	SteamVent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SteamVent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%10000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsteam04		dc.w	SteamVent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SteamVent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%10000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	3,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsteam05		dc.w	SteamVent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SteamVent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%10000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	4,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsteam06		dc.w	SteamVent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SteamVent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%10000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	5,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsteam07		dc.w	SteamVent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SteamVent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%10000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	6,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsteam08		dc.w	SteamVent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SteamVent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%10000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	7,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsteam09		dc.w	SteamVent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SteamVent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%10000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	8,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsteam0a		dc.w	SteamVent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SteamVent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%10000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	9,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsteam0b		dc.w	SteamVent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SteamVent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%10000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$a,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsteam0c		dc.w	SteamVent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SteamVent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%10000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$b,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsteam0d		dc.w	SteamVent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SteamVent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%10000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$c,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsteam0e		dc.w	SteamVent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SteamVent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%10000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$d,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsteam0f		dc.w	SteamVent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SteamVent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%10000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$e,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTsteam10		dc.w	SteamVent_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SteamVent_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%10000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	$f,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTskylight01		dc.w	SkyLight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SkyLight_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTskylight02		dc.w	SkyLight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SkyLight_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTskylight03		dc.w	SkyLight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SkyLight_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTskylight04		dc.w	SkyLight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SkyLight_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	3,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTskylight05		dc.w	SkyLight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SkyLight_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	4,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTskylight06		dc.w	SkyLight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SkyLight_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	5,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTskylight07		dc.w	SkyLight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SkyLight_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	6,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTskylight08		dc.w	SkyLight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SkyLight_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	7,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTskylight09		dc.w	SkyLight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SkyLight_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	8,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTskylight0a		dc.w	SkyLight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SkyLight_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	9,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTskylight0b		dc.w	SkyLight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SkyLight_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$a,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTskylight0c		dc.w	SkyLight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SkyLight_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$b,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTskylight0d		dc.w	SkyLight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SkyLight_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$c,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTskylight0e		dc.w	SkyLight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SkyLight_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$d,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTskylight0f		dc.w	SkyLight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SkyLight_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$e,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTskylight10		dc.w	SkyLight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	SkyLight_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$f,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTbreaklight01		dc.w	BreakLight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakLight_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0      		   							;pad
			dc.l	-1									;Palette
			even
OTbreaklight02		dc.w	BreakLight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakLight_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0      									;Starting STATE
			dc.b	0      									;pad
			dc.l	-1									;Palette
			even
OTbreaklight03		dc.w	BreakLight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakLight_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0      		   							;pad
			dc.l	-1									;Palette
			even		       
OTbreaklight04		dc.w	BreakLight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakLight_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	3,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0      									;Starting STATE
			dc.b	0      									;pad
			dc.l	-1									;Palette
			even
OTbreaklight05		dc.w	BreakLight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakLight_MAX_Size							;MAX VRAM Size		
			dc.b	%00000011,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	4,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0      		   							;pad
			dc.l	-1									;Palette
			even
OTbreaklight06		dc.w	BreakLight_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakLight_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000000,%00000001,%00000000,%00000000,%00000000		;Flags
			dc.b	5,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0      									;Starting STATE
			dc.b	0      									;pad
			dc.l	-1									;Palette
			even

OTthrowcrate01		dc.w	ThrowCrate_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	ThrowCrate_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%01000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,ICN_Life,1					;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTthrowcrate02		dc.w	ThrowCrate_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	ThrowCrate_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%01000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,ICN_Life,2					;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTthrowcrate03		dc.w	ThrowCrate_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	ThrowCrate_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%01000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,ICN_Life,2					;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTthrowcrate04		dc.w	ThrowCrate_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	ThrowCrate_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%01000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	3,0,0,0,0,0,0,0,0,0,0,0,ICN_Life,1					;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTthrowcrate05		dc.w	ThrowCrate_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	ThrowCrate_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%01000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	4,0,0,0,0,0,0,0,0,0,0,0,ICN_Life,1					;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTthrowcrate06		dc.w	ThrowCrate_OB								;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	ThrowCrate_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%01000000,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	5,0,0,0,0,0,0,0,0,0,0,0,ICN_Invincible,0					;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTbrkedgel01		dc.w	BreakEdgeLeft_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeL_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedgel02		dc.w	BreakEdgeLeft_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeL_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedgel03		dc.w	BreakEdgeLeft_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeL_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedgel04		dc.w	BreakEdgeLeft_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeL_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	3,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedgel05		dc.w	BreakEdgeLeft_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeL_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	4,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedgel06		dc.w	BreakEdgeLeft_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeL_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	5,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedgel07		dc.w	BreakEdgeLeft_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeL_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	6,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedgel08		dc.w	BreakEdgeLeft_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeL_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	7,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedgel09		dc.w	BreakEdgeLeft_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeL_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	8,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedgel0a		dc.w	BreakEdgeLeft_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeL_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	9,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedgel0b		dc.w	BreakEdgeLeft_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeL_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$a,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedgel0c		dc.w	BreakEdgeLeft_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeL_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$b,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedgel0d		dc.w	BreakEdgeLeft_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeL_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$c,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedgel0e		dc.w	BreakEdgeLeft_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeL_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$d,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedgel0f		dc.w	BreakEdgeLeft_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeL_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$e,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedgel10		dc.w	BreakEdgeLeft_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeL_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$f,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even

OTbrkedger01		dc.w	BreakEdgeRight_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeR_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	0,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedger02		dc.w	BreakEdgeRight_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeR_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	1,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedger03		dc.w	BreakEdgeRight_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeR_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	2,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedger04		dc.w	BreakEdgeRight_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeR_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	3,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedger05		dc.w	BreakEdgeRight_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeR_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	4,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedger06		dc.w	BreakEdgeRight_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeR_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	5,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedger07		dc.w	BreakEdgeRight_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeR_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	6,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedger08		dc.w	BreakEdgeRight_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeR_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	7,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedger09		dc.w	BreakEdgeRight_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeR_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	8,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedger0a		dc.w	BreakEdgeRight_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeR_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	9,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedger0b		dc.w	BreakEdgeRight_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeR_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$a,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedger0c		dc.w	BreakEdgeRight_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeR_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$b,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedger0d		dc.w	BreakEdgeRight_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeR_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$c,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedger0e		dc.w	BreakEdgeRight_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeR_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$d,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedger0f		dc.w	BreakEdgeRight_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeR_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$e,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even
OTbrkedger10		dc.w	BreakEdgeRight_OB							;Object TYPE 		
			dc.w	0									;Energy			
			dc.w	BreakEdgeR_MAX_Size							;MAX VRAM Size		
			dc.b	%00000001,%00000001,%00000001,%00001000,%00000000,%00000000		;Flags
			dc.b	$f,0,0,0,0,0,0,0,0,0,0,0,0,0						;Variables
			dc.b	0									;Starting STATE
			dc.b	0									;pad
			dc.l	-1									;Palette
			even



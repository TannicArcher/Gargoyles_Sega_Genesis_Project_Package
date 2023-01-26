; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ ANIMATION DATA TABLES ...						   บ
; ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน
; ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน
; บ All animation tables (primarily created by collect) are here	   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ ANIMATION DATA TABLES for GOLIATH					   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

GolInc1			include	data\objects\goliath\gg0101.Inc		;*
GolInc2			include	data\objects\goliath\gg0102.Inc		;*
GolInc3a		include	data\objects\goliath\gg0103a.Inc	;*
GolInc3b		include	data\objects\goliath\gg0103b.Inc	;*
GolInc3c		include	data\objects\goliath\gg0103c.Inc	;*
GolInc4			include	data\objects\goliath\gg0104.Inc		;*
GolInc5			include	data\objects\goliath\gg0105.Inc		;*
GolInc6			include	data\objects\goliath\gg0106.Inc		;*
GolInc7			include	data\objects\goliath\gg0107.Inc		;*
GolInc8			include	data\objects\goliath\gg0108.Inc		;*
GolInc9			include	data\objects\goliath\gg0109.Inc		;*
GolInc10		include	data\objects\goliath\gg0110.Inc		;*
GolInc11		include	data\objects\goliath\gg0111.Inc		;*
GolInc15		include	data\objects\goliath\gg0115.Inc		;*
GolInc16		include	data\objects\goliath\gg0116.Inc		;*
GolInc17		include	data\objects\goliath\gg0117.Inc		;*
GolInc18		include	data\objects\goliath\gg0118.Inc		;*
GolInc19		include	data\objects\goliath\gg0119.Inc		;*
GolInc20		include	data\objects\goliath\gg0120.Inc		
GolInc21		include	data\objects\goliath\gg0121.Inc		;*
GolInc22		include	data\objects\goliath\gg0122.Inc		;*
GolInc23		include	data\objects\goliath\gg0123.Inc		
GolInc24		include	data\objects\goliath\gg0124.Inc		;*
GolInc25		include	data\objects\goliath\gg0125.Inc		
GolInc26		include	data\objects\goliath\gg0126.Inc		;*
GolInc27		include	data\objects\goliath\gg0127.Inc		;*
GolInc28		include	data\objects\goliath\gg0128.Inc		;*
GolInc30		include	data\objects\goliath\gg0130.Inc		;*
GolInc31		include	data\objects\goliath\gg0131.Inc		;*
GolInc32		include	data\objects\goliath\gg0132.Inc		;*
GolInc33		include	data\objects\goliath\gg0133.Inc		;*
GolInc34		include	data\objects\goliath\gg0134.Inc		;*
GolInc50		include	data\objects\goliath\gg0150.Inc		;*
GolInc51		include	data\objects\goliath\gg0151.Inc		;*
GolInc52		include	data\objects\goliath\gg0152.Inc		;*
GolInc54		include	data\objects\goliath\gg0154.Inc		;*	
GolInc55		include	data\objects\goliath\gg0155.Inc		;*
GolInc77		include	data\objects\goliath\gg0177.Inc		;*
GolInc82		include	data\objects\goliath\gg0182.Inc		;*
GolInc83		include	data\objects\goliath\gg0183.Inc		;*
GolInc84		include	data\objects\goliath\gg0184.Inc		;*
GolInc87		include	data\objects\goliath\gg0187.Inc		;*
GolInc88		include	data\objects\goliath\gg0188.Inc		;*
GolInc89		include	data\objects\goliath\gg0189.Inc		;*
GolInc90		include	data\objects\goliath\gg0190.Inc		;*
GolInc91		include	data\objects\goliath\gg0191.Inc		;*
GolIncDeath		include	data\objects\goliath\gg_death.Inc		;*


			;OB_Flag1
GolGroundZeroANM	anmdef	ANM_GolGroundZero,GolChr1,0,0,0,0
ANM_GolGroundZero	anm1	GG0101_0001,0,0
			anm	AEnd

GolRunANM		anmdef	ANM_GolRun,GolChr2,0,0,0,0
ANM_GolRun		anm1	GG0102_0001,3,0
			anm1	GG0102_0002,3,0
			anm1	GG0102_0003,3,0
			anm1	GG0102_0004,3,0
			anm1	GG0102_0005,3,0
			anm1	GG0102_0006,3,0
			anm1	GG0102_0007,3,0
			anm1	GG0102_0008,3,0
			anm1	GG0102_0009,3,0
			anm1	GG0102_0010,3,0
			anm1	GG0102_0011,3,0
			anm1	GG0102_0012,3,0
			anm	ARep

GolRunAttackANM		anmdef	ANM_GolRunAttack,GolChr3c,0,0,0,0
ANM_GolRunAttack	anm1	GG0103C_0001,4,0
			anm1	GG0103C_0002,4,0
GRAL1			anm1	GG0103C_0003,4,0
			anm1	GG0103C_0004,4,0
			anm	AJmp,GRAL1
GolRunAttackWallANM 	anmdef	ANM_GolRunAttackWall,GolChr3a,0,0,0,0
ANM_GolRunAttackWall	anm1	GG0103A_0001,1,0
			anm1	GG0103A_0002,1,0
			anm1	GG0103A_0003,6,0
			anm1	GG0103A_0004,3,0
			anm	AEnd
GolRunAttackWallLandANM anmdef	ANM_GolRunAttkWallLand,GolChr3a,0,0,0,0
ANM_GolRunAttkWallLand	anm1	GG0103A_0005,3,0
			anm1	GG0103A_0006,3,0
			anm1	GG0103A_0007,3,0
			anm1	GG0103A_0008,2,0
			anm	AEnd

GolRunAttackThruANM 	anmdef	ANM_GolRunAttackThru,GolChr3b,0,0,0,0
ANM_GolRunAttackThru	anm1	GG0103B_0001,2,0
			anm1	GG0103B_0002,2,0
			anm1	GG0103B_0003,2,0
			anm1	GG0103B_0004,2,0
			anm1	GG0103B_0005,2,0
			anm1	GG0103B_0006,2,0
			anm1	GG0103B_0007,2,0
			anm1	GG0103B_0008,2,0
			anm1	GG0103B_0009,2,0
			anm1	GG0103B_0010,2,0
			anm	AEnd

GolRunTurnANM		anmdef	ANM_GolRunTurn,GolChr4,0,0,0,0
ANM_GolRunTurn		anm1	GG0104_0001,1,0
			anm1	GG0104_0002,1,0
			anm1	GG0104_0003,1,0
			anm	AEnd

GolStopANM		anmdef	ANM_GolStop,GolChr4,0,0,0,0
ANM_GolStop		anm1	GG0104_0001,1,0
			anm1	GG0104_0002,1,0
			anm	AEnd

GolStandJumpANM		anmdef	ANM_GolStandJump,GolChr6,0,0,0,0
ANM_GolStandJump	anm1	GG0106_0001,1,0
			anm	AVar1,1	    			
			anm1	GG0106_0002,2,0
			anm1	GG0106_0003,2,0
			anm1	GG0106_0004,2,0
			anm1	GG0106_0005,2,0
			anm1	GG0106_0006,2,0
			anm1	GG0106_0007,2,0
			anm1	GG0106_0008,2,0
			anm1	GG0106_0009,2,0
			anm	AEnd

GolRunJumpANM		anmdef	ANM_GolRunJump,GolChr7,0,0,0,0
ANM_GolRunJump		anm	AVar1,1	    			
			anm1	GG0107_0001,1,0
			anm1	GG0107_0002,2,0
			anm1	GG0107_0003,2,0
			anm1	GG0107_0004,2,0
			anm1	GG0107_0005,2,0
			anm1	GG0107_0006,2,0
			anm1	GG0107_0007,2,0
			anm1	GG0107_0008,2,0
			anm	AEnd

GolJumpFlapANM		anmdef	ANM_GolJumpFlap,GolChr8,0,0,0,0
ANM_GolJumpFlap		anm1	GG0108_0001,2,0
			anm1	GG0108_0002,2,0
			anm1	GG0108_0003,2,0
			anm	AVar4,1
			anm1	GG0108_0004,3,0
			anm1	GG0108_0005,5,0
			anm1	GG0108_0006,4,0
			anm1	GG0108_0007,4,0
			anm	AEnd	

GolJumpAttackANM	anmdef	ANM_GolJumpAttack,GolChr9,0,0,0,0
ANM_GolJumpAttack	anm1	GG0109_0001,2,0
			anm1	GG0109_0002,2,0
			anm1	GG0109_0003,2,0
ANM_GJA2		anm1	GG0109_0004,2,0
			anm1	GG0109_0005,2,0
			anm1	GG0109_0006,2,0
			anm1	GG0109_0007,2,0
			anm1	GG0109_0008,2,0
			anm	AJmp,ANM_GJA2

GolFallANM		anmdef	ANM_GolFall,GolChr10,0,0,0,0
ANM_GolFall		anm1	GG0110_0001,4,0
			anm1	GG0110_0002,4,0
GF2			anm1	GG0110_0003,3,0
			anm1	GG0110_0004,3,0
			anm1	GG0110_0005,3,0
			anm	AJmp,GF2

GolFall2ANM		anmdef	ANM_GolFall2,GolChr10,0,0,0,0
ANM_GolFall2		anm1	GG0110_0003,3,0
			anm1	GG0110_0004,3,0
			anm1	GG0110_0005,3,0
			anm	AJmp,ANM_GolFall2


GolAirSlashANM		anmdef	ANM_GolAirSlash,GolChr90,0,0,0,0
ANM_GolAirSlash		anm1	GG0190_0001,2,0
			anm1	GG0190_0002,2,0
			anm1	GG0190_0003,2,0
			anm1	GG0190_0004,2,0
			anm	AEnd

GolLandANM		anmdef	ANM_GolLand,GolChr11,0,0,0,0
ANM_GolLand		anm1	GG0111_0001,3,0
			anm1	GG0111_0002,3,0
			anm1	GG0111_0003,3,0
			anm1	GG0111_0004,3,0
			anm1	GG0111_0005,3,0
			anm	AEnd

GolCrouchANM		anmdef	ANM_GolCrouch,GolChr89,0,0,0,0
ANM_GolCrouch		anm1	GG0189_0001,3,0
			anm1	GG0189_0002,3,0
			anm1	GG0189_0003,3,0
			anm	AEnd
GolStandCrouchANM	anmdef	ANM_GolStandCrouch,GolChr89,0,0,0,0
ANM_GolStandCrouch	anm1	GG0189_0004,3,0
			anm1	GG0189_0005,3,0
			anm	AEnd
GolCrouchKickANM 	anmdef	ANM_GolCrouchKick,GolChr88,0,0,0,0
ANM_GolCrouchKick	anm1	GG0188_0001,2,0
			anm1	GG0188_0002,2,0
			anm1	GG0188_0003,2,0
			anm1	GG0188_0004,2,0
			anm1	GG0188_0005,2,0
			anm1	GG0188_0006,2,0
			anm1	GG0188_0007,2,0
			anm1	GG0188_0008,2,0
			anm	ANew,GolCrouchQuickANM
GolCrouchQuickANM	anmdef	ANM_GolCrouchQuick,GolChr89,0,0,0,0
ANM_GolCrouchQuick	anm1	GG0189_0003,0,0
			anm	AEnd

GolGroundClawANM	anmdef	ANM_GolGroundClaw,GolChr83,0,0,0,0
ANM_GolGroundClaw	anm1	GG0183_0001,2,0
			anm1	GG0183_0002,2,0
			anm1	GG0183_0003,2,0
			anm1	GG0183_0004,2,0
			anm1	GG0183_0005,2,0
			anm	AEnd

GolGroundGrabANM	anmdef	ANM_GolGroundGrab,GolChr15,0,0,0,0
ANM_GolGroundGrab	anm1	GG0115_0001,1,0
			anm1	GG0115_0002,1,0
			anm1	GG0115_0003,1,0
			anm1	GG0115_0004,2,0
			anm1	GG0115_0005,2,0
			anm	AVar1,60
			anm	AVar2,0
			anm	AVar3,2
			anm1	GG0115_0006,2,0
			anm	AVar1,55
			anm	AVar2,-16
			anm1	GG0115_0007,2,0
			anm	AVar1,47
			anm	AVar2,-32
			anm1	GG0115_0008,2,0
			anm	AVar1,14
			anm	AVar2,-50
			anm1	GG0115_0009,2,0
			anm	AEnd

GolGroundGrabReverseANM	anmdef	ANM_GolGroundGrabRev,GolChr15,0,0,0,0
ANM_GolGroundGrabRev	anm1	GG0115_0005,2,0
			anm1	GG0115_0004,2,0
			anm1	GG0115_0003,2,0
			anm1	GG0115_0002,2,0
			anm1	GG0115_0001,2,0
			anm	AEnd

GolOPGrabANM		anmdef	ANM_GolOPGrab,GolChr15,0,0,0,0
ANM_GolOPGrab		anm1	GG0115_0001,1,0
			anm1	GG0115_0002,1,0
			anm1	GG0115_0003,1,0
			anm1	GG0115_0004,2,0
			anm1	GG0115_0005,3,0
			anm1	GG0115_0006,3,0
			anm1	GG0115_0005,3,0
			anm1	GG0115_0004,2,0
			anm1	GG0115_0003,2,0
			anm1	GG0115_0002,2,0
			anm1	GG0115_0001,2,0
			anm	AEnd

GolGroundThrowANM 	anmdef	ANM_GolGroundThrow,GolChr16,0,0,0,0
ANM_GolGroundThrow	anm	AVar1,-35;-44
			anm	AVar2,-50
			anm1	GG0116_0001,2,0
			anm	AVar1,-40;-55
			anm	AVar2,-50
			anm1	GG0116_0002,2,0
			anm	AVar3,1
			anm1	GG0116_0003,2,0
			anm1	GG0116_0004,2,0
			anm1	GG0116_0005,1,0
			anm1	GG0116_0006,1,0
			anm1	GG0116_0007,1,0
			anm	AEnd

			
GolGroundSlamANM	anmdef	ANM_GolGroundSlam,GolChr17,0,0,0,0
ANM_GolGroundSlam	anm	AVar1,-7
			anm	AVar2,-68
			anm1	GG0117_0001,2,0
			anm	AVar1,-55
			anm	AVar2,-50
			anm	AVar3,1
			anm1	GG0117_0002,2,0
			anm	AVar1,-63
			anm	AVar2,0
			anm1	GG0117_0003,2,0
			anm1	GG0117_0004,16,0
			anm1	GG0117_0005,2,0
			anm1	GG0117_0006,2,0
			anm1	GG0117_0007,2,0
			anm1	GG0117_0008,2,0
			anm1	GG0117_0009,2,0
			anm	AEnd

; --------------------------------------------------------------------------


;GolGroundGrabANM	anmdef	ANM_GolGroundGrab,GolChr15,0,0,0,0
;ANM_GolGroundGrab	anm1	GG0115_0001,2,0
;			anm1	GG0115_0002,2,0
;			anm1	GG0115_0003,2,0
;			anm1	GG0115_0004,2,0
;			anm1	GG0115_0005,2,0
;			anm	AVar1,$28
;			anm	AVar2,0
;			anm	AVar3,1
;			anm1	GG0115_0006,2,0
;			anm	AVar1,$24
;			anm	AVar2,-4
;			anm1	GG0115_0007,2,0
;			anm	AVar1,$1c
;			anm	AVar2,-$c
;			anm1	GG0115_0008,2,0
;			anm	AVar1,$18
;			anm	AVar2,-$e
;			anm1	GG0115_0009,2,0
;			anm	AVar1,0
;			anm	AVar2,-$10
;			anm	AEnd
;
;GolGroundGrabReverseANM	anmdef	ANM_GolGroundGrabRev,GolChr15,0,0,0,0
;ANM_GolGroundGrabRev	anm1	GG0115_0005,2,0
;			anm1	GG0115_0004,2,0
;			anm1	GG0115_0003,2,0
;			anm1	GG0115_0002,2,0
;			anm1	GG0115_0001,2,0
;			anm	AEnd
;
;GolGroundThrowANM 	anmdef	ANM_GolGroundThrow,GolChr16,0,0,0,0
;ANM_GolGroundThrow	anm1	GG0116_0001,2,0
;			anm	AVar1,-$28
;			anm	AVar2,-$10
;			anm1	GG0116_0002,2,0
;			anm	AVar3,1
;			anm1	GG0116_0003,2,0
;			anm1	GG0116_0004,2,0
;			anm1	GG0116_0005,2,0
;			anm1	GG0116_0006,2,0
;			anm1	GG0116_0007,2,0
;			anm	AEnd
;
;GolGroundSlamANM	anmdef	ANM_GolGroundSlam,GolChr17,0,0,0,0
;ANM_GolGroundSlam	anm	AVar1,-$10
;			anm	AVar2,-$20
;			anm1	GG0117_0001,2,0
;			anm	AVar1,-$20
;			anm	AVar2,-$18
;			anm	AVar3,1
;			anm1	GG0117_0002,2,0
;			anm	AVar1,-$20
;			anm	AVar2,0
;			anm1	GG0117_0003,2,0
;			anm1	GG0117_0004,64,0
;			anm1	GG0117_0005,2,0
;			anm1	GG0117_0006,2,0
;			anm1	GG0117_0007,2,0
;			anm1	GG0117_0008,2,0
;			anm1	GG0117_0009,2,0
;			anm	AEnd
;

; --------------------------------------------------------------------------

GolGroundIdle1ANM	anmdef	ANM_GolGroundIdle1,GolChr18,0,0,0,0
ANM_GolGroundIdle1	anm1	GG0118_0001,3,0
			anm1	GG0118_0002,3,0
			anm1	GG0118_0003,3,0
			anm1	GG0118_0004,3,0
			anm	APau,64
			anm1	GG0118_0005,3,0
			anm1	GG0118_0006,3,0
			anm	AEnd

GolGroundIdle2ANM	anmdef	ANM_GolGroundIdle2,GolChr1,0,0,0,0
ANM_GolGroundIdle2	anm1	GG0101_0002,3,0
			anm1	GG0101_0003,3,0
			anm1	GG0101_0004,3,0
			anm1	GG0101_0005,3,0
			anm1	GG0101_0006,3,0
			anm1	GG0101_0007,3,0
			anm1	GG0101_0008,3,0
			anm1	GG0101_0009,3,0
			anm	APau,64
			anm1	GG0101_0008,3,0
			anm1	GG0101_0006,3,0
			anm1	GG0101_0004,3,0
			anm1	GG0101_0002,3,0
			anm	AEnd

GolDeathANM		anmdef	ANM_GolDeath,GolChr18,0,0,0,0
ANM_GolDeath		anm	AVar1,0
			anm	AVar2,0
			anm1	GG0118_0001,3,0
			anm1	GG0118_0002,3,0
			anm1	GG0118_0003,3,0
			anm1	GG0118_0004,64,0
			anm	ANew,GolDeath2ANM

GolDeath2ANM		anmdef	ANM_GolDeath2,GolChrDeath,0,0,0,0
ANM_GolDeath2		anm	AVar1,1
			anm1	GG_DEATH_0001,3,0
			anm1	GG_DEATH_0002,3,0
			anm1	GG_DEATH_0003,3,0
			anm1	GG_DEATH_0004,16,0
			anm	AVar2,1
			anm1	GG_DEATH_0005,8,0
			anm1	GG_DEATH_0006,7,0
			anm1	GG_DEATH_0007,6,0
			anm1	GG_DEATH_0008,5,0
			anm1	GG_DEATH_0009,4,0
			anm1	GG_DEATH_0010,32,0
			anm	AEnd

GolGroundSmallHitANM	anmdef	ANM_GolGroundSmallHit,GolChr19,0,0,0,0
ANM_GolGroundSmallHit	anm1	GG0119_0001,2,0
			anm1	GG0119_0002,2,0
			anm1	GG0119_0003,2,0
			anm1	GG0119_0004,2,0
			anm1	GG0119_0005,2,0
			anm1	GG0119_0006,2,0
			anm1	GG0119_0007,2,0
			anm	AEnd

GolGroundBigHitANM	anmdef	ANM_GolGroundBigHit,GolChr20,0,0,0,0
ANM_GolGroundBigHit	anm1	GG0120_0001,2,0
			anm1	GG0120_0002,2,0
			anm1	GG0120_0003,2,0
			anm1	GG0120_0004,2,0
			anm1	GG0120_0005,2,0
			anm1	GG0120_0006,2,0
			anm1	GG0120_0007,2,0
			anm1	GG0120_0008,3,0
			anm1	GG0120_0009,3,0
			anm1	GG0120_0010,3,0
			anm1	GG0120_0011,3,0
			anm1	GG0120_0012,3,0
			anm1	GG0120_0013,3,0
			anm1	GG0120_0014,3,0
			anm1	GG0120_0015,3,0
			anm	AEnd

GolGrnd2WallTransANM	anmdef	ANM_GolGrnd2WallTrans,GolChr21,0,0,0,0
ANM_GolGrnd2WallTrans	anm1	GG0121_0001,3,0
			anm1	GG0121_0002,3,0
			anm1	GG0121_0003,3,0
			anm1	GG0121_0004,3,0
			anm1	GG0121_0005,3,0
			anm1	GG0121_0006,3,0
			anm1	GG0121_0007,3,0
			anm1	GG0121_0008,3,0
			anm1	GG0121_0009,3,0
			anm1	GG0121_0010,3,0
			anm1	GG0121_0011,3,0
			anm	AEnd

;			anm1	GG0121_0001,2,0
;			anm1	GG0121_0002,2,0
;			anm1	GG0121_0003,2,0
;			anm1	GG0121_0004,2,0
;			anm1	GG0121_0005,2,0
;			anm1	GG0121_0006,2,0
;			anm	AEnd

GolJmpFlp2WallTransANM	anmdef	ANM_GolJmpFlp2WallTrans,GolChr22,0,0,0,0
ANM_GolJmpFlp2WallTrans	anm1	GG0122_0001,2,0
			anm1	GG0122_0002,2,0
			anm1	GG0122_0003,2,0
			anm1	GG0122_0004,2,0
			anm1	GG0122_0005,2,0
			anm	AEnd

GolJump2CeilTransANM	anmdef	ANM_GolJump2CeilTrans,GolChr55,0,0,0,0
ANM_GolJump2CeilTrans	anm1	GG0155_0002,2,0
			anm1	GG0155_0003,2,0
			anm1	GG0155_0004,2,0
			anm1	GG0155_0005,2,0
			anm	ANew,GJ2CT2ANM
GJ2CT2ANM		anmdef	ANM_GJ2CT2,GolChr23,0,0,0,0
ANM_GJ2CT2		anm1	GG0123_0001,2,0
			anm1	GG0123_0002,2,0
			anm1	GG0123_0003,2,0
			anm	AEnd

GolWall2CeilTransANM	anmdef	ANM_GolWall2CeilTrans,GolChr24,0,0,0,0
ANM_GolWall2CeilTrans	anm1	GG0124_0001,2,0
			anm1	GG0124_0002,2,0
			anm1	GG0124_0003,2,0
			anm1	GG0124_0004,2,0
			anm1	GG0124_0005,2,0
			anm1	GG0124_0006,2,0
			anm1	GG0124_0007,2,0
			anm1	GG0124_0008,2,0
			anm1	GG0124_0009,2,0
			anm1	GG0124_0010,2,0
			anm1	GG0124_0011,2,0
			anm1	GG0124_0012,2,0
			anm1	GG0124_0013,2,0
			anm1	GG0124_0014,2,0
			anm1	GG0124_0015,2,0
			anm1	GG0124_0016,2,0
			anm1	GG0124_0017,2,0
			anm1	GG0124_0018,2,0
			anm	AEnd

GolCeil2WallUpTransANM	anmdef	ANM_GolCeil2WallUpTrans,GolChr25,0,0,0,0
ANM_GolCeil2WallUpTrans	anm1	GG0125_0001,2,0
			anm1	GG0125_0002,2,0
			anm1	GG0125_0003,2,0
			anm1	GG0125_0004,2,0
			anm1	GG0125_0005,2,0
			anm1	GG0125_0006,2,0
			anm1	GG0125_0007,2,0
			anm1	GG0125_0008,2,0
			anm1	GG0125_0009,2,0
			anm1	GG0125_0010,2,0
			anm1	GG0125_0011,2,0
			anm1	GG0125_0012,2,0
			anm1	GG0125_0013,2,0
			anm1	GG0125_0014,2,0
			anm1	GG0125_0015,2,0
			anm1	GG0125_0016,2,0
			anm	AEnd

GolCeil2WallDownTransANM	anmdef	ANM_GolCeil2WallDownTrans,GolChr50,0,0,0,0
ANM_GolCeil2WallDownTrans
			anm1	GG0150_0001,3,0
			anm1	GG0150_0002,3,0
			anm1	GG0150_0003,3,0
			anm1	GG0150_0004,3,0
			anm	ANew,GolCeil2WallDownTrans2ANM

GolCeil2WallDownTrans2ANM	anmdef	ANM_GolCeil2WallDownTrans2,GolChr22,0,0,0,0
ANM_GolCeil2WallDownTrans2
			anm	AMov2,M2dn,$20
			anm1	GG0122_0001,3,0
			anm1	GG0122_0002,3,0
			anm1	GG0122_0003,3,0
			anm1	GG0122_0004,3,0
			anm1	GG0122_0005,3,0
			anm1	GG0122_0006,3,0
			anm	AEnd
			anm1	GG0122_0007,3,0
			anm1	GG0122_0008,3,0
			anm1	GG0122_0009,3,0
			anm1	GG0122_0010,3,0
			anm	AEnd

GolWallClimbFallANM	anmdef	ANM_GolWallClimbFall,GolChr26,0,0,0,0
ANM_GolWallClimbFall	anm1	GG0126_0001,1,0
			anm1	GG0126_0002,2,0
			anm1	GG0126_0003,2,0
			anm	AVar1,1	    			
			anm1	GG0126_0004,2,0
			anm1	GG0126_0005,2,0
			anm1	GG0126_0006,2,0
			anm	AEnd

GolWallClimbZeroANM 	anmdef	ANM_GolWallClimbZero,GolChr77,0,0,0,0
ANM_GolWallClimbZero	anm1	GG0177_0001,8,0
			anm1	GG0177_0002,8,0
			anm1	GG0177_0003,8,0
			anm1	GG0177_0004,8,0
			anm1	GG0177_0005,8,0
			anm	ARep

GolWallIdle2ClimbANM	anmdef	ANM_GolWallIdle2Climb,GolChr22,0,0,0,0
ANM_GolWallIdle2Climb	anm1	GG0122_0006,3,0
			anm1	GG0122_0007,3,0
			anm1	GG0122_0008,3,0
			anm1	GG0122_0009,3,0
			anm1	GG0122_0010,3,0
			anm	AEnd

GolWallClimb2IdleANM	anmdef	ANM_GolWallClimb2Idle,GolChr22,0,0,0,0
ANM_GolWallClimb2Idle	anm1	GG0122_0009,2,0
			anm1	GG0122_0007,2,0
			anm1	GG0122_0006,2,0
			anm	AEnd

GolWallClimbANM		anmdef	ANM_GolWallClimb,GolChr27,0,0,0,0
ANM_GolWallClimb	anm1	GG0127_0001,2,0
			anm1	GG0127_0002,2,0
			anm1	GG0127_0003,2,0
			anm1	GG0127_0004,2,0
			anm1	GG0127_0005,2,0
			anm1	GG0127_0006,2,0
			anm1	GG0127_0007,2,0
			anm1	GG0127_0008,2,0
			anm1	GG0127_0009,2,0
			anm1	GG0127_0010,2,0
			anm1	GG0127_0011,2,0
			anm1	GG0127_0012,2,0
			anm	ARep

GolWallSlideDownANM	anmdef	ANM_GolWallSlideDown,GolChr22,0,0,0,0
ANM_GolWallSlideDown	anm1	GG0122_0001,3,0
			anm1	GG0122_0002,3,0
			anm1	GG0122_0003,3,0
			anm1	GG0122_0004,3,0
			anm1	GG0122_0005,3,0
			anm	AEnd

GolWallSldDownStopANM	anmdef	ANM_GolWallSldDownStop,GolChr22,0,0,0,0
ANM_GolWallSldDownStop	anm1	GG0122_0004,2,0
			anm1	GG0122_0002,2,0
			anm1	GG0122_0001,2,0
			anm	AEnd

GolWallClimbClawANM 	anmdef	ANM_GolWallClimbClaw,GolChr28,0,0,0,0
ANM_GolWallClimbClaw	anm1	GG0128_0001,2,0
			anm1	GG0128_0002,2,0
			anm	AVar1,1
			anm1	GG0128_0003,2,0
			anm1	GG0128_0004,2,0
			anm1	GG0128_0005,2,0
			anm1	GG0128_0006,2,0
			anm1	GG0128_0007,2,0
			anm1	GG0128_0008,2,0
			anm	AEnd

GolWallClimbHitSANM 	anmdef	ANM_GolWallClimbHitS,GolChr30,0,0,0,0
ANM_GolWallClimbHitS	anm1	GG0130_0001,3,0
			anm1	GG0130_0002,3,0
			anm1	GG0130_0003,3,0
			anm1	GG0130_0004,3,0
			anm1	GG0130_0002,2,0
			anm	AEnd
GolWallClimbHitBANM 	anmdef	ANM_GolWallClimbHitB,GolChr30,0,0,0,0
ANM_GolWallClimbHitB	anm1	GG0130_0001,3,0
			anm1	GG0130_0002,3,0
			anm1	GG0130_0003,3,0
			anm1	GG0130_0004,3,0
			anm1	GG0130_0005,3,0
			anm1	GG0130_0006,3,0
			;anm1	GG0130_0007,3,0
			;anm1	GG0130_0008,3,0
			anm	AEnd

GolCeilClimbZeroANM 	anmdef	ANM_GolCeilClimbZero,GolChr91,0,0,0,0
ANM_GolCeilClimbZero	anm1	GG0191_0001,8,0
			anm1	GG0191_0002,8,0
			anm1	GG0191_0003,8,0
			anm1	GG0191_0004,8,0
			anm	ARep

GolCeilClimbANM 	anmdef	ANM_GolCeilClimb,GolChr31,0,0,0,0
ANM_GolCeilClimb	anm1	GG0131_0001,3,0
			anm1	GG0131_0002,3,0
			anm1	GG0131_0003,3,0
			anm1	GG0131_0004,3,0
			anm1	GG0131_0005,3,0
			anm1	GG0131_0006,3,0
			anm1	GG0131_0007,3,0
			anm1	GG0131_0008,3,0
			anm1	GG0131_0009,3,0
			anm1	GG0131_0010,3,0
			anm1	GG0131_0011,3,0
			anm1	GG0131_0012,3,0
			anm	ARep

GolCeilClimbShieldANM 	anmdef	ANM_GolCeilClimbShield,GolChr32,0,0,0,0
ANM_GolCeilClimbShield	anm1	GG0132_0001,3,0
			anm1	GG0132_0002,3,0
			anm1	GG0132_0003,3,0
			anm	AEnd
GolCeilClimbShldOutANM 	anmdef	ANM_GolCeilClimbShldOut,GolChr32,0,0,0,0
ANM_GolCeilClimbShldOut	anm1	GG0132_0002,3,0
			anm	AEnd

GolCeilClimbTurnANM 	anmdef	ANM_GolCeilClimbTurn,GolChr33,0,0,0,0
ANM_GolCeilClimbTurn	anm1	GG0133_0001,3,0
			anm1	GG0133_0002,3,0
			anm1	GG0133_0003,3,0
			anm1	GG0133_0004,3,0
			anm	AEnd

GolCeilClimbHitANM 	anmdef	ANM_GolCeilClimbHit,GolChr34,0,0,0,0
ANM_GolCeilClimbHit	anm1	GG0134_0001,3,0
			anm1	GG0134_0002,3,0
			anm1	GG0134_0003,3,0
			anm1	GG0134_0004,3,0
			anm	AVar1,1
			anm1	GG0134_0005,3,0
			anm1	GG0134_0006,3,0
			anm	AEnd

GolDeathYesContANM 	anmdef	ANM_GolDeathYesCont,GolChr2,0,0,0,0
ANM_GolDeathYesCont	anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm	AEnd

GolDeathNoContANM 	anmdef	ANM_GolDeathNoCont,GolChr2,0,0,0,0
ANM_GolDeathNoCont	anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm1	GG0102_0001,3,0
			anm	AEnd

GolCeilClimbFallANM 	anmdef	ANM_GolCeilClimbFall,GolChr50,0,0,0,0
ANM_GolCeilClimbFall	anm1	GG0150_0001,4,0
			anm1	GG0150_0002,4,0
			anm1	GG0150_0003,4,0
			anm	AVar1,1	    			
			anm1	GG0150_0004,4,0
			anm	AEnd

GolCeilClimbHitFallANM 	anmdef	ANM_GolCeilClimbHitFall,GolChr50,0,0,0,0
ANM_GolCeilClimbHitFall	anm1	GG0150_0001,2,0
			anm1	GG0150_0002,2,0
			anm1	GG0150_0003,2,0
			anm1	GG0150_0004,2,0
			anm	ANew,GCCHF2ANM
GCCHF2ANM		anmdef	ANM_GCCHF2,GolChr10,0,0,0,0
ANM_GCCHF2		anm1	GG0110_0001,3,0
			anm1	GG0110_0002,3,0
			anm1	GG0110_0003,3,0
			anm	AEnd

GolOffBalanceANM 	anmdef	ANM_GolOffBalance,GolChr51,0,0,0,0
ANM_GolOffBalance	anm1	GG0151_0001,3,0
			anm1	GG0151_0002,3,0
			anm1	GG0151_0003,3,0
			anm1	GG0151_0004,3,0
			anm1	GG0151_0005,3,0
			anm1	GG0151_0006,3,0
			anm1	GG0151_0007,3,0
			anm1	GG0151_0008,3,0
ANM_GOB2		anm1	GG0151_0005,3,0
			anm1	GG0151_0006,3,0
			anm1	GG0151_0007,3,0
			anm1	GG0151_0008,3,0
			anm1	GG0151_0007,3,0
			anm1	GG0151_0006,3,0
			anm	AJmp,ANM_GOB2
			

GolLookUpANM 		anmdef	ANM_GolLookUp,GolChr52,0,0,0,0
ANM_GolLookUp		anm1	GG0152_0001,3,0
			anm1	GG0152_0002,3,0
			anm1	GG0152_0003,3,0
			anm1	GG0152_0004,3,0
			anm	AEnd
GolStandLookUpANM	anmdef	ANM_GolStandLookUp,GolChr52,0,0,0,0
ANM_GolStandLookUp	anm1	GG0152_0003,3,0
			anm1	GG0152_0001,3,0
			anm	AEnd


GolAirHitANM 		anmdef	ANM_GolAirHit,GolChr82,0,0,0,0
ANM_GolAirHit		anm1	GG0182_0001,3,0
			anm1	GG0182_0002,3,0
			anm1	GG0182_0003,3,0
			anm1	GG0182_0004,3,0
			anm1	GG0182_0005,3,0
			anm1	GG0182_0006,3,0
			anm	ANew,GolFallANM
GolAirHitLandANM	anmdef	ANM_GolAirHitLand,GolChr20,0,0,0,0
ANM_GolAirHitLand	anm1	GG0120_0013,3,0
			anm1	GG0120_0014,3,0
			anm1	GG0120_0015,3,0
			anm	AEnd

GolOnTracksANM 		anmdef	ANM_GolOnTracks,GolChr20,0,0,0,0
ANM_GolOnTracks		anm1	GG0120_0001,2,0
			anm1	GG0120_0002,2,0
			anm1	GG0120_0003,2,0
			anm1	GG0120_0004,2,0
			anm1	GG0120_0005,2,0
			anm	ARep

GolWall2GroundTransANM	anmdef	ANM_GolWall2GrndTrans,GolChr54,0,0,0,0
ANM_GolWall2GrndTrans	anm1	GG0154_0001,2,0
			anm1	GG0154_0002,2,0
			anm1	GG0154_0003,2,0
			anm1	GG0154_0004,2,0
			anm1	GG0154_0005,2,0
			anm1	GG0154_0006,2,0
			anm1	GG0154_0007,2,0
			anm1	GG0154_0008,2,0
			anm1	GG0154_0009,2,0
			anm1	GG0154_0010,2,0
			anm1	GG0154_0011,2,0
			anm1	GG0154_0012,2,0
			anm1	GG0154_0013,2,0
			anm1	GG0154_0014,2,0
			anm1	GG0154_0015,2,0
			anm	AEnd

GolHangSwingANM 	anmdef	ANM_GolHangSwing,GolChr55,0,0,0,0
ANM_GolHangSwing	anm1	GG0155_0001,3,0
			anm1	GG0155_0002,3,0
			anm	AVar1,0
			anm1	GG0155_0003,3,0
			anm	AVar1,1
			anm1	GG0155_0004,3,0
			anm	AVar1,2
			anm1	GG0155_0005,3,0
			anm	AVar1,3
			anm 	AEnd

GolHangSwingReleaseANM 	anmdef	ANM_GolHangSwingRelease,GolChr55,0,0,0,0
ANM_GolHangSwingRelease	anm1	GG0155_0006,3,0
			anm1	GG0155_0007,3,0
			anm1	GG0155_0008,3,0
			anm1	GG0155_0009,3,0
			anm1	GG0155_0010,3,0
			anm 	AEnd
	    
GolGroundJabANM 	anmdef	ANM_GolGroundJab,GolChr84,0,0,0,0
ANM_GolGroundJab	anm1	GG0184_0001,3,0
			anm1	GG0184_0002,3,0
			anm1	GG0184_0003,3,0
			anm1	GG0184_0004,3,0
			anm	AEnd

GolGroundSlashANM 	anmdef	ANM_GolGroundSlash,GolChr87,0,0,0,0
ANM_GolGroundSlash	anm1	GG0187_0001,3,0
			anm1	GG0187_0002,3,0
			anm1	GG0187_0003,3,0
			anm1	GG0187_0004,3,0
			anm1	GG0187_0005,3,0
			anm1	GG0187_0006,3,0
			anm1	GG0187_0007,3,0
			anm1	GG0187_0008,3,0
			anm1	GG0187_0009,3,0
			anm1	GG0187_0010,3,0
			anm	AEnd

GolFaceHugANM		anmdef	ANM_GolFaceHug,GolChr19,0,0,0,0
ANM_GolFaceHug		anm1	GG0119_0001,4,0
			anm1	GG0119_0002,4,0
			anm1	GG0119_0003,4,0
			anm1	GG0119_0004,4,0
			anm1	GG0119_0003,4,0
			anm1	GG0119_0002,4,0
			anm	ARep


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ ANIMATION DATA TABLES for PANEL					   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

HEALTH01		multisprite	2,0,0,0,0,0
			subsprite	11,2,-24,-32,0
			subsprite	11,2,0,-32,384
HEALTH02		multisprite	1,0,0,0,0,0
			subsprite	12,2,-16,-8,0
Health1ANM		anmdef	ANM_Health1,Health1Chr,0,0,0,0
ANM_Health1		anm1	HEALTH01,0,0
			anm	AEnd
Health2ANM		anmdef	ANM_Health2,Health2Chr,0,0,0,0
ANM_Health2		anm1	HEALTH02,0,0
			anm	AEnd

BHealthInc		include	data\objects\panel\bhealth0.inc
BHealth0ANM		anmdef	ANM_BHealth0,BHealthChr,0,0,0,0
ANM_BHealth0		anm1	BHEALTH0_0001,0,0
			anm	AEnd
BHealth1ANM		anmdef	ANM_BHealth1,BHealthChr,0,0,0,0
ANM_BHealth1		anm1	BHEALTH0_0002,0,0
			anm	AEnd
BHealth2ANM		anmdef	ANM_BHealth2,BHealthChr,0,0,0,0
ANM_BHealth2		anm1	BHEALTH0_0003,0,0
			anm	AEnd
BHealth3ANM		anmdef	ANM_BHealth3,BHealthChr,0,0,0,0
ANM_BHealth3		anm1	BHEALTH0_0004,0,0
			anm	AEnd
BHealth4ANM		anmdef	ANM_BHealth4,BHealthChr,0,0,0,0
ANM_BHealth4		anm1	BHEALTH0_0005,0,0
			anm	AEnd
BHealth5ANM		anmdef	ANM_BHealth5,BHealthChr,0,0,0,0
ANM_BHealth5		anm1	BHEALTH0_0006,0,0
			anm	AEnd
BHealth6ANM		anmdef	ANM_BHealth6,BHealthChr,0,0,0,0
ANM_BHealth6		anm1	BHEALTH0_0007,0,0
			anm	AEnd
BHealth7ANM		anmdef	ANM_BHealth7,BHealthChr,0,0,0,0
ANM_BHealth7		anm1	BHEALTH0_0008,0,0
			anm	AEnd
BHealth8ANM		anmdef	ANM_BHealth8,BHealthChr,0,0,0,0
ANM_BHealth8		anm1	BHEALTH0_0009,0,0
			anm	AEnd
BHealth9ANM		anmdef	ANM_BHealth9,BHealthChr,0,0,0,0
ANM_BHealth9		anm1	BHEALTH0_0010,0,0
			anm	AEnd
			
NumeralInc		include	data\objects\panel\numbersg.inc
Numeral0ANM		anmdef	ANM_Numeral0,NumeralChr,0,0,0,0
ANM_Numeral0		anm1	NUMBERSG_0001,0,0
			anm	AEnd
Numeral1ANM		anmdef	ANM_Numeral1,NumeralChr,0,0,0,0
ANM_Numeral1		anm1	NUMBERSG_0002,0,0
			anm	AEnd
Numeral2ANM		anmdef	ANM_Numeral2,NumeralChr,0,0,0,0
ANM_Numeral2		anm1	NUMBERSG_0003,0,0
			anm	AEnd
Numeral3ANM		anmdef	ANM_Numeral3,NumeralChr,0,0,0,0
ANM_Numeral3		anm1	NUMBERSG_0004,0,0
			anm	AEnd
Numeral4ANM		anmdef	ANM_Numeral4,NumeralChr,0,0,0,0
ANM_Numeral4		anm1	NUMBERSG_0005,0,0
			anm	AEnd
Numeral5ANM		anmdef	ANM_Numeral5,NumeralChr,0,0,0,0
ANM_Numeral5		anm1	NUMBERSG_0006,0,0
			anm	AEnd
Numeral6ANM		anmdef	ANM_Numeral6,NumeralChr,0,0,0,0
ANM_Numeral6		anm1	NUMBERSG_0007,0,0
			anm	AEnd
Numeral7ANM		anmdef	ANM_Numeral7,NumeralChr,0,0,0,0
ANM_Numeral7		anm1	NUMBERSG_0008,0,0
			anm	AEnd
Numeral8ANM		anmdef	ANM_Numeral8,NumeralChr,0,0,0,0
ANM_Numeral8		anm1	NUMBERSG_0009,0,0
			anm	AEnd
Numeral9ANM		anmdef	ANM_Numeral9,NumeralChr,0,0,0,0
ANM_Numeral9		anm1	NUMBERSG_0010,0,0
			anm	AEnd
Numeral10ANM		anmdef	ANM_Numeral10,NumeralChr,0,0,0,0
ANM_Numeral10		anm1	NUMBERSG_0011,0,0
			anm	AEnd
			

IconInc1		include	data\objects\panel\powrup01.inc
IconInc2		include	data\objects\panel\powrup02.inc
IconInc3		include	data\objects\panel\powrup03.inc
IconInc4		include	data\objects\panel\powrup04.inc
IconInc5		include	data\objects\panel\powrup05.inc

Icon1ANM		anmdef	ANM_Icon1,IconChr1,0,0,0,0
ANM_Icon1		anm1	POWRUP01_0002,3,0
			anm1	POWRUP01_0003,3,0
			anm1	POWRUP01_0004,3,0
			anm1	POWRUP01_0005,3,0
			anm1	POWRUP01_0006,3,0
			anm1	POWRUP01_0007,3,0
			anm	ARep
Icon2ANM		anmdef	ANM_Icon2,IconChr1,0,0,0,0
ANM_Icon2		anm1	POWRUP01_0001,0,0
			anm	AEnd
Icon3ANM		anmdef	ANM_Icon3,IconChr2,0,0,0,0
ANM_Icon3		anm1	POWRUP02_0001,3,0
			anm1	POWRUP02_0002,3,0
			anm1	POWRUP02_0003,3,0
			anm1	POWRUP02_0004,3,0
			anm	ARep
Icon4ANM		anmdef	ANM_Icon4,IconChr3,0,0,0,0
ANM_Icon4		anm1	POWRUP03_0001,3,0
			anm1	POWRUP03_0002,3,0
			anm1	POWRUP03_0003,3,0
			anm1	POWRUP03_0004,3,0
			anm	ARep
Icon5ANM		anmdef	ANM_Icon5,IconChr4,0,0,0,0
ANM_Icon5		anm1	POWRUP04_0001,5,0
			anm1	POWRUP04_0002,5,0
			anm1	POWRUP04_0003,5,0
			anm1	POWRUP04_0004,5,0
			anm1	POWRUP04_0005,5,0
			anm	ARep
Icon6ANM		anmdef	ANM_Icon6,IconChr5,0,0,0,0
ANM_Icon6		anm1	POWRUP05_0001,3,0
			anm1	POWRUP05_0002,3,0
			anm1	POWRUP05_0003,3,0
			anm1	POWRUP05_0004,3,0
			anm1	POWRUP05_0005,3,0
			anm	ARep


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ BURN ANIMATION DATA TABLES (LEVEL 1.1)				   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

;BurnANM			anmdef	ANM_Burn,GolChr98,0,0,0,0
;ANM_Burn		anm1	GG0198,3,0
;			anm	AEnd


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ RAPTOR BOT ANIMATION DATA						   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

RapInc1			include	data\objects\rapbot\gr90501.Inc		;*
RapInc2			include	data\objects\rapbot\gr90502.Inc		;*
RapInc3			include	data\objects\rapbot\gr90503.Inc		;*
RapInc4			include	data\objects\rapbot\gr90504.Inc		;*
RapInc5			include	data\objects\rapbot\gr90505.Inc		;*
RapInc6			include	data\objects\rapbot\gr90506.Inc		;*
RapInc7			include	data\objects\rapbot\gr90507.Inc		;*
RapInc8			include	data\objects\rapbot\gr90508.Inc		;*
RapInc9			include	data\objects\rapbot\gr90509.Inc		;*
RapInc10		include	data\objects\rapbot\gr90510.Inc		;*
RapInc11		include	data\objects\rapbot\gr90511.Inc		;*
RapInc12		include	data\objects\rapbot\gr90512.Inc		;*
RapInc13		include	data\objects\rapbot\gr90513.Inc		;*


RapBotIdleANM		anmdef	ANM_RapBotIdle,RapChr2,0,0,0,0
ANM_RapBotIdle		anm1	GR90502_0001,3,0
			anm1	GR90502_0002,3,0
			anm1	GR90502_0003,3,0
			anm1	GR90502_0004,3,0
			anm1	GR90502_0005,3,0
			anm1	GR90502_0006,3,0
			anm1	GR90502_0007,3,0
			anm	ARep

RapBotWalkANM		anmdef	ANM_RapBotWalk,RapChr1,0,0,0,0
ANM_RapBotWalk		anm1	GR90501_0001,5,0
			anm1	GR90501_0002,5,0
			anm1	GR90501_0003,5,0
			anm1	GR90501_0004,5,0
			anm1	GR90501_0005,5,0
			anm1	GR90501_0006,5,0
			anm1	GR90501_0007,5,0
			anm1	GR90501_0008,5,0
			anm1	GR90501_0009,5,0
			anm1	GR90501_0010,5,0
			anm1	GR90501_0011,5,0
			anm1	GR90501_0012,5,0
			anm1	GR90501_0013,5,0
			anm	ARep

RapBotWalkToANM		anmdef	ANM_RapBotWalkTo,RapChr1,0,0,0,0
ANM_RapBotWalkTo	anm1	GR90501_0001,2,0
			anm1	GR90501_0002,2,0
			anm1	GR90501_0003,2,0
			anm1	GR90501_0004,2,0
			anm1	GR90501_0005,2,0
			anm1	GR90501_0006,2,0
			anm1	GR90501_0007,2,0
			anm1	GR90501_0008,2,0
			anm1	GR90501_0009,2,0
			anm1	GR90501_0010,2,0
			anm1	GR90501_0011,2,0
			anm1	GR90501_0012,2,0
			anm1	GR90501_0013,2,0
			anm	ARep

RapBotBackOffANM	anmdef	ANM_RapBotBackOff,RapChr1,0,0,0,0
ANM_RapBotBackOff	anm1	GR90501_0013,2,0
			anm1	GR90501_0012,2,0
			anm1	GR90501_0011,2,0
			anm1	GR90501_0010,2,0
			anm1	GR90501_0009,2,0
			anm1	GR90501_0008,2,0
			anm1	GR90501_0007,2,0
			anm1	GR90501_0006,2,0
			anm1	GR90501_0005,2,0
			anm1	GR90501_0004,2,0
			anm1	GR90501_0003,2,0
			anm1	GR90501_0002,2,0
			anm1	GR90501_0001,2,0
			anm	AEnd

RapBotTurnANM		anmdef	ANM_RapBotTurn,RapChr3,0,0,0,0
ANM_RapBotTurn		anm1	GR90503_0001,2,0
			anm1	GR90503_0002,2,0
			anm1	GR90503_0003,2,0
			anm1	GR90503_0004,2,0
			anm1	GR90503_0005,2,0
			anm1	GR90503_0006,2,0
			anm	AEnd

RapBotTestANM		anmdef	ANM_RapBotTest,GolChr2,0,0,0,0
ANM_RapBotTest		anm1	GG0102_0001,3,0
			anm	AEnd


RapBotJumpAttackANM	anmdef	ANM_RapBotJumpAttack,RapChr6,0,0,0,0
ANM_RapBotJumpAttack	anm1	GR90506_0001,1,0
			anm1	GR90506_0002,1,0
			anm1	GR90506_0003,1,0
			anm1	GR90506_0004,1,0
			anm1	GR90506_0005,2,0
			anm1	GR90506_0006,2,0
			anm	AVar1,1
			anm1	GR90506_0007,8,0
			anm1	GR90506_0008,2,0
			anm1	GR90506_0009,2,0
			anm	AEnd

RapBotFallANM		anmdef	ANM_RapBotFall,RapChr10,0,0,0,0
ANM_RapBotFall		anm1	GR90510_0001,2,0
			anm1	GR90510_0002,2,0
			anm1	GR90510_0003,2,0
			anm1	GR90510_0004,2,0
			anm1	GR90510_0005,2,0
			anm	AEnd

RapBotLandANM		anmdef	ANM_RapBotLand,RapChr10,0,0,0,0
ANM_RapBotLand		anm1	GR90510_0006,4,0
			anm1	GR90510_0007,4,0
			anm1	GR90510_0008,4,0
			anm1	GR90510_0009,4,0
			anm1	GR90510_0010,4,0
			anm	AEnd

RapBotSnakeAttackANM 	anmdef	ANM_RapBotSnakeAttack,RapChr11,0,0,0,0
ANM_RapBotSnakeAttack	anm1	GR90511_0001,2,0
			anm1	GR90511_0002,2,0
			anm1	GR90511_0003,2,0
			anm1	GR90511_0004,2,0
			anm1	GR90511_0005,2,0
			anm	AVar1,1
			anm1	GR90511_0006,3,0
			anm1	GR90511_0007,3,0
			anm1	GR90511_0008,3,0
			anm1	GR90511_0009,3,0
			anm1	GR90511_0010,3,0
			anm1	GR90511_0011,3,0
			anm1	GR90511_0012,3,0
			anm	AEnd

RapBotDefendANM 	anmdef	ANM_RapBotDefend,RapChr12,0,0,0,0
ANM_RapBotDefend	anm1	GR90512_0001,2,0
			anm1	GR90512_0002,2,0
			anm1	GR90512_0003,2,0
			anm1	GR90512_0004,2,0
			anm1	GR90512_0005,2,0
			anm1	GR90512_0006,2,0
RBD2ANM			anm1	GR90512_0007,3,0
			anm1	GR90512_0008,3,0
			anm1	GR90512_0009,3,0
			anm	ALoop,RBD2ANM,12
			anm1	GR90512_0005,3,0
			anm	AEnd

RapBotDefendEndANM 	anmdef	ANM_RapBotDefendEnd,RapChr12,0,0,0,0
ANM_RapBotDefendEnd	anm1	GR90512_0005,3,0
			anm1	GR90512_0004,3,0
			anm1	GR90512_0003,3,0
			anm1	GR90512_0002,3,0
			anm1	GR90512_0001,3,0
			anm	AEnd

RapBotBigHitANM 	anmdef	ANM_RapBotBigHit,RapChr4,0,0,0,0
ANM_RapBotBigHit	anm1	GR90504_0001,2,0
			anm1	GR90504_0002,2,0
			anm1	GR90504_0003,2,0
			anm1	GR90504_0004,2,0
			anm1	GR90504_0005,2,0
			anm1	GR90504_0006,2,0
			anm	AEnd

RapBotGrabANM 		anmdef	ANM_RapBotGrab,RapChr5,0,0,0,0
ANM_RapBotGrab		anm1	GR90505_0001,2,0
			anm1	GR90505_0001,2,0
			anm1	GR90505_0001,2,0
			anm1	GR90505_0002,2,0
			anm1	GR90505_0003,2,0
			anm	AEnd

RapBotThrownANM 	anmdef	ANM_RapBotThrown,RapChr5,0,0,0,0
ANM_RapBotThrown	anm1	GR90505_0004,4,0
			anm1	GR90505_0005,4,0
			anm	AEnd

RapBotSlammedANM 	anmdef	ANM_RapBotSlammed,RapChr5,0,0,0,0
ANM_RapBotSlammed	anm1	GR90505_0004,2,0
			anm1	GR90505_0005,2,0
			anm	ALoop,ANM_RapBotSlammed,32
			anm	AEnd

RapBotFaceHugANM 	anmdef	ANM_RapBotFaceHug,RapChr7,0,0,0,0
ANM_RapBotFaceHug	anm1	GR90507_0001,3,0
			anm1	GR90507_0002,3,0
			anm1	GR90507_0003,3,0
			anm1	GR90507_0004,3,0
			anm1	GR90507_0005,3,0
			anm1	GR90507_0006,3,0
			anm1	GR90507_0007,3,0
			anm1	GR90507_0008,3,0
			anm	AEnd

RapBotFaceHugRendANM 	anmdef	ANM_RapBotFaceHugRend,RapChr8,0,0,0,0
ANM_RapBotFaceHugRend	anm1	GR90508_0001,4,0
			anm1	GR90508_0002,4,0
			anm1	GR90508_0003,4,0
			anm	AVar1,1
			anm1	GR90508_0004,4,0
			anm1	GR90508_0005,4,0
			anm1	GR90508_0006,4,0
			anm1	GR90508_0007,4,0
			anm	AVar1,1
			anm1	GR90508_0008,4,0
			anm1	GR90508_0009,4,0
			anm1	GR90508_0010,4,0
			anm	ARep

RapBotFaceHugOffANM 	anmdef	ANM_RapBotFaceHugOff,RapChr9,0,0,0,0
ANM_RapBotFaceHugOff	anm1	GR90509_0001,3,0
			anm1	GR90509_0002,3,0
			anm1	GR90509_0003,3,0
			anm1	GR90509_0004,3,0
			anm1	GR90509_0005,3,0
			anm1	GR90509_0006,3,0
			anm1	GR90509_0007,3,0
			anm	AEnd

RapBotLandOffANM 	anmdef	ANM_RapBotLandOff,RapChr9,0,0,0,0
ANM_RapBotLandOff	anm1	GR90509_0008,3,0
			anm1	GR90509_0009,3,0
			anm1	GR90509_0010,3,0
			anm1	GR90509_0011,3,0
			anm1	GR90509_0012,3,0
			anm1	GR90509_0013,3,0
			anm	AEnd

RapBotMutateANM 	anmdef	ANM_RapBotMutate,RapChr13,0,0,0,0
ANM_RapBotMutate	anm1	GR90513_0001,3,0
			anm1	GR90513_0002,3,0
			anm1	GR90513_0003,3,0
			anm1	GR90513_0004,3,0
			anm1	GR90513_0005,3,0
			anm1	GR90513_0006,3,0
			anm	AEnd


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ SNIPER BOT ANIMATION DATA						   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

SniInc1			include	data\objects\sniprbot\gr90201.Inc	
SniInc2a		include	data\objects\sniprbot\gr90202a.Inc	
SniInc2b		include	data\objects\sniprbot\gr90202b.Inc	
SniInc3a		include	data\objects\sniprbot\gr90203a.Inc	
SniInc3b		include	data\objects\sniprbot\gr90203b.Inc	
SniInc3c		include	data\objects\sniprbot\gr90203c.Inc	
SniInc3d		include	data\objects\sniprbot\gr90203d.Inc	
SniInc3e		include	data\objects\sniprbot\gr90203e.Inc	
SniInc4			include	data\objects\sniprbot\gr90204.Inc	
SniInc5			include	data\objects\sniprbot\gr90205.Inc	
SniInc6			include	data\objects\sniprbot\gr90206.Inc	
SniInc7			include	data\objects\sniprbot\gr90207.Inc	
SniInc8			include	data\objects\sniprbot\gr90208.Inc	
SniInc9			include	data\objects\sniprbot\gr90209.Inc	

SniBotWalkANM		anmdef	ANM_SniBotWalk,SniChr1,0,0,0,0
ANM_SniBotWalk		anm1	GR90201_0001,3,0
			anm1	GR90201_0002,3,0
			anm1	GR90201_0003,3,0
			anm1	GR90201_0004,3,0
			anm1	GR90201_0005,3,0
			anm1	GR90201_0006,3,0
			anm1	GR90201_0007,3,0
			anm1	GR90201_0008,3,0
			anm1	GR90201_0009,3,0
			anm1	GR90201_0010,3,0
			anm1	GR90201_0011,3,0
			anm1	GR90201_0012,3,0
			anm	ARep

SniBotBackOffANM 	anmdef	ANM_SniBotBackOff,SniChr1,0,0,0,0
ANM_SniBotBackOff	anm1	GR90201_0012,2,0
			anm1	GR90201_0011,2,0
			anm1	GR90201_0010,2,0
			anm1	GR90201_0009,2,0
			anm1	GR90201_0008,2,0
			anm1	GR90201_0007,2,0
			anm1	GR90201_0006,2,0
			anm1	GR90201_0005,2,0
			anm1	GR90201_0004,2,0
			anm1	GR90201_0003,2,0
			anm1	GR90201_0002,2,0
			anm1	GR90201_0001,2,0
			anm	AEnd

SniBotTurnANM		anmdef	ANM_SniBotTurn,SniChr7,0,0,0,0
ANM_SniBotTurn		anm1	GR90207_0001,3,0
			anm1	GR90207_0002,3,0
			anm1	GR90207_0003,3,0
			anm1	GR90207_0004,3,0
			anm1	GR90207_0005,3,0
			anm1	GR90207_0006,3,0
			anm1	GR90207_0007,3,0
			anm1	GR90207_0008,3,0
			anm1	GR90207_0009,3,0
			anm	AEnd

SniBotZeroANM		anmdef	ANM_SniBotZero,SniChr4,0,0,0,0
ANM_SniBotZero		anm1	GR90204,0,0
			anm	AEnd

SniBotHitANM		anmdef	ANM_SniBotHit,SniChr5,0,0,0,0
ANM_SniBotHit		anm1	GR90205_0001,3,0
			anm1	GR90205_0002,3,0
			anm1	GR90205_0003,3,0
			anm1	GR90205_0004,3,0
			anm1	GR90205_0005,3,0
			anm1	GR90205_0006,3,0
			anm1	GR90205_0007,3,0
			anm	AEnd

SniBotFireU2ANM		anmdef	ANM_SniBotFireU2,SniChr3c,0,0,0,0
ANM_SniBotFireU2	anm1	GR90203C_0001,2,0
			anm1	GR90203C_0002,2,0
			anm1	GR90203C_0003,2,0
			anm1	GR90203C_0004,2,0
			anm1	GR90203C_0005,2,0
			anm1	GR90203C_0006,2,0
			anm1	GR90203C_0007,2,0
			anm1	GR90203C_0008,2,0
			anm	AEnd
SniBotFireU1ANM		anmdef	ANM_SniBotFireU1,SniChr3b,0,0,0,0
ANM_SniBotFireU1	anm1	GR90203B_0001,2,0
			anm1	GR90203B_0002,2,0
			anm1	GR90203B_0003,2,0
			anm1	GR90203B_0004,2,0
			anm1	GR90203B_0005,2,0
			anm1	GR90203B_0006,2,0
			anm1	GR90203B_0007,2,0
			anm1	GR90203B_0008,2,0
			anm	AEnd

SniBotFireSANM		anmdef	ANM_SniBotFireS,SniChr3a,0,0,0,0
ANM_SniBotFireS		anm1	GR90203A_0001,2,0
			anm1	GR90203A_0002,2,0
			anm1	GR90203A_0003,2,0
			anm1	GR90203A_0004,2,0
			anm1	GR90203A_0005,2,0
			anm1	GR90203A_0006,2,0
			anm1	GR90203A_0007,2,0
			anm1	GR90203A_0008,2,0
			anm	AEnd

SniBotIdleANM		anmdef	ANM_SniBotIdle,SniChr6,0,0,0,0
ANM_SniBotIdle		anm1	GR90206_0001,3,0
			anm1	GR90206_0002,3,0
			anm1	GR90206_0003,3,0
			anm1	GR90206_0004,3,0
			anm1	GR90206_0005,3,0
			anm	AEnd

SniBotIdleOutANM 	anmdef	ANM_SniBotIdleOut,SniChr6,0,0,0,0
ANM_SniBotIdleOut	anm1	GR90206_0004,3,0
			anm1	GR90206_0003,3,0
			anm1	GR90206_0002,3,0
			anm1	GR90206_0001,3,0
			anm	AEnd

SniBotTrackU4ANM	anmdef	ANM_SniBotTrackU4,SniChr2a,0,0,0,0
ANM_SniBotTrackU4	anm1	GR90202A_0004,1,0
			anm	AEnd
SniBotTrackU3ANM	anmdef	ANM_SniBotTrackU3,SniChr2a,0,0,0,0
ANM_SniBotTrackU3	anm1	GR90202A_0003,1,0
			anm	AEnd
SniBotTrackU2ANM	anmdef	ANM_SniBotTrackU2,SniChr2a,0,0,0,0
ANM_SniBotTrackU2	anm1	GR90202A_0002,1,0
			anm	AEnd
SniBotTrackU1ANM	anmdef	ANM_SniBotTrackU1,SniChr2a,0,0,0,0
ANM_SniBotTrackU1	anm1	GR90202A_0001,1,0
			anm	AEnd

SniBotProj1ANM		anmdef	ANM_SniBotProj1,SniChr8,0,0,0,0
ANM_SniBotProj1		anm1	GR90208_0001,3,0
			anm1	GR90208_0002,3,0
			anm1	GR90208_0003,3,0
			anm1	GR90208_0004,3,0
			anm1	GR90208_0005,3,0
			anm1	GR90208_0006,3,0
			anm1	GR90208_0007,3,0
			anm1	GR90208_0008,3,0
			anm1	GR90208_0009,3,0
			anm1	GR90208_0010,3,0
			anm	ARep

SniBotGrabANM 		anmdef	ANM_SniBotGrab,SniChr9,0,0,0,0
ANM_SniBotGrab		anm1	GR90209_0001,3,0
			anm1	GR90209_0002,3,0
			anm1	GR90209_0003,3,0
			anm1	GR90209_0004,3,0
			anm1	GR90209_0005,3,0
			anm	AEnd

SniBotThrownANM 	anmdef	ANM_SniBotThrown,SniChr9,0,0,0,0
ANM_SniBotThrown	anm1	GR90209_0006,3,0
			anm1	GR90209_0007,3,0
			anm	AEnd

SniBotSlammedANM 	anmdef	ANM_SniBotSlammed,SniChr9,0,0,0,0
ANM_SniBotSlammed	anm1	GR90209_0006,3,0
			anm1	GR90209_0007,3,0
			anm	ALoop,ANM_SniBotSlammed,32
			anm	AEnd



; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ WASP BOT ANIMATION DATA						   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

WaspInc1		include	data\objects\waspbot\gr90301.Inc	
WaspInc3		include	data\objects\waspbot\gr90303.Inc	
WaspInc4		include	data\objects\waspbot\gr90304.Inc	
WaspInc5		include	data\objects\waspbot\gr90305.Inc	
WaspInc6		include	data\objects\waspbot\gr90306.Inc	
WaspInc7		include	data\objects\waspbot\gr90307.Inc	
WaspInc8		include	data\objects\waspbot\gr90308.Inc	
WaspInc10		include	data\objects\waspbot\gr90310.Inc	
WaspInc11		include	data\objects\waspbot\gr90311.Inc	

WaspBotHoverANM		anmdef	ANM_WaspBotHover,WaspChr1,0,0,0,0
ANM_WaspBotHover	anm1	GR90301_0001,3,0
			anm1	GR90301_0002,3,0
			anm1	GR90301_0003,3,0
			anm1	GR90301_0004,3,0
			anm1	GR90301_0005,3,0
			anm	ARep

WaspBotTurnANM		anmdef	ANM_WaspBotTurn,WaspChr3,0,0,0,0
ANM_WaspBotTurn		anm1	GR90303_0001,2,0
			anm1	GR90303_0002,2,0
			anm1	GR90303_0003,2,0
			anm1	GR90303_0004,2,0
			anm1	GR90303_0005,2,0
			anm1	GR90303_0006,2,0
			anm1	GR90303_0007,2,0
			anm1	GR90303_0008,2,0
			anm1	GR90303_0009,2,0
			anm	AEnd

WaspBotFlyToANM		anmdef	ANM_WaspBotFlyTo,WaspChr5,0,0,0,0
ANM_WaspBotFlyTo	anm1	GR90305_0001,3,0
			anm1	GR90305_0002,3,0
			anm1	GR90305_0003,3,0
			anm1	GR90305_0004,3,0
ANM_WBFT2		anm1	GR90305_0005,3,0
			anm1	GR90305_0006,3,0
			anm1	GR90305_0007,3,0
			anm	AJmp,ANM_WBFT2

WaspBotFlyToOutANM	anmdef	ANM_WaspBotFlyToOut,WaspChr5,0,0,0,0
ANM_WaspBotFlyToOut	anm1	GR90305_0007,2,0
			anm1	GR90305_0005,2,0
			anm1	GR90305_0003,2,0
			anm1	GR90305_0002,2,0
			anm1	GR90305_0001,2,0
			anm	AEnd
	
WaspBotTrack0ANM	anmdef	ANM_WaspBotTrack0,WaspChr5,0,0,0,0
ANM_WaspBotTrack0	anm1	GR90305_0001,3,0
			anm	AEnd
WaspBotTrack1ANM	anmdef	ANM_WaspBotTrack1,WaspChr5,0,0,0,0
ANM_WaspBotTrack1	anm1	GR90305_0002,3,0
			anm	AEnd
WaspBotTrack2ANM	anmdef	ANM_WaspBotTrack2,WaspChr5,0,0,0,0
ANM_WaspBotTrack2	anm1	GR90305_0003,3,0
			anm	AEnd
WaspBotTrack3ANM	anmdef	ANM_WaspBotTrack3,WaspChr5,0,0,0,0
ANM_WaspBotTrack3	anm1	GR90305_0004,3,0
			anm	AEnd
WaspBotTrack4ANM	anmdef	ANM_WaspBotTrack4,WaspChr5,0,0,0,0
ANM_WaspBotTrack4	anm1	GR90305_0005,3,0
			anm	AEnd


WaspBotFire0ANM		anmdef	ANM_WaspBotFire0,WaspChr6,0,0,0,0
ANM_WaspBotFire0	anm1	GR90306_0001,3,0
			anm1	GR90306_0002,3,0
			anm1	GR90306_0003,3,0
			anm1	GR90306_0004,3,0
			anm1	GR90306_0005,3,0
			anm1	GR90306_0006,3,0
			anm	AEnd
WaspBotFire1ANM		anmdef	ANM_WaspBotFire1,WaspChr6,0,0,0,0
ANM_WaspBotFire1	anm1	GR90306_0007,3,0
			anm1	GR90306_0008,3,0
			anm1	GR90306_0009,3,0
			anm1	GR90306_0010,3,0
			anm	AEnd
WaspBotFire2ANM		anmdef	ANM_WaspBotFire2,WaspChr6,0,0,0,0
ANM_WaspBotFire2	anm1	GR90306_0011,3,0
			anm1	GR90306_0012,3,0
			anm1	GR90306_0013,3,0
			anm1	GR90306_0014,3,0
			anm	AEnd

WaspBotHitANM		anmdef	ANM_WaspBotHit,WaspChr8,0,0,0,0
ANM_WaspBotHit		anm1	GR90308_0001,3,0
			anm1	GR90308_0002,3,0
			anm1	GR90308_0003,3,0
			anm1	GR90308_0004,3,0
			anm1	GR90308_0005,3,0
			anm	AEnd

WaspBotProj1ANM		anmdef	ANM_WaspBotProj1,WaspChr11,0,0,0,0
ANM_WaspBotProj1	anm1	GR90311_0001,3,0
			anm	AEnd
WaspBotProj2ANM		anmdef	ANM_WaspBotProj2,WaspChr11,0,0,0,0
ANM_WaspBotProj2	anm1	GR90311_0002,3,0
			anm	AEnd
WaspBotProj3ANM		anmdef	ANM_WaspBotProj3,WaspChr11,0,0,0,0
ANM_WaspBotProj3	anm1	GR90311_0003,3,0
			anm	AEnd
WaspBotProj4ANM		anmdef	ANM_WaspBotProj4,WaspChr10,0,0,0,0
ANM_WaspBotProj4	anm1	GR90310,3,0
			anm	AEnd

WaspBotStrafeANM 	anmdef	ANM_WaspBotStrafe,WaspChr4,0,0,0,0
ANM_WaspBotStrafe	anm1	GR90304_0001,3,0
			anm1	GR90304_0002,3,0
			anm1	GR90304_0003,3,0
			anm1	GR90304_0004,3,0
			anm1	GR90304_0005,3,0
			anm1	GR90304_0006,3,0
			anm	AVar1,1
ANM_WBS2		anm1	GR90304_0007,4,0
			anm	AVar2,1
			anm1	GR90304_0008,2,0
			anm1	GR90304_0009,4,0
			anm	AJmp,ANM_WBS2

WaspBotBackoffANM 	anmdef	ANM_WaspBotBackoff,WaspChr7,0,0,0,0
ANM_WaspBotBackoff	anm1	GR90307_0001,1,0
			anm1	GR90307_0001,1,0
			anm1	GR90307_0002,1,0
			anm	ALoop,ANM_WaspBotBackoff,8
			anm1	GR90307_0003,3,0
			anm1	GR90307_0004,3,0
			anm1	GR90307_0005,3,0
			anm	AEnd


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ SPIDER BOT ANIMATION DATA						   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

SpiInc1			include	data\objects\spidrbot\gr90101.Inc	
SpiInc2			include	data\objects\spidrbot\gr90102.Inc	
SpiInc3			include	data\objects\spidrbot\gr90103.Inc	
SpiInc4			include	data\objects\spidrbot\gr90104.Inc	
SpiInc6			include	data\objects\spidrbot\gr90106.Inc	
SpiInc7			include	data\objects\spidrbot\gr90107.Inc	
SpiInc8			include	data\objects\spidrbot\gr90108.Inc	
SpiInc10		include	data\objects\spidrbot\gr90110.Inc	
SpiInc11		include	data\objects\spidrbot\gr90111.Inc	
SpiInc12		include	data\objects\spidrbot\gr90112.Inc	
SpiInc13		include	data\objects\spidrbot\gr90113.Inc	
SpiInc14		include	data\objects\spidrbot\gr90114.Inc	
SpiInc15		include	data\objects\spidrbot\gr90115.Inc	
SpiInc16		include	data\objects\spidrbot\gr90116.Inc	
SpiInc17		include	data\objects\spidrbot\gr90117.Inc	
SpiInc18		include	data\objects\spidrbot\gr90118.Inc	

SpiBotWalkHorzANM 	anmdef	ANM_SpiBotWalkHorz,SpiChr2,0,0,0,0
ANM_SpiBotWalkHorz	anm1	GR90102_0001,2,0
			anm1	GR90102_0002,2,0
			anm1	GR90102_0003,2,0
			anm1	GR90102_0004,2,0
			anm1	GR90102_0005,2,0
			anm1	GR90102_0006,2,0
			anm1	GR90102_0007,2,0
			anm1	GR90102_0008,2,0
			anm1	GR90102_0009,2,0
			anm1	GR90102_0010,2,0
			anm	ARep

SpiBotIdleANM 		anmdef	ANM_SpiBotIdle,SpiChr2,0,0,0,0
ANM_SpiBotIdle		anm1	GR90102_0005,2,0
			anm	AEnd

SpiBotTrans2WallANM 	anmdef	ANM_SpiBotTrans2Wall,SpiChr4,0,0,0,0
ANM_SpiBotTrans2Wall	anm1	GR90104_0001,3,0
			anm1	GR90104_0002,3,0
			anm1	GR90104_0003,3,0
			anm1	GR90104_0004,3,0
			anm1	GR90104_0005,3,0
			anm1	GR90104_0006,3,0
			anm1	GR90104_0007,3,0
			anm	AEnd

SpiBotTrans2WallUpANM 	anmdef	ANM_SpiBotTrans2WallUp,SpiChr18,0,0,0,0
ANM_SpiBotTrans2WallUp	anm1	GR90118_0001,3,0
			anm1	GR90118_0002,3,0
			anm1	GR90118_0003,3,0
			anm1	GR90118_0004,3,0
			anm1	GR90118_0005,3,0
			anm1	GR90118_0006,3,0
			anm1	GR90118_0007,3,0
			anm1	GR90118_0008,3,0
			anm1	GR90118_0009,3,0
			anm1	GR90118_0010,3,0
			anm	AEnd

SpiBotTrans2FloorANM 	anmdef	ANM_SpiBotTrans2Floor,SpiChr3,0,0,0,0
ANM_SpiBotTrans2Floor	anm1	GR90103_0001,3,0
			anm1	GR90103_0002,3,0
			anm1	GR90103_0003,3,0
			anm1	GR90103_0004,3,0
			anm1	GR90103_0005,3,0
			anm1	GR90103_0006,3,0
			anm1	GR90103_0007,3,0
			anm	AEnd

SpiBotTrans2FloorUpANM 	anmdef	ANM_SpiBotTrans2FloorUp,SpiChr8,0,0,0,0
ANM_SpiBotTrans2FloorUp	anm1	GR90108_0001,3,0
			anm1	GR90108_0002,3,0
			anm1	GR90108_0003,3,0
			anm1	GR90108_0004,3,0
			anm1	GR90108_0005,3,0
			anm1	GR90108_0006,3,0
			anm1	GR90108_0007,3,0
			anm1	GR90108_0008,3,0
			anm1	GR90108_0009,3,0
			anm1	GR90108_0010,3,0
			anm	AEnd

SpiBotWalkVertANM 	anmdef	ANM_SpiBotWalkVert,SpiChr1,0,0,0,0
ANM_SpiBotWalkVert	anm1	GR90101_0001,3,0
			anm1	GR90101_0002,3,0
			anm1	GR90101_0003,3,0
			anm1	GR90101_0004,3,0
			anm1	GR90101_0005,3,0
			anm1	GR90101_0006,3,0
			anm1	GR90101_0007,3,0
			anm1	GR90101_0008,3,0
			anm1	GR90101_0009,3,0
			anm1	GR90101_0010,3,0
			anm	ARep

SpiBotTurnHorzANM 	anmdef	ANM_SpiBotTurnHorz,SpiChr11,0,0,0,0
ANM_SpiBotTurnHorz	anm1	GR90111_0001,3,0
			anm1	GR90111_0002,3,0
			anm1	GR90111_0003,3,0
			anm1	GR90111_0004,3,0
			anm1	GR90111_0005,3,0
			anm1	GR90111_0006,3,0
			anm	AEnd

SpiBotTurnVertANM 	anmdef	ANM_SpiBotTurnVert,SpiChr12,0,0,0,0
ANM_SpiBotTurnVert	anm1	GR90112_0001,3,0
			anm1	GR90112_0002,3,0
			anm1	GR90112_0003,3,0
			anm1	GR90112_0004,3,0
			anm1	GR90112_0005,3,0
			anm1	GR90112_0006,3,0
			anm	AEnd

SpiBotFireHorzANM	anmdef	ANM_SpiBotFireHorz,SpiChr7,0,0,0,0
ANM_SpiBotFireHorz	anm1	GR90107_0001,3,0
			anm1	GR90107_0002,3,0
			anm1	GR90107_0003,3,0
ANM_sbfh1		anm1	GR90107_0004,3,0
			anm1	GR90107_0005,3,0
			anm1	GR90107_0006,3,0
			anm	ALoop,ANM_sbfh1,4
			anm	AVar1,1
			anm1	GR90107_0007,3,0
			anm	AEnd

SpiBotHorzProjANM	anmdef	ANM_SpiBotHorzProj,SpiChr17,0,0,0,0
ANM_SpiBotHorzProj	anm1	GR90117_0001,3,0
			anm1	GR90117_0002,3,0
			anm1	GR90117_0003,3,0
			anm1	GR90117_0004,3,0
			anm1	GR90117_0005,3,0
			anm1	GR90117_0006,3,0
			anm1	GR90117_0007,3,0
			anm1	GR90117_0008,3,0
			anm	ARep

SpiBotFireVertANM	anmdef	ANM_SpiBotFireVert,SpiChr6,0,0,0,0
ANM_SpiBotFireVert	anm1	GR90106_0001,3,0
			anm1	GR90106_0002,3,0
			anm1	GR90106_0003,3,0
ANM_sbfv1		anm1	GR90106_0004,3,0
			anm1	GR90106_0005,3,0
			anm1	GR90106_0006,3,0
			anm	ALoop,ANM_sbfv1,4
			anm	AVar1,1
			anm1	GR90106_0007,3,0
			anm	AEnd

SpiBotVertProjANM	anmdef	ANM_SpiBotVertProj,SpiChr16,0,0,0,0
ANM_SpiBotVertProj	anm1	GR90116_0001,3,0
			anm1	GR90116_0002,3,0
			anm1	GR90116_0003,3,0
			anm1	GR90116_0004,3,0
			anm1	GR90116_0005,3,0
			anm1	GR90116_0006,3,0
			anm1	GR90116_0007,3,0
			anm1	GR90116_0008,3,0
			anm	ARep

SpiBotGrabbedANM	anmdef	ANM_SpiBotGrabbed,SpiChr10,0,0,0,0
ANM_SpiBotGrabbed	anm1	GR90110_0001,2,0
			anm1	GR90110_0002,2,0
			anm1	GR90110_0003,2,0
			anm1	GR90110_0004,2,0
			anm1	GR90110_0005,2,0
			anm1	GR90110_0006,2,0
			anm	AEnd

SpiBotThrownANM 	anmdef	ANM_SpiBotThrown,SpiChr10,0,0,0,0
ANM_SpiBotThrown	anm1	GR90110_0007,3,0
			anm	AEnd

SpiBotSlammedANM 	anmdef	ANM_SpiBotSlammed,SpiChr10,0,0,0,0
ANM_SpiBotSlammed	anm1	GR90110_0009,3,0
			anm1	GR90110_0010,3,0
			anm1	GR90110_0011,3,0
			anm	ALoop,ANM_SpiBotSlammed,16
			anm	AEnd

SpiBotThrownLandANM	anmdef	ANM_SpiBotThrownLand,SpiChr10,0,0,0,0
ANM_SpiBotThrownLand	anm1	GR90110_0008,4,0
			anm1	GR90110_0009,4,0
			anm1	GR90110_0010,4,0
			anm1	GR90110_0011,4,0
			anm	ARep

SpiBotThrownPRANM	anmdef	ANM_SpiBotThrownPR,SpiChr10,0,0,0,0
ANM_SpiBotThrownPR	anm1	GR90110_0009,5,0
			anm1	GR90110_0010,5,0
			anm1	GR90110_0011,5,0
			anm	ALoop,ANM_SpiBotThrownPR,4
			anm	AEnd
SpiBotThrownRecoverANM	anmdef	ANM_SpiBotThrownRecover,SpiChr13,0,0,0,0
ANM_SpiBotThrownRecover	anm1	GR90113_0001,3,0
			anm1	GR90113_0002,3,0
			anm1	GR90113_0003,3,0
			anm1	GR90113_0004,3,0
			anm1	GR90113_0005,3,0
			anm1	GR90113_0006,3,0
			anm1	GR90113_0007,3,0
			anm1	GR90113_0008,3,0
			anm1	GR90113_0009,3,0
			anm1	GR90113_0010,3,0
			anm	AEnd


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ PLASMA HAMMER ROBOT ANIMATION DATA					   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

PlasInc1		include	data\objects\plasma\gr90601.Inc
PlasInc2		include	data\objects\plasma\gr90602.Inc
PlasInc3		include	data\objects\plasma\gr90603.Inc
PlasInc4		include	data\objects\plasma\gr90604.Inc
PlasInc5		include	data\objects\plasma\gr90605.Inc
PlasInc6		include	data\objects\plasma\gr90606.Inc
PlasInc7		include	data\objects\plasma\gr90607.Inc
PlasInc8		include	data\objects\plasma\gr90608.Inc
PlasInc9		include	data\objects\plasma\gr90609.Inc
PlasInc10		include	data\objects\plasma\gr90610.Inc
PlasInc11		include	data\objects\plasma\gr90611.Inc

PlasmaWalkANM		anmdef	ANM_PlasmaWalk,PlasChr1,0,0,0,0
ANM_PlasmaWalk		anm	AVar1,1
			anm1	GR90601_0001,3,0
			anm1	GR90601_0002,3,0
			anm1	GR90601_0003,3,0
			anm1	GR90601_0004,3,0
			anm1	GR90601_0005,3,0
			anm1	GR90601_0006,3,0
			anm1	GR90601_0007,3,0
			anm1	GR90601_0008,3,0
			anm	AVar1,1
			anm1	GR90601_0009,3,0
			anm1	GR90601_0010,3,0
			anm1	GR90601_0011,3,0
			anm1	GR90601_0012,3,0
			anm1	GR90601_0013,3,0
			anm1	GR90601_0014,3,0
			anm1	GR90601_0015,3,0
			anm1	GR90601_0016,3,0
			anm	ARep
PlasmaWalkToANM		anmdef	ANM_PlasmaWalkTo,PlasChr1,0,0,0,0
ANM_PlasmaWalkTo	anm	AVar1,1
			anm1	GR90601_0001,2,0
			anm1	GR90601_0002,2,0
			anm1	GR90601_0003,2,0
			anm1	GR90601_0004,2,0
			anm1	GR90601_0005,2,0
			anm1	GR90601_0006,2,0
			anm1	GR90601_0007,2,0
			anm1	GR90601_0008,2,0
			anm	AVar1,1
			anm1	GR90601_0009,2,0
			anm1	GR90601_0010,2,0
			anm1	GR90601_0011,2,0
			anm1	GR90601_0012,2,0
			anm1	GR90601_0013,2,0
			anm1	GR90601_0014,2,0
			anm1	GR90601_0015,2,0
			anm1	GR90601_0016,2,0
			anm	ARep
PlasmaBackoffANM	anmdef	ANM_PlasmaBackoff,PlasChr1,0,0,0,0
ANM_PlasmaBackoff	anm1	GR90601_0016,2,0
			anm1	GR90601_0015,2,0
			anm1	GR90601_0014,2,0
			anm1	GR90601_0013,2,0
			anm1	GR90601_0012,2,0
			anm1	GR90601_0011,2,0
			anm1	GR90601_0010,2,0
			anm	AVar1,1
			anm1	GR90601_0009,2,0
			anm1	GR90601_0008,2,0
			anm1	GR90601_0007,2,0
			anm1	GR90601_0006,2,0
			anm1	GR90601_0005,2,0
			anm1	GR90601_0004,2,0
			anm1	GR90601_0003,2,0
			anm1	GR90601_0002,2,0
			anm	AVar1,1
			anm1	GR90601_0001,2,0
			anm	AEnd

PlasmaIdleANM		anmdef	ANM_PlasmaIdle,PlasChr8,0,0,0,0
ANM_PlasmaIdle		anm1	GR90608_0001,3,0
			anm1	GR90608_0002,3,0
			anm1	GR90608_0003,3,0
			anm	AEnd
PlasmaIdleOutANM 	anmdef	ANM_PlasmaIdleOut,PlasChr8,0,0,0,0
ANM_PlasmaIdleOut	anm1	GR90608_0004,3,0
			anm1	GR90608_0005,3,0
			anm	AEnd

PlasmaStopANM		anmdef	ANM_PlasmaStop,PlasChr3,0,0,0,0
ANM_PlasmaStop		anm1	GR90603_0001,3,0
			anm1	GR90603_0002,3,0
			anm1	GR90603_0003,4,0
			anm1	GR90603_0004,4,0
			anm1	GR90603_0005,8,0
			anm	AEnd

PlasmaTurnANM		anmdef	ANM_PlasmaTurn,PlasChr2,0,0,0,0
ANM_PlasmaTurn		anm1	GR90602_0001,4,0
			anm1	GR90602_0002,4,0
			anm1	GR90602_0003,4,0
			anm1	GR90602_0004,4,0
			anm1	GR90602_0005,8,0
			anm	AEnd

PlasmaQuickStrikeANM	anmdef	ANM_PlasmaQuickStrike,PlasChr6,0,0,0,0
ANM_PlasmaQuickStrike	anm1	GR90606_0001,3,0
			anm1	GR90606_0002,3,0
			anm1	GR90606_0003,3,0
			anm1	GR90606_0004,3,0
			anm	AVar1,1
			anm1	GR90606_0005,3,0
			anm1	GR90606_0006,3,0
			anm1	GR90606_0007,3,0
			anm1	GR90606_0008,3,0
			anm	AEnd

PlasmaBigStrikeANM	anmdef	ANM_PlasmaBigStrike,PlasChr9,0,0,0,0
ANM_PlasmaBigStrike	anm1	GR90609_0001,3,0
			anm1	GR90609_0002,3,0
			anm	AVar1,1
			anm1	GR90609_0003,3,0
			anm1	GR90609_0004,3,0
			anm1	GR90609_0005,3,0
			anm1	GR90609_0006,3,0
			anm1	GR90609_0007,3,0
			anm1	GR90609_0008,3,0
			anm1	GR90609_0009,12,0
			anm1	GR90609_0010,3,0
			anm1	GR90609_0011,3,0
			anm1	GR90609_0012,3,0
			anm	AEnd

PlasmaThrowBallANM	anmdef	ANM_PlasmaThrowBall,PlasChr7,0,0,0,0
ANM_PlasmaThrowBall	anm1	GR90607_0001,3,0
			anm1	GR90607_0002,3,0
			anm1	GR90607_0003,3,0
			anm	AVar1,1
			anm1	GR90607_0004,3,0
			anm1	GR90607_0005,3,0
			anm1	GR90607_0006,3,0
			anm1	GR90607_0007,3,0
			anm1	GR90607_0008,3,0
			anm	AEnd

PlasmaHitANM		anmdef	ANM_PlasmaHit,PlasChr4,0,0,0,0
ANM_PlasmaHit		anm1	GR90604_0001,3,0
			anm1	GR90604_0002,3,0
			anm1	GR90604_0003,3,0
			anm1	GR90604_0004,3,0
			anm1	GR90604_0005,3,0
			anm	AEnd

PlasmaDeathLegsANM 	anmdef	ANM_PlasmaDeathLegs,PlasChr5,0,0,0,0
ANM_PlasmaDeathLegs	anm1	GR90605_0001,4,0
			anm1	GR90605_0002,4,0
			anm	AEnd
PlasmaDeathHeadANM 	anmdef	ANM_PlasmaDeathHead,PlasChr5,0,0,0,0
ANM_PlasmaDeathHead	anm1	GR90605_0003,8,0
			anm1	GR90605_0004,8,0
			anm1	GR90605_0005,8,0
			anm1	GR90605_0004,8,0
			anm1	GR90605_0005,8,0
			anm1	GR90605_0004,8,0
			anm1	GR90605_0005,8,0
			anm1	GR90605_0004,8,0
			anm1	GR90605_0005,8,0
			anm	AEnd

PlasmaBallHeadANM 	anmdef	ANM_PlasmaBallHead,PlasChr10,0,0,0,0
ANM_PlasmaBallHead	anm1	GR90610_0001,2,0
			anm1	GR90610_0002,2,0
			anm1	GR90610_0003,2,0
			anm1	GR90610_0004,2,0
			anm1	GR90610_0005,2,0
			anm	ARep
PlasmaBallTailANM	anmdef	ANM_PlasmaBallTail,PlasChr11,0,0,0,0
ANM_PlasmaBallTail	anm1	GR90611_0001,1,0
			anm1	GR90611_0002,1,0
			anm1	GR90611_0003,1,0
			anm1	GR90611_0004,1,0
			anm1	GR90611_0005,1,0
			anm1	GR90611_0006,1,0
			anm	AEnd


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ MORNING STAR VIKING ANIMATION DATA					   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

MornInc2		include	data\objects\mornstar\gv0302.Inc	
MornInc3		include	data\objects\mornstar\gv0303.Inc	
MornInc4		include	data\objects\mornstar\gv0304.Inc	
MornInc5		include	data\objects\mornstar\gv0305.Inc	
MornInc6		include	data\objects\mornstar\gv0306.Inc	
MornInc7		include	data\objects\mornstar\gv0307.Inc	
MornInc8		include	data\objects\mornstar\gv0308.Inc	


MornStarGroundZeroANM	anmdef	ANM_MornStarGroundZero,MornChr8,0,0,0,0
ANM_MornStarGroundZero	anm1	GV0308_0001,16,0
			anm	AEnd
			
MornStarIdleANM		anmdef	ANM_MornStarIdle,MornChr8,0,0,0,0
ANM_MornStarIdle	anm1	GV0308_0001,5,0
			anm1	GV0308_0002,5,0
			anm1	GV0308_0003,24,0
			anm1	GV0308_0002,5,0
			anm1	GV0308_0001,16,0
			anm	AEnd

MornStarWalkANM		anmdef	ANM_MornStarWalk,MornChr3,0,0,0,0
ANM_MornStarWalk	anm1	GV0303_0001,2,0
			anm1	GV0303_0002,2,0
			anm1	GV0303_0003,2,0
			anm1	GV0303_0004,2,0
			anm1	GV0303_0005,2,0
			anm1	GV0303_0006,2,0
			anm1	GV0303_0007,2,0
			anm1	GV0303_0008,2,0
			anm1	GV0303_0009,2,0
			anm1	GV0303_0010,2,0
			anm1	GV0303_0011,2,0
			anm1	GV0303_0012,2,0
			anm	ARep

MornStarTurnANM		anmdef	ANM_MornStarTurn,MornChr7,0,0,0,0
ANM_MornStarTurn	anm1	GV0307_0001,2,0
			anm1	GV0307_0002,3,0
			anm1	GV0307_0003,4,0
			anm1	GV0307_0004,3,0
			anm1	GV0307_0005,2,0
			anm	AEnd

MornStarAttackANM 	anmdef	ANM_MornStarAttack,MornChr4,0,0,0,0
ANM_MornStarAttack	anm1	GV0304_0001,3,0
			anm1	GV0304_0002,3,0
			anm1	GV0304_0003,3,0
			anm1	GV0304_0004,3,0
			anm1	GV0304_0005,3,0
			anm	AVar2,1
			anm1	GV0304_0006,3,0
			anm1	GV0304_0007,3,0
			anm1	GV0304_0008,3,0
			anm1	GV0304_0009,3,0
			anm1	GV0304_0010,3,0
			anm1	GV0304_0011,3,0
			anm	AVar2,1
			anm1	GV0304_0012,3,0
			anm1	GV0304_0013,3,0
			anm1	GV0304_0014,3,0
			anm1	GV0304_0015,3,0
			anm	AVar1,1
			anm1	GV0304_0016,3,0
			anm1	GV0304_0015,3,0
			anm1	GV0304_0014,3,0
			anm1	GV0304_0013,3,0
			anm	AVar2,1
			anm1	GV0304_0012,3,0
			anm1	GV0304_0011,3,0
			anm1	GV0304_0010,3,0
			anm1	GV0304_0009,3,0
			anm1	GV0304_0008,3,0
			anm1	GV0304_0007,3,0
			anm	AVar2,1
			anm1	GV0304_0006,3,0
			anm1	GV0304_0005,3,0
			anm1	GV0304_0004,3,0
			anm1	GV0304_0003,3,0
			anm1	GV0304_0002,3,0
			anm1	GV0304_0001,3,0
			anm	AEnd

MornStarHitANM 		anmdef	ANM_MornStarHit,MornChr5,0,0,0,0
ANM_MornStarHit		anm1	GV0305_0001,8,0
			anm1	GV0305_0002,3,0
			anm1	GV0305_0003,3,0
			anm	AEnd

MornStarGrabANM 	anmdef	ANM_MornStarGrab,MornChr6,0,0,0,0
ANM_MornStarGrab	anm1	GV0306_0001,3,0
			anm1	GV0306_0002,3,0
			anm1	GV0306_0003,3,0
			anm1	GV0306_0004,3,0
			anm	AEnd

MornStarThrownANM 	anmdef	ANM_MornStarThrown,MornChr6,0,0,0,0
ANM_MornStarThrown	anm1	GV0306_0005,3,0
			anm	AEnd

MornStarThrownLandANM 	anmdef	ANM_MornStarThrownLand,MornChr2,0,0,0,0
ANM_MornStarThrownLand	anm1	GV0302_0007,5,0
			anm1	GV0302_0008,5,0
			anm1	GV0302_0009,5,0
			anm1	GV0302_0010,5,0
			anm	AEnd

MornStarSlammedANM 	anmdef	ANM_MornStarSlammed,MornChr2,0,0,0,0
ANM_MornStarSlammed	anm1	GV0302_0007,4,0
			anm1	GV0302_0008,5,0
			anm1	GV0302_0009,6,0
			anm1	GV0302_0010,6,0
			anm	AEnd

MornStarDeadANM 	anmdef	ANM_MornStarDead,MornChr2,0,0,0,0
ANM_MornStarDead	anm1	GV0302_0001,2,0
			anm1	GV0302_0002,2,0
			anm1	GV0302_0003,2,0
			anm1	GV0302_0004,2,0
			anm1	GV0302_0005,3,0
			anm1	GV0302_0006,3,0
			anm1	GV0302_0007,5,0
			anm1	GV0302_0008,5,0
			anm1	GV0302_0009,5,0
			anm1	GV0302_0010,5,0
			anm	AEnd


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ VIKING ARCHER ANIMATION DATA					   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

ArcherInc2		include	data\objects\archer\gv0202.Inc	
ArcherInc3		include	data\objects\archer\gv0203.Inc	
ArcherInc4		include	data\objects\archer\gv0204.Inc	
ArcherInc5		include	data\objects\archer\gv0205.Inc	
ArcherInc6		include	data\objects\archer\gv0206.Inc	
ArcherInc12		include	data\objects\archer\gv0212.Inc	
ArcherInc13		include	data\objects\archer\gv0213.Inc	
ArcherInc14		include	data\objects\archer\gv0214.Inc	
ArcherInc15		include	data\objects\archer\gv0215.Inc	
ArcherInc16		include	data\objects\archer\gv0216.Inc	

ArcherIdleANM 		anmdef	ANM_ArcherIdle,ArcherChr15,0,0,0,0
ANM_ArcherIdle		anm1	GV0215_0001,3,0
			anm1	GV0215_0002,3,0
			anm1	GV0215_0003,3,0
			anm1	GV0215_0004,3,0
			anm1	GV0215_0005,3,0
			anm	AEnd

ArcherShootUpANM 	anmdef	ANM_ArcherShootUp,ArcherChr13,0,0,0,0
ANM_ArcherShootUp	anm1	GV0213_0001,4,0
			anm1	GV0213_0002,4,0
			anm1	GV0213_0003,4,0
			anm	AVar1,1
			anm1	GV0213_0004,6,0
			anm1	GV0213_0005,4,0
			anm	AEnd

ArcherShootDownANM 	anmdef	ANM_ArcherShootDown,ArcherChr14,0,0,0,0
ANM_ArcherShootDown	anm1	GV0214_0001,4,0
			anm1	GV0214_0002,4,0
			anm1	GV0214_0003,4,0
			anm	AVar1,1
			anm1	GV0214_0004,8,0
			anm	AEnd

ArcherShootStrANM 	anmdef	ANM_ArcherShootStr,ArcherChr12,0,0,0,0
ANM_ArcherShootStr	anm	AVar1,1
			anm1	GV0212_0001,6,0
			anm1	GV0212_0002,8,0
			anm	AEnd

ArcherReloadANM 	anmdef	ANM_ArcherReload,ArcherChr16,0,0,0,0
ANM_ArcherReload	anm1	GV0216_0001,3,0
			anm1	GV0216_0002,3,0
			anm1	GV0216_0003,3,0
			anm1	GV0216_0004,3,0
			anm1	GV0216_0005,3,0
			anm1	GV0216_0006,3,0
			anm1	GV0216_0007,3,0
			anm1	GV0216_0008,3,0
			anm1	GV0216_0009,3,0
			anm1	GV0216_0010,3,0
			anm1	GV0216_0011,3,0
			anm1	GV0216_0012,3,0
			anm	AEnd

ArcherHitANM 		anmdef	ANM_ArcherHit,ArcherChr2,0,0,0,0
ANM_ArcherHit		anm1	GV0202_0001,3,0
			anm1	GV0202_0002,3,0
			anm1	GV0202_0003,3,0
			anm1	GV0202_0004,3,0
			anm	AEnd

ArcherDeadANM	 	anmdef	ANM_ArcherDead,ArcherChr3,0,0,0,0
ANM_ArcherDead		anm1	GV0203_0001,3,0
			anm1	GV0203_0002,3,0
			anm1	GV0203_0003,3,0
			anm1	GV0203_0004,3,0
			anm	AEnd

ArcherGrabANM	 	anmdef	ANM_ArcherGrab,ArcherChr4,0,0,0,0
ANM_ArcherGrab		anm1	GV0204_0004,1,0
			anm1	GV0204_0005,3,0
			anm1	GV0204_0006,3,0
			anm1	GV0204_0007,3,0
			anm	AEnd

ArcherThrownANM	 	anmdef	ANM_ArcherThrown,ArcherChr4,0,0,0,0
ANM_ArcherThrown	anm1	GV0204_0008,3,0
			anm	AEnd

ArcherThrownFallANM  	anmdef	ANM_ArcherThrownFall,ArcherChr3,0,0,0,0
ANM_ArcherThrownFall	anm1	GV0203_0001,6,0
			anm1	GV0203_0002,6,0
			anm	ARep

ArcherThrownLandANM	anmdef	ANM_ArcherThrownLand,ArcherChr3,0,0,0,0
ANM_ArcherThrownLand	anm1	GV0203_0001,3,0
			anm1	GV0203_0002,3,0
			anm1	GV0203_0003,3,0
			anm1	GV0203_0004,3,0
			anm	AEnd

ArcherSlammedANM	anmdef	ANM_ArcherSlammed,ArcherChr3,0,0,0,0
ANM_ArcherSlammed	anm1	GV0203_0003,3,0
			anm1	GV0203_0004,3,0
			anm	AEnd
			
ArrowUpANM		anmdef	ANM_ArrowUp,ArcherChr6,0,0,0,0
ANM_ArrowUp		anm1	GV0206_0001,0,0
			anm	AEnd
ArrowDownANM		anmdef	ANM_ArrowDown,ArcherChr6,0,0,0,0
ANM_ArrowDown		anm1	GV0206_0001,0,%00000010
			anm	AEnd
ArrowUpDnSmashANM	anmdef	ANM_ArrowUpDnSmash,ArcherChr6,0,0,0,0
ANM_ArrowUpDnSmash	anm1	GV0206_0002,3,0
			anm1	GV0206_0003,3,0
			anm	AEnd

ArrowStraightANM 	anmdef	ANM_ArrowStraight,ArcherChr5,0,0,0,0
ANM_ArrowStraight	anm1	GV0205_0001,0,0
			anm	AEnd
ArrowStraightSmashANM 	anmdef	ANM_ArrowStraightSmash,ArcherChr5,0,0,0,0
ANM_ArrowStraightSmash	anm1	GV0205_0002,3,0
			anm1	GV0205_0003,3,0
			anm	AEnd


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ VALKYRIE ANIMATION DATA						   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

ValkyrieInc3		include	data\objects\valkyrie\gv0403.Inc	
ValkyrieInc4		include	data\objects\valkyrie\gv0404.Inc	
ValkyrieInc6		include	data\objects\valkyrie\gv0406.Inc	
ValkyrieInc7		include	data\objects\valkyrie\gv0407.Inc	
ValkyrieInc8		include	data\objects\valkyrie\gv0408.Inc	
ValkyrieInc9		include	data\objects\valkyrie\gv0409.Inc	
ValkyrieInc10		include	data\objects\valkyrie\gv0410.Inc	
ValkyrieInc11		include	data\objects\valkyrie\gv0411.Inc	
ValkyrieInc12		include	data\objects\valkyrie\gv0412.Inc	


ValkIdleANM 		anmdef	ANM_ValkIdle,ValkyrieChr4,0,0,0,0
ANM_ValkIdle		anm1	GV0404_0001,5,0
			anm1	GV0404_0002,5,0
			anm1	GV0404_0003,24,0
			anm1	GV0404_0002,5,0
			anm1	GV0404_0001,16,0
			anm	ARep

ValkAxeThrowANM 	anmdef	ANM_ValkAxeThrow,ValkyrieChr9,0,0,0,0
ANM_ValkAxeThrow	anm1	GV0409_0001,3,0
			anm1	GV0409_0002,3,0
			anm1	GV0409_0003,3,0
			anm	AVar1,1
			anm1	GV0409_0004,3,0
			anm1	GV0409_0005,3,0
			anm1	GV0409_0006,3,0
			anm	AEnd

ValkAxeCatchANM 	anmdef	ANM_ValkAxeCatch,ValkyrieChr9,0,0,0,0
ANM_ValkAxeCatch	anm1	GV0409_0007,3,0
			anm	AEnd

ValkTurnANM 		anmdef	ANM_ValkTurn,ValkyrieChr10,0,0,0,0
ANM_ValkTurn		anm1	GV0410_0001,3,0
			anm1	GV0410_0002,3,0
			anm1	GV0410_0003,3,0
			anm1	GV0410_0004,3,0
			anm1	GV0410_0005,3,0
			anm1	GV0410_0006,3,0
			anm	AEnd

ValkAttackFromIdleANM 	anmdef	ANM_ValkAttackFromIdle,ValkyrieChr7,0,0,0,0
ANM_ValkAttackFromIdle	anm1	GV0407_0001,3,0
			anm1	GV0407_0002,3,0
			anm1	GV0407_0003,3,0
			anm1	GV0407_0004,8,0
			anm1	GV0407_0005,4,0
			anm1	GV0407_0006,4,0
			anm1	GV0407_0005,4,0
			anm1	GV0407_0006,4,0
			anm1	GV0407_0005,4,0
			anm1	GV0407_0006,4,0
			anm1	GV0407_0007,3,0
			anm1	GV0407_0008,3,0
			anm1	GV0407_0009,8,0
			anm	AEnd

ValkShieldANM 		anmdef	ANM_ValkShield,ValkyrieChr4,0,0,0,0
ANM_ValkShield		anm1	GV0404_0001,3,0
			anm1	GV0404_0002,3,0
			anm1	GV0404_0003,3,0
			anm1	GV0404_0004,3,0
			anm1	GV0404_0005,3,0
			anm	AEnd

ValkShieldOutANM 	anmdef	ANM_ValkShieldOut,ValkyrieChr4,0,0,0,0
ANM_ValkShieldOut	anm1	GV0404_0005,2,0
			anm1	GV0404_0004,2,0
			anm1	GV0404_0003,2,0
			anm1	GV0404_0002,2,0
			anm1	GV0404_0001,8,0
			anm	AEnd

ValkShieldAttackANM	anmdef	ANM_ValkShieldAttack,ValkyrieChr6,0,0,0,0
ANM_ValkShieldAttack	anm1	GV0406_0001,3,0
			anm1	GV0406_0002,3,0
			anm1	GV0406_0003,6,0
			anm1	GV0406_0004,3,0
			anm1	GV0406_0005,3,0
			anm	AEnd

ValkHitByHawkDiveANM 	anmdef	ANM_ValkHitByHawkDive,ValkyrieChr3,0,0,0,0
ANM_ValkHitByHawkDive	anm1	GV0403_0001,1,0
			anm1	GV0403_0002,1,0
			anm1	GV0403_0003,3,0
			anm1	GV0403_0004,6,0
			anm1	GV0403_0005,3,0
			anm	AEnd

ValkHitANM	 	anmdef	ANM_ValkHit,ValkyrieChr11,0,0,0,0
ANM_ValkHit		anm1	GV0411_0001,16,0
			anm1	GV0411_0002,3,0
			anm1	GV0411_0003,3,0
			anm1	GV0411_0004,3,0
			anm1	GV0411_0005,3,0
			anm	AEnd

ValkDeadANM	 	anmdef	ANM_ValkDead,ValkyrieChr8,0,0,0,0
ANM_ValkDead		anm1	GV0408_0001,3,0
			anm1	GV0408_0002,3,0
			anm1	GV0408_0003,3,0
			anm1	GV0408_0004,3,0
			anm1	GV0408_0005,3,0
			anm1	GV0408_0006,3,0
			anm1	GV0408_0007,3,0
			anm1	GV0408_0008,3,0
			anm1	GV0408_0009,3,0
			anm1	GV0408_0010,3,0
			anm1	GV0408_0011,3,0
			anm1	GV0408_0012,3,0
			anm	AEnd

ValkHelmetANM	 	anmdef	ANM_ValkHelmet,ValkyrieChr8,0,0,0,0
ANM_ValkHelmet		anm1	GV0408_0013,3,0
			anm	AEnd

ValkFallANM	 	anmdef	ANM_ValkFall,ValkyrieChr8,0,0,0,0
ANM_ValkFall		anm1	GV0408_0001,3,0
			anm1	GV0408_0002,3,0
			anm1	GV0408_0003,3,0
			anm	AEnd

ValkAxeANM	 	anmdef	ANM_ValkAxe,ValkyrieChr12,0,0,0,0
ANM_ValkAxe		anm1	GV0412_0001,1,%00000001
			anm1	GV0412_0002,1,0
			anm1	GV0412_0003,1,0
			anm1	GV0412_0004,1,0
			anm1	GV0412_0003,1,%00000010
			anm1	GV0412_0002,1,0
			anm1	GV0412_0001,1,0
			anm1	GV0412_0002,1,%00000001
			anm1	GV0412_0003,1,0
			anm1	GV0412_0004,1,0
			anm1	GV0412_0003,1,%00000010
			anm1	GV0412_0002,1,0
			anm	ARep

ValkGrabANM	 	anmdef	ANM_ValkGrab,ValkyrieChr8,0,0,0,0
ANM_ValkGrab		anm1	GV0408_0001,3,0
			anm1	GV0408_0002,3,0
			anm1	GV0408_0003,3,0
			anm	AEnd

ValkThrownANM	 	anmdef	ANM_ValkThrown,ValkyrieChr8,0,0,0,0
ANM_ValkThrown		anm1	GV0408_0004,3,0
			anm	AEnd

ValkThrownFallANM  	anmdef	ANM_ValkThrownFall,ValkyrieChr8,0,0,0,0
ANM_ValkThrownFall	anm1	GV0408_0004,3,0
			anm	ARep

ValkThrownLandANM	anmdef	ANM_ValkThrownLand,ValkyrieChr8,0,0,0,0
ANM_ValkThrownLand	anm1	GV0408_0005,3,0
			anm1	GV0408_0006,3,0
			anm1	GV0408_0007,3,0
			anm1	GV0408_0008,3,0
			anm1	GV0408_0009,3,0
			anm1	GV0408_0010,3,0
			anm1	GV0408_0011,3,0
			anm1	GV0408_0012,3,0
			anm	AEnd

ValkBurnANM		anmdef	ANM_ValkBurn,ValkyrieChr8,0,0,0,0
ANM_ValkBurn		anm1	GV0408_0009,3,0
			anm1	GV0408_0010,3,0
			anm1	GV0408_0011,3,0
			anm1	GV0408_0012,3,0
			anm	AEnd

ValkSlammedANM		anmdef	ANM_ValkSlammed,ValkyrieChr8,0,0,0,0
ANM_ValkSlammed		anm1	GV0408_0005,3,0
			anm	AEnd
			

; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ VALKYRIE ANIMATION DATA						   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

WeapExpInc1		include	data\objects\weapexp\gv0501.Inc	
WeapExpInc2		include	data\objects\weapexp\gv0502.Inc	
WeapExpInc3		include	data\objects\weapexp\gv0503.Inc	
WeapExpInc4		include	data\objects\weapexp\gv0504.Inc	
WeapExpInc7		include	data\objects\weapexp\gv0507.Inc	
WeapExpInc8		include	data\objects\weapexp\gv0508.Inc	

WeapExpIdleANM		anmdef	ANM_WeapExpIdle,WeapExpChr8,0,0,0,0
ANM_WeapExpIdle		anm1	GV0508_0001,4,0
			anm1	GV0508_0002,4,0
			anm1	GV0508_0003,24,0
			anm1	GV0508_0002,4,0
			anm1	GV0508_0001,16,0
			anm	AEnd

WeapExpZeroANM		anmdef	ANM_WeapExpZero,WeapExpChr8,0,0,0,0
ANM_WeapExpZero		anm1	GV0508_0001,6,0
			anm	AEnd

WeapExpHitANM		anmdef	ANM_WeapExpHit,WeapExpChr1,0,0,0,0
ANM_WeapExpHit		anm1	GV0501_0001,3,0
			anm1	GV0501_0002,3,0
			anm1	GV0501_0003,3,0
			anm1	GV0501_0004,3,0
			anm	AEnd

WeapExpDeathANM		anmdef	ANM_WeapExpDeath,WeapExpChr7,0,0,0,0
ANM_WeapExpDeath	anm1	GV0507_0001,3,0
			anm1	GV0507_0002,3,0
			anm1	GV0507_0003,3,0
			anm1	GV0507_0004,3,0
			anm	AEnd

WeapExpPourANM		anmdef	ANM_WeapExpPour,WeapExpChr4,0,0,0,0
ANM_WeapExpPour		anm1	GV0504_0001,3,0
			anm1	GV0504_0002,3,0
			anm1	GV0504_0003,3,0
			anm1	GV0504_0004,3,0
			anm	AVar1,1
			anm1	GV0504_0005,3,0
			anm1	GV0504_0006,3,0
			anm1	GV0504_0007,32,0
			anm1	GV0504_0006,3,0
			anm1	GV0504_0005,3,0
			anm1	GV0504_0003,3,0
			anm1	GV0504_0001,3,0
			anm	AEnd

WeapExpGrabANM	 	anmdef	ANM_WeapExpGrab,WeapExpChr2,0,0,0,0
ANM_WeapExpGrab		;anm1	GV0502_0001,3,0
			;anm1	GV0502_0002,3,0
			anm1	GV0502_0003,1,0
			anm1	GV0502_0004,3,0
			anm1	GV0502_0005,3,0
			anm1	GV0502_0006,3,0
			anm	AEnd

WeapExpThrownANM	anmdef	ANM_WeapExpThrown,WeapExpChr2,0,0,0,0
ANM_WeapExpThrown	anm1	GV0502_0007,3,0
			anm	AEnd

WeapExpThrownFallANM  	anmdef	ANM_WeapExpThrownFall,WeapExpChr2,0,0,0,0
ANM_WeapExpThrownFall	anm1	GV0502_0008,3,0
			anm	AEnd

WeapExpThrownLandANM	anmdef	ANM_WeapExpThrownLand,WeapExpChr2,0,0,0,0
ANM_WeapExpThrownLand	anm1	GV0502_0008,3,0
			anm1	GV0502_0009,3,0
			anm1	GV0502_0010,3,0
			anm1	GV0502_0011,3,0
			anm1	GV0502_0012,3,0
			anm1	GV0502_0011,3,0
			anm1	GV0502_0010,3,0
			anm1	GV0502_0009,3,0
			anm	ANew,WeapExpSlammedANM

WeapExpSlammedANM	anmdef	ANM_WeapExpSlammed,WeapExpChr7,0,0,0,0
ANM_WeapExpSlammed	anm1	GV0507_0002,3,0
			anm1	GV0507_0003,3,0
			anm1	GV0507_0004,3,0
			anm	AEnd
			

; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ MUTANT VIKING BOSS ANIMATION DATA			     		   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

MutVikInc1a		include	data\objects\mutvking\gv1101a.Inc
MutVikInc1b		include	data\objects\mutvking\gv1101b.Inc
MutVikInc2		include	data\objects\mutvking\gv1102.Inc
MutVikInc4		include	data\objects\mutvking\gv1104.Inc
MutVikInc5		include	data\objects\mutvking\gv1105.Inc
MutVikInc7		include	data\objects\mutvking\gv1107.Inc
MutVikInc8		include	data\objects\mutvking\gv1108.Inc
MutVikInc6		include	data\objects\mutvking\gv1106.Inc
FloorInc1		include	data\objects\mutvking\gg3302.Inc

MutVikStartupANM	anmdef	ANM_MutVikStartup,SorcerChr1,0,0,0,0
ANM_MutVikStartup	anm1	GV0601_0001,3,0
			anm1	GV0601_0001,3,0
			anm1	GV0601_0001,3,0
			anm	APau,64
			anm1	GV0601_0002,3,0
			anm1	GV0601_0003,3,0
			anm1	GV0601_0004,3,0
			anm	AVar1,1
ANM_SCL2		anm1	GV0601_0005,3,0
			anm1	GV0601_0005,3,0
			anm1	GV0601_0006,3,0
			anm1	GV0601_0007,3,0
			anm1	GV0601_0008,3,0
			anm1	GV0601_0009,3,0
			anm	ALoop,ANM_SCL2,16
			anm	AEnd

MutVikMutateANM		anmdef	ANM_MutVikMutate,MutVikChr5,0,0,0,0
ANM_MutVikMutate	anm	AVar1,1
			anm1	GV1105_0001,32,0
			anm	AVar1,2
			anm1	GV1105_0002,32,0
			anm	AVar1,3
			anm1	GV1105_0003,32,0
			anm	AVar1,4
			anm1	GV1105_0004,96,0
			anm	AVar1,5
			anm	ANew,MutVikHammerSmash2ANM

MutVikDeadANM		anmdef	ANM_MutVikDead,MutVikChr5,0,0,0,0
ANM_MutVikDead		anm	AVar1,1
			anm1	GV1105_0004,64,0
			anm	AVar1,2
			anm1	GV1105_0003,32,0
			anm	AVar1,3
			anm1	GV1105_0002,32,0
			anm	AVar1,4
			anm1	GV1105_0001,32,0
			anm	AVar1,5
			anm	AEnd

MutVikHeadZeroANM	anmdef	ANM_MutVikHeadZero,MutVikChr1a,0,0,0,0
ANM_MutVikHeadZero	anm1	GV1101A_0001,3,0
			anm	AEnd

MutVikHeadIdleANM	anmdef	ANM_MutVikHeadIdle,MutVikChr1a,0,0,0,0
ANM_MutVikHeadIdle	anm1	GV1101A_0001,3,0
			anm1	GV1101A_0002,4,0
			anm1	GV1101A_0003,8,0
			anm1	GV1101A_0002,4,0
			anm1	GV1101A_0001,3,%00000001
			anm	ALoop,ANM_MutVikHeadIdle,2
			anm	AEnd

MutVikBodyZeroANM	anmdef	ANM_MutVikBodyZero,MutVikChr1b,0,0,0,0
ANM_MutVikBodyZero	anm1	GV1101B,0,0
			anm	AEnd

MutVikHammerSmashANM	anmdef	ANM_MutVikHammerSmash,MutVikChr2,0,0,0,0
ANM_MutVikHammerSmash	anm1	GV1102_0001,3,0
			anm1	GV1102_0002,4,0
			anm1	GV1102_0003,5,0
			anm1	GV1102_0004,6,0
			anm1	GV1102_0005,4,0
			anm	AVar1,1
			anm1	GV1102_0006,4,0
			anm1	GV1102_0007,64,0
			anm1	GV1102_0008,4,0
			anm1	GV1102_0009,4,0
			anm1	GV1102_0010,3,0
			anm	AEnd

MutVikHammerSidesANM	anmdef	ANM_MutVikHammerSides,MutVikChr2,0,0,0,0
ANM_MutVikHammerSides	anm1	GV1102_0001,1,0
			anm1	GV1102_0002,1,0
			anm1	GV1102_0003,2,0
			anm1	GV1102_0004,3,0
			anm1	GV1102_0005,1,0
			anm	AVar1,1
			anm1	GV1102_0006,1,0
			anm1	GV1102_0007,8,0
			anm1	GV1102_0008,1,0
			anm1	GV1102_0009,1,0
			anm1	GV1102_0010,1,0
			anm1	GV1102_0001,1,%00000001
			anm1	GV1102_0002,1,0
			anm1	GV1102_0003,2,0
			anm1	GV1102_0004,3,0
			anm1	GV1102_0005,1,0
			anm	AVar1,1
			anm1	GV1102_0006,1,0
			anm1	GV1102_0007,8,0
			anm1	GV1102_0008,1,0
			anm1	GV1102_0009,1,0
			anm1	GV1102_0010,1,0
			anm1	GV1102_0001,1,%00000001
			anm1	GV1102_0002,1,0
			anm1	GV1102_0003,2,0
			anm1	GV1102_0004,3,0
			anm1	GV1102_0005,1,0
			anm	AVar1,1
			anm1	GV1102_0006,1,0
			anm1	GV1102_0007,8,0
			anm1	GV1102_0008,1,0
			anm1	GV1102_0009,1,0
			anm1	GV1102_0010,1,0
			anm1	GV1102_0001,1,%00000001
			anm1	GV1102_0002,1,0
			anm1	GV1102_0003,2,0
			anm1	GV1102_0004,3,0
			anm1	GV1102_0005,1,0
			anm	AVar1,1
			anm1	GV1102_0006,1,0
			anm1	GV1102_0007,8,0
			anm1	GV1102_0008,1,0
			anm1	GV1102_0009,1,0
			anm1	GV1102_0010,1,0
			anm1	GV1102_0001,1,%00000001
			anm1	GV1102_0002,1,0
			anm1	GV1102_0003,2,0
			anm1	GV1102_0004,3,0
			anm1	GV1102_0005,1,0
			anm	AVar1,1
			anm1	GV1102_0006,1,0
			anm1	GV1102_0007,8,0
			anm1	GV1102_0008,1,0
			anm1	GV1102_0009,1,0
			anm1	GV1102_0010,1,0
			anm1	GV1102_0001,1,%00000001
			anm1	GV1102_0002,1,0
			anm1	GV1102_0003,2,0
			anm1	GV1102_0004,3,0
			anm1	GV1102_0005,1,0
			anm	AVar1,1
			anm1	GV1102_0006,1,0
			anm1	GV1102_0007,8,0
			anm1	GV1102_0008,1,0
			anm1	GV1102_0009,1,0
			anm1	GV1102_0010,1,0
			anm1	GV1102_0001,1,%00000001
			anm1	GV1102_0002,1,0
			anm1	GV1102_0003,2,0
			anm1	GV1102_0004,3,0
			anm1	GV1102_0005,1,0
			anm	AVar1,1
			anm1	GV1102_0006,1,0
			anm1	GV1102_0007,8,0
			anm1	GV1102_0008,1,0
			anm1	GV1102_0009,1,0
			anm1	GV1102_0010,1,0
			anm1	GV1102_0001,1,%00000001
			anm1	GV1102_0002,1,0
			anm1	GV1102_0003,2,0
			anm1	GV1102_0004,3,0
			anm1	GV1102_0005,1,0
			anm	AVar1,1
			anm1	GV1102_0006,1,0
			anm1	GV1102_0007,8,0
			anm1	GV1102_0008,1,0
			anm1	GV1102_0009,1,0
			anm1	GV1102_0010,1,0
			anm1	GV1102_0001,1,%00000001
			anm1	GV1102_0002,1,0
			anm1	GV1102_0003,2,0
			anm1	GV1102_0004,3,0
			anm1	GV1102_0005,1,0
			anm	AVar1,1
			anm1	GV1102_0006,1,0
			anm1	GV1102_0007,8,0
			anm1	GV1102_0008,1,0
			anm1	GV1102_0009,1,0
			anm1	GV1102_0010,1,0
			anm	ANew,MutVikPauseANM

MutVikHammerSmash2ANM	anmdef	ANM_MutVikHammerSmash2,MutVikChr2,0,0,0,0
ANM_MutVikHammerSmash2	anm	AVar1,0
			anm1	GV1102_0003,5,%00000001
			anm1	GV1102_0004,6,0
			anm1	GV1102_0005,4,0
			anm	AVar1,6
			anm1	GV1102_0006,4,0
			anm1	GV1102_0007,64,0
			anm1	GV1102_0008,4,0
			anm1	GV1102_0009,3,0
			anm1	GV1102_0010,3,0
			anm	AEnd

MutVikHammerSparkANM	anmdef	ANM_MutVikHammerSpark,MutVikChr6,0,0,0,0
ANM_MutVikHammerSpark	anm1	GV1106,3,0
			anm	AEnd

MutVikPauseANM		anmdef	ANM_MutVikPause,MutVikChr2,0,0,0,0
ANM_MutVikPause		anm1	GV1102_0009,3,0
			anm	AEnd

MutVikHammerThrowANM	anmdef	ANM_MutVikHammerThrow,MutVikChr4,0,0,0,0
ANM_MutVikHammerThrow	anm1	GV1104_0001,2,0
			anm1	GV1104_0002,4,0
			anm1	GV1104_0003,10,0
			anm1	GV1104_0004,4,0
			anm1	GV1104_0005,3,0
			anm1	GV1104_0006,3,0
			anm	AVar1,1
			anm1	GV1104_0007,3,0
			anm1	GV1104_0008,3,0
			anm1	GV1104_0009,3,0
			anm1	GV1104_0010,3,0
			anm	AEnd

MutVikHammerThrowCANM	anmdef	ANM_MutVikHammerThrowC,MutVikChr4,0,0,0,0
ANM_MutVikHammerThrowC	anm1	GV1104_0011,3,0
			anm1	GV1104_0012,3,0
			anm1	GV1104_0013,3,0
			anm	AEnd

MutVikHammerANM		anmdef	ANM_MutVikHammer,MutVikChr8,0,0,0,0
ANM_MutVikHammer	anm1	GV1108_0004,3,0
			anm1	GV1108_0003,3,0
			anm1	GV1108_0002,3,0
			anm1	GV1108_0001,3,0
			anm	ARep

MutVikHitANM		anmdef	ANM_MutVikHit,MutVikChr7,0,0,0,0
ANM_MutVikHit		anm1	GV1107_0001,3,0
			anm1	GV1107_0002,5,0
			anm1	GV1107_0003,6,0
			anm1	GV1107_0004,6,0
			anm1	GV1107_0005,5,0
			anm1	GV1107_0006,3,0
			anm	AEnd

MutVikFloorANM		anmdef	ANM_MutVikFloor,FloorChr1,0,0,0,0
ANM_MutVikFloor		anm1	GG3302,1,0
			anm1	GG3302,2,0
			anm1	GG3302,3,0
			anm1	GG3302,4,0
			anm	AEnd
			

; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ DEMONA BOSS ANIMATION DATA						   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ
	       
DemonaInc1		include	data\objects\demona\gd40101.Inc
DemonaInc2		include	data\objects\demona\gd40102.Inc
DemonaInc3		include	data\objects\demona\gd40103.Inc
DemonaInc4		include	data\objects\demona\gd40104.Inc
DemonaInc9		include	data\objects\demona\gd40109.Inc
DemonaInc10		include	data\objects\demona\gd40110.Inc
DemonaInc11		include	data\objects\demona\gd40111.Inc
DemonaInc12		include	data\objects\demona\gd40112.Inc
DemonaInc13		include	data\objects\demona\gd40113.Inc
DemonaInc14		include	data\objects\demona\gd40114.Inc

MDemonaInc1		include	data\objects\demona\gd40301.Inc
MDemonaInc2		include	data\objects\demona\gd40302.Inc
MDemonaInc3		include	data\objects\demona\gd40303.Inc
MDemonaInc4		include	data\objects\demona\gd40304.Inc
MDemonaInc5		include	data\objects\demona\gd40305.Inc
MDemonaInc6		include	data\objects\demona\gd40306.Inc
MDemonaInc7		include	data\objects\demona\gd40307.Inc
MDemonaInc8		include	data\objects\demona\gd40308.Inc

DemonaAirIdleANM	anmdef	ANM_DemonaAirIdle,DemonaChr1,0,0,0,0
ANM_DemonaAirIdle	anm1	GD40101_0001,3,0
			anm1	GD40101_0002,3,0
			anm1	GD40101_0003,3,0
			anm1	GD40101_0004,3,0
			anm	ARep

DemonaAirAttackANM	anmdef	ANM_DemonaAirAttack,DemonaChr2,0,0,0,0
ANM_DemonaAirAttack	anm1	GD40102_0001,2,0
			anm1	GD40102_0002,2,0
			anm1	GD40102_0003,2,0
			anm1	GD40102_0004,2,0
			anm1	GD40102_0005,3,0
ANM_DAA1		anm1	GD40102_0006,3,0
			anm1	GD40102_0006,3,0
			anm1	GD40102_0007,3,0
			anm1	GD40102_0008,3,0
			anm	AJmp,ANM_DAA1
 			
DemonaAirAscendANM	anmdef	ANM_DemonaAirAscend,DemonaChr3,0,0,0,0
ANM_DemonaAirAscend	anm1	GD40103_0001,1,0
			anm1	GD40103_0002,1,0
			anm1	GD40103_0003,1,0
			anm1	GD40103_0004,1,0
			anm1	GD40103_0005,2,0
			anm1	GD40103_0006,2,0
			anm1	GD40103_0007,2,0
			anm1	GD40103_0008,2,0
			anm1	GD40103_0009,2,0
			anm1	GD40103_0010,2,0
			anm1	GD40103_0011,3,0
			anm1	GD40103_0012,3,0
			anm	AEnd

DemonaHitANM		anmdef	ANM_DemonaHit,DemonaChr4,0,0,0,0
ANM_DemonaHit		anm1	GD40104_0001,3,0
			anm1	GD40104_0002,3,0
			anm1	GD40104_0003,3,0
			anm	AEnd

DemonaIdleANM		anmdef	ANM_DemonaIdle,DemonaChr9,0,0,0,0
ANM_DemonaIdle		anm1	GD40109_0001,3,0
			anm1	GD40109_0002,3,0
			anm1	GD40109_0003,3,0
			anm1	GD40109_0004,3,0
			anm	ARep

DemonaBlastOffANM	anmdef	ANM_DemonaBlastOff,DemonaChr10,0,0,0,0
ANM_DemonaBlastOff	anm1	GD40110_0001,3,0
			anm1	GD40110_0002,3,0
			anm1	GD40110_0003,3,0
			anm1	GD40110_0004,3,0
			anm1	GD40110_0005,3,0
			anm	AVar1,1
			anm1	GD40110_0006,3,0
			anm1	GD40110_0007,3,0
			anm1	GD40110_0008,3,0
			anm1	GD40110_0009,3,0
			anm	AEnd

DemonaTentacleGrabANM	anmdef	ANM_DemonaTentacleGrab,DemonaChr11,0,0,0,0
ANM_DemonaTentacleGrab	anm1	GD40111_0001,2,0
			anm1	GD40111_0002,2,0
			anm1	GD40111_0003,2,0
			anm1	GD40111_0004,2,0
			anm1	GD40111_0005,2,0
			anm1	GD40111_0006,2,0
			anm1	GD40111_0007,3,0
			anm1	GD40111_0008,3,0
			anm1	GD40111_0009,3,0
			anm1	GD40111_0010,3,0
			anm1	GD40111_0008,3,0
			anm1	GD40111_0009,3,0
			anm1	GD40111_0010,3,0
			anm1	GD40111_0008,3,0
			anm1	GD40111_0009,3,0
			anm1	GD40111_0010,3,0
			anm1	GD40111_0008,3,0
			anm1	GD40111_0009,3,0
			anm1	GD40111_0010,3,0
			anm1	GD40111_0008,3,0
			anm1	GD40111_0009,3,0
			anm1	GD40111_0010,3,0
			anm1	GD40111_0008,3,0
			anm1	GD40111_0009,3,0
			anm1	GD40111_0010,3,0
			anm1	GD40111_0011,3,0
			anm1	GD40111_0012,3,0
			anm1	GD40111_0013,2,0
			anm1	GD40111_0014,2,0
			anm1	GD40111_0015,2,0
			anm1	GD40111_0016,2,0
			anm1	GD40111_0017,2,0
			anm1	GD40111_0018,2,0
			anm1	GD40111_0019,2,0
			anm	AEnd

DemonaStartPhoenixANM	anmdef	ANM_DemonaStartPhoenix,DemonaChr11,0,0,0,0
ANM_DemonaStartPhoenix	anm1	GD40111_0010,5,0
			anm1	GD40111_0011,5,0
			anm1	GD40111_0012,5,0
			anm1	GD40111_0013,5,0
			anm1	GD40111_0014,5,0
			anm1	GD40111_0015,5,0
			anm1	GD40111_0016,5,0
			anm1	GD40111_0017,5,0
			anm1	GD40111_0018,5,0
			anm1	GD40111_0019,5,0
			anm	AEnd

DemonaTentacleHoldANM	anmdef	ANM_DemonaTentacleHold,DemonaChr11,0,0,0,0
ANM_DemonaTentacleHold	anm1	GD40111_0019,3,0
			anm	AEnd

DemonaLookLeftRightANM	anmdef	ANM_DemonaLookLeftRight,DemonaChr12,0,0,0,0
ANM_DemonaLookLeftRight	anm1	GD40112_0001,3,0
			anm1	GD40112_0002,3,0
			anm1	GD40112_0003,3,0
			anm1	GD40112_0004,3,0
			anm1	GD40112_0005,3,0
			anm1	GD40112_0006,3,0
			anm1	GD40112_0007,3,0
			anm1	GD40112_0008,3,0
			anm	AVar1,1
			anm1	GD40112_0008,127,0
			anm1	GD40112_0008,127,0
			anm1	GD40112_0007,3,0
			anm1	GD40112_0006,3,0
			anm1	GD40112_0005,3,0
			anm1	GD40112_0004,3,0
			anm1	GD40112_0003,3,0
			anm1	GD40112_0002,3,0
			anm1	GD40112_0001,3,0
			anm	AEnd

DemonaUnHookANM		anmdef	ANM_DemonaUnHook,DemonaChr13,0,0,0,0
ANM_DemonaUnHook	anm1	GD40113_0001,3,0
			anm1	GD40113_0002,3,0
			anm1	GD40113_0003,3,0
			anm1	GD40113_0004,3,0
			anm1	GD40113_0005,3,0
			anm1	GD40113_0006,3,0
			anm1	GD40113_0007,3,0
			anm	AVar1,1
			anm1	GD40113_0008,3,0
			anm1	GD40113_0009,3,0
			anm1	GD40113_0010,3,0
			anm1	GD40113_0011,3,0
			anm1	GD40113_0012,3,0
			anm1	GD40113_0013,3,0
			anm	AEnd

DemonaTentacleIdleANM	anmdef	ANM_DemonaTentacleIdle,DemonaChr14,0,0,0,0
ANM_DemonaTentacleIdle	anm1	GD40114_0001,3,0
			anm1	GD40114_0002,3,0
			anm1	GD40114_0003,3,0
			anm1	GD40114_0004,3,0
			anm	ARep

MDemonaFlyWallTransANM	anmdef	ANM_MDemonaFlyWallTrans,MDemonaChr1,0,0,0,0
ANM_MDemonaFlyWallTrans	anm1	GD40301_0001,3,0
			anm1	GD40301_0002,3,0
			anm	AEnd

MDemonaWallFlyTransANM	anmdef	ANM_MDemonaWallFlyTrans,MDemonaChr2,0,0,0,0
ANM_MDemonaWallFlyTrans	anm1	GD40302_0001,3,0
			anm1	GD40302_0002,3,0
			anm	AEnd

MDemonaFloorBounceANM	anmdef	ANM_MDemonaFloorBounce,MDemonaChr3,0,0,0,0
ANM_MDemonaFloorBounce	anm1	GD40303_0001,3,0
			anm1	GD40303_0002,3,0
			anm1	GD40303_0003,3,0
			anm	AEnd

MDemonaHitANM		anmdef	ANM_MDemonaHit,MDemonaChr4,0,0,0,0
ANM_MDemonaHit		anm1	GD40304_0001,3,0
			anm1	GD40304_0002,3,0
			anm1	GD40304_0003,3,0
			anm1	GD40304_0004,3,0
			anm1	GD40304_0005,3,0
			anm1	GD40304_0006,3,0
			anm1	GD40304_0007,3,0
			anm1	GD40304_0008,3,0
			anm	AEnd

MDemonaAirIdleANM	anmdef	ANM_MDemonaAirIdle,MDemonaChr5,0,0,0,0
ANM_MDemonaAirIdle	anm1	GD40305_0001,3,0
			anm1	GD40305_0002,3,0
			anm1	GD40305_0003,3,0
			anm	ARep

MDemonaWallIdleANM	anmdef	ANM_MDemonaWallIdle,MDemonaChr6,0,0,0,0
ANM_MDemonaWallIdle	anm1	GD40306_0001,3,0
			anm1	GD40306_0002,3,0
			anm1	GD40306_0003,3,0
			anm	ARep

MDemonaWallFireUpANM	anmdef	ANM_MDemonaWallFireUp,MDemonaChr7,0,0,0,0
ANM_MDemonaWallFireUp	anm1	GD40307_0001,3,0
			anm1	GD40307_0002,3,0
			anm1	GD40307_0003,3,0
			anm1	GD40307_0004,3,0
ANM_MDWF		anm1	GD40307_0005,3,0
			anm1	GD40307_0006,3,0
			anm1	GD40307_0007,3,0
			anm1	GD40307_0008,3,0
			anm1	GD40307_0009,3,0
			anm1	GD40307_0010,3,0
			anm1	GD40307_0011,3,0
			anm1	GD40307_0012,3,0
			anm	AJmp,ANM_MDWF
			
MDemonaWallFireDnANM	anmdef	ANM_MDemonaWallFireDn,MDemonaChr7,0,0,0,0
ANM_MDemonaWallFireDn	anm1	GD40307_0012,3,0
			anm1	GD40307_0011,3,0
			anm1	GD40307_0010,3,0
			anm1	GD40307_0009,3,0
			anm1	GD40307_0008,3,0
			anm1	GD40307_0007,3,0
			anm1	GD40307_0006,3,0
			anm1	GD40307_0005,3,0
			anm1	GD40307_0004,3,0
			anm1	GD40307_0003,3,0
			anm1	GD40307_0002,3,0
			anm1	GD40307_0001,3,0
			anm	AEnd

MDemonaFloorFireUpANM	anmdef	ANM_MDemonaFloorFireUp,MDemonaChr8,0,0,0,0
ANM_MDemonaFloorFireUp	anm1	GD40308_0001,3,0
			anm1	GD40308_0002,3,0
			anm1	GD40308_0003,3,0
			anm1	GD40308_0004,3,0
ANM_MDFF		anm1	GD40308_0005,3,0
			anm1	GD40308_0006,3,0
			anm1	GD40308_0007,3,0
			anm1	GD40308_0008,3,0
			anm1	GD40308_0009,3,0
			anm1	GD40308_0010,3,0
			anm1	GD40308_0011,3,0
			anm1	GD40308_0012,3,0
			anm	AJmp,ANM_MDFF
			
MDemonaFloorFireDnANM	anmdef	ANM_MDemonaFloorFireDn,MDemonaChr8,0,0,0,0
ANM_MDemonaFloorFireDn	anm1	GD40308_0012,3,0
			anm1	GD40308_0011,3,0
			anm1	GD40308_0010,3,0
			anm1	GD40308_0009,3,0
			anm1	GD40308_0008,3,0
			anm1	GD40308_0007,3,0
			anm1	GD40308_0006,3,0
			anm1	GD40308_0005,3,0
			anm1	GD40308_0004,3,0
			anm1	GD40308_0003,3,0
			anm1	GD40308_0002,3,0
			anm1	GD40308_0001,3,0
			anm	AEnd



; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ XANATOS\STEELCLAN ANIMATION DATA					   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

XanatosInc3		include	data\objects\xanatos\gr97903.Inc
XanatosInc4		include	data\objects\xanatos\gr97904.Inc
XanatosInc8		include	data\objects\xanatos\gr97908.Inc
XanatosInc10		include	data\objects\xanatos\gr97910.Inc
XanatosInc16		include	data\objects\xanatos\gr97916.Inc
XanatosInc17		include	data\objects\xanatos\gr97917.Inc
XanatosInc18		include	data\objects\xanatos\gr97918.Inc

XanatosIdleANM		anmdef	ANM_XanatosIdle,XanatosChr3,0,0,0,0
ANM_XanatosIdle		anm1	GR97903_0001,3,0
			anm1	GR97903_0002,3,0
			anm1	GR97903_0003,3,0
			anm1	GR97903_0004,3,0
			anm1	GR97903_0005,3,0
			anm1	GR97903_0006,3,0
			anm1	GR97903_0007,3,0
			anm	ARep

XanatosTurnANM		anmdef	ANM_XanatosTurn,XanatosChr4,0,0,0,0
ANM_XanatosTurn		anm1	GR97904_0001,2,0
			anm1	GR97904_0002,2,0
			anm1	GR97904_0003,2,0
			anm1	GR97904_0004,2,0
			anm	AEnd

XanatosBigAttackANM	anmdef	ANM_XanatosBigAttack,XanatosChr8,0,0,0,0
ANM_XanatosBigAttack	anm1	GR97908_0001,2,0
			anm1	GR97908_0002,2,0
			anm1	GR97908_0003,2,0
			anm1	GR97908_0004,4,0
			anm	AVar1,1
			anm1	GR97908_0005,2,0
			anm1	GR97908_0006,2,0
ANM_XBA2		anm1	GR97908_0007,2,0
			anm1	GR97908_0007,2,0
			anm1	GR97908_0008,2,0
			anm1	GR97908_0009,2,0
			anm	ALoop,ANM_XBA2,128
			anm	AEnd
XanatosBigAttackOutANM	anmdef	ANM_XanatosBigAttackOut,XanatosChr8,0,0,0,0
ANM_XanatosBigAttackOut	anm1	GR97908_0010,2,0
			anm1	GR97908_0011,2,0
			anm1	GR97908_0012,2,0
			anm1	GR97908_0013,2,0
			anm1	GR97908_0014,2,0
			anm	AEnd

XanatosFireHomerANM	anmdef	ANM_XanatosFireHomer,XanatosChr8,0,0,0,0
ANM_XanatosFireHomer	anm1	GR97908_0001,2,0
			anm1	GR97908_0002,2,0
			anm1	GR97908_0003,2,0
			anm1	GR97908_0004,2,0
			anm1	GR97908_0005,2,0
			anm1	GR97908_0006,2,0
			anm	AVar1,1
			anm1	GR97908_0007,2,0
			anm1	GR97908_0008,2,0
			anm1	GR97908_0009,2,0
			anm1	GR97908_0010,2,0
			anm1	GR97908_0011,2,0
			anm1	GR97908_0012,2,0
			anm1	GR97908_0013,2,0
			anm1	GR97908_0014,2,0
			anm	AEnd

XanatosDropMineANM 	anmdef	ANM_XanatosDropMine,XanatosChr10,0,0,0,0
ANM_XanatosDropMine	anm1	GR97910_0001,1,0
			anm1	GR97910_0002,2,0
			anm1	GR97910_0003,4,0
			anm1	GR97910_0004,2,0
			anm1	GR97910_0005,2,0
			anm1	GR97910_0006,2,0
			anm	AVar1,1
			anm1	GR97910_0007,2,0
			anm1	GR97910_0008,2,0
			anm1	GR97910_0009,2,0
			anm1	GR97910_0010,1,0
			anm1	GR97910_0011,1,0
			anm1	GR97910_0012,1,0
			anm	AEnd

XanatosSmallAttackANM 	anmdef	ANM_XanatosSmallAttack,XanatosChr10,0,0,0,0
ANM_XanatosSmallAttack	anm1	GR97910_0001,1,0
			anm1	GR97910_0002,2,0
			anm1	GR97910_0003,4,0
			anm1	GR97910_0004,2,0
			anm1	GR97910_0005,2,0
			anm1	GR97910_0006,2,0
			anm1	GR97910_0007,2,0
			anm1	GR97910_0008,2,0
			anm1	GR97910_0009,2,0
			anm1	GR97910_0010,1,0
			anm1	GR97910_0011,1,0
			anm1	GR97910_0012,1,0
			anm	AEnd

XanatosHitANM		anmdef	ANM_XanatosHit,XanatosChr16,0,0,0,0
ANM_XanatosHit		anm1	GR97916_0001,3,0
			anm1	GR97916_0002,3,0
			anm1	GR97916_0003,3,0
			anm1	GR97916_0004,3,0
			anm1	GR97916_0005,3,0
			anm	AEnd

XanatosHomerHeadANM	anmdef	ANM_XanatosHomerHead,XanatosChr17,0,0,0,0
ANM_XanatosHomerHead	anm1	GR97917_0001,2,0
			anm1	GR97917_0002,2,0
			anm1	GR97917_0003,2,0
			anm1	GR97917_0004,2,0
			anm	ARep
XanatosHomerTrailANM	anmdef	ANM_XanatosHomerTrail,XanatosChr17,0,0,0,0
ANM_XanatosHomerTrail	anm1	GR97917_0005,2,0
			anm1	GR97917_0006,2,0
			anm	AEnd

XanatosMineANM		anmdef	ANM_XanatosMine,XanatosChr18,0,0,0,0
ANM_XanatosMine		anm1	GR97918_0001,2,0
			anm1	GR97918_0002,2,0
			anm1	GR97918_0003,2,0
			anm1	GR97918_0004,2,0
			anm1	GR97918_0005,2,0
			anm	ARep


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ RABID HELL HOUND ANIMATION DATA					   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ
	       
RabidInc1		include	data\objects\hellhnd\gg90701.Inc
RabidInc2		include	data\objects\hellhnd\gg90702.Inc
RabidInc3		include	data\objects\hellhnd\gg90703.Inc
RabidInc4		include	data\objects\hellhnd\gg90704.Inc
RabidInc5		include	data\objects\hellhnd\gg90705.Inc
RabidInc6		include	data\objects\hellhnd\gg90706.Inc


RabidTransformANM	anmdef	ANM_RabidTransform,RabidChr1,0,0,0,0
ANM_RabidTransform	anm	AVar1,1
			anm1	GG90701_0001,16,0
			anm	AVar1,1
			anm1	GG90701_0002,16,0
			anm	AVar1,1
			anm1	GG90701_0003,16,0
			anm	AVar1,1
			anm1	GG90701_0004,16,0
			anm	AVar1,1
			anm1	GG90701_0005,16,0
			anm	AEnd

RabidZeroANM		anmdef	ANM_RabidZero,RabidChr1,0,0,0,0
ANM_RabidZero		anm1	GG90701_0005,3,0
			anm	AEnd

RabidHitANM		anmdef	ANM_RabidHit,RabidChr5,0,0,0,0
ANM_RabidHit		anm1	GG90705_0001,3,0
			anm1	GG90705_0002,3,0
			anm1	GG90705_0003,3,0
			anm1	GG90705_0004,3,0
			anm1	GG90705_0005,3,0
			anm	AEnd

RabidDeadANM		anmdef	ANM_RabidDead,RabidChr6,0,0,0,0
ANM_RabidDead		anm1	GG90706_0001,3,0
			anm1	GG90706_0002,4,0
			anm1	GG90706_0003,5,0
			anm1	GG90706_0004,6,0
			anm1	GG90706_0005,6,0
			anm1	GG90706_0006,6,0
			anm1	GG90706_0007,6,0
			anm1	GG90706_0008,6,0
			anm	AEnd

RabidQuickAttackANM 	anmdef	ANM_RabidQuickAttack,RabidChr4,0,0,0,0
ANM_RabidQuickAttack	anm1	GG90704_0001,3,0
			anm1	GG90704_0002,16,0
			anm1	GG90704_0003,3,0
			anm1	GG90704_0004,3,0
			anm1	GG90704_0005,3,0
			anm1	GG90704_0006,3,0
			anm	AEnd

RabidTurnANM		anmdef	ANM_RabidTurn,RabidChr3,0,0,0,0
ANM_RabidTurn		anm1	GG90703_0001,3,0
			anm1	GG90703_0002,3,0
			anm1	GG90703_0003,3,0
			anm1	GG90703_0004,3,0
			anm1	GG90703_0005,3,0
			anm1	GG90703_0006,3,0
			anm1	GG90703_0007,3,0
			anm	AEnd

RabidLeapANM		anmdef	ANM_RabidLeap,RabidChr2,0,0,0,0
ANM_RabidLeap		anm1	GG90702_0001,3,0
			anm1	GG90702_0002,3,0
			anm1	GG90702_0003,3,0
			anm1	GG90702_0004,3,0
			anm1	GG90702_0005,3,0
ANM_RL2			anm1	GG90702_0006,3,0
			anm1	GG90702_0007,3,0
			anm1	GG90702_0008,3,0
			anm	ALoop,ANM_RL2,200
			anm	AEnd
RabidLandANM		anmdef	ANM_RabidLand,RabidChr2,0,0,0,0
ANM_RabidLand		anm1	GG90702_0009,12,0
			anm1	GG90702_0010,8,0
			anm1	GG90702_0011,4,0
			anm1	GG90702_0012,3,0
			anm1	GG90702_0013,3,0
			anm	AEnd


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ EYE OF ODIN ANIMATION DATA						   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

EyeInc1			include	data\objects\eye_odin\gg9301.Inc
EyeInc2			include	data\objects\eye_odin\gg9302.Inc
EyeInc3			include	data\objects\eye_odin\gg9303.Inc
EyeInc4			include	data\objects\eye_odin\gg9304.Inc
EyeInc5			include	data\objects\eye_odin\gg9305.Inc
EyeInc6			include	data\objects\eye_odin\gg9306.Inc
EyeInc7			include	data\objects\eye_odin\gg9307.Inc



EyeOfOdinBlankANM	anmdef	ANM_EyeOfOdinBlank,EyeChr1,0,0,0,0
ANM_EyeOfOdinBlank	anm1	GG9301_0001,3,0
			anm	AEnd
			
EyeOfOdinZeroANM 	anmdef	ANM_EyeOfOdinZero,EyeChr1,0,0,0,0
ANM_EyeOfOdinZero	anm1	GG9301_0002,0,0
			anm	AEnd

EyeOfOdinANM		anmdef	ANM_EyeOfOdin,EyeChr1,0,0,0,0
ANM_EyeOfOdin		anm1	GG9301_0002,3,0
			anm1	GG9301_0003,3,0
			anm1	GG9301_0004,3,0
			anm1	GG9301_0005,3,0
			anm1	GG9301_0006,3,0
			anm1	GG9301_0007,3,0
			anm1	GG9301_0008,3,0
			anm	ARep

EyeOfOdinPupANM		anmdef	ANM_EyeOfOdinPup,EyeChr1,0,0,0,0
ANM_EyeOfOdinPup	anm1	GG9301_0002,16,0
			anm1	GG9301_0003,15,0
			anm1	GG9301_0004,14,0
			anm1	GG9301_0005,13,0
			anm1	GG9301_0006,12,0
			anm1	GG9301_0007,11,0
			anm1	GG9301_0008,10,0
			anm1	GG9301_0002,9,0
			anm1	GG9301_0003,8,0
			anm1	GG9301_0004,7,0
			anm1	GG9301_0005,6,0
			anm1	GG9301_0006,5,0
			anm1	GG9301_0007,4,0
			anm1	GG9301_0008,3,0
			anm1	GG9301_0002,3,0
			anm1	GG9301_0003,3,0
			anm1	GG9301_0004,2,0
			anm1	GG9301_0005,2,0
			anm1	GG9301_0006,2,0
			anm1	GG9301_0007,2,0
			anm1	GG9301_0008,2,0
			anm1	GG9301_0002,1,0
			anm1	GG9301_0003,1,0
			anm1	GG9301_0004,1,0
			anm	AVar1,1
			anm1	GG9301_0005,1,0
			anm1	GG9301_0006,1,0
			anm1	GG9301_0007,1,0
			anm1	GG9301_0008,1,0
			anm1	GG9301_0002,2,0
			anm1	GG9301_0003,2,0
			anm1	GG9301_0004,2,0
			anm1	GG9301_0005,2,0
			anm1	GG9301_0006,2,0
			anm1	GG9301_0007,3,0
			anm1	GG9301_0008,3,0
			anm1	GG9301_0002,3,0
			anm1	GG9301_0003,4,0
			anm1	GG9301_0004,5,0
			anm1	GG9301_0005,6,0
			anm1	GG9301_0006,7,0
			anm1	GG9301_0007,8,0
			anm1	GG9301_0008,9,0
			anm1	GG9301_0002,10,0
			anm1	GG9301_0003,11,0
			anm1	GG9301_0004,12,0
			anm1	GG9301_0005,13,0
			anm1	GG9301_0006,14,0
			anm1	GG9301_0007,15,0
			anm1	GG9301_0008,16,0
			anm	AEnd

EyeOfOdinTrailANM 	anmdef	ANM_EyeOfOdinTrail,EyeChr7,0,0,0,0
ANM_EyeOfOdinTrail	anm1	GG9307_0001,1,0
			anm1	GG9307_0002,1,0
			anm1	GG9307_0003,1,0
			anm1	GG9307_0004,1,0
			anm1	GG9307_0005,1,0
			anm	AEnd

; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ VIKING SORCERER BOSS ANIMATION DATA					   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

SorcerInc1		include	data\objects\sorcerer\gv0601.Inc
SorcerInc2		include	data\objects\sorcerer\gv0602.Inc
SorcerInc3		include	data\objects\sorcerer\gv0603.Inc
SorcerInc5		include	data\objects\sorcerer\gv0605.Inc
SorcerInc6		include	data\objects\sorcerer\gv0606.Inc
SorcerInc7		include	data\objects\sorcerer\gv0607.Inc
SorcerInc8		include	data\objects\sorcerer\gg8402.Inc

SorcerCallLightANM	anmdef	ANM_SorcerCallLight,SorcerChr1,0,0,0,0
ANM_SorcerCallLight	anm1	GV0601_0001,3,0
			anm1	GV0601_0002,3,0
			anm1	GV0601_0003,3,0
			anm1	GV0601_0004,3,0
			anm	AVar1,1
ANM_SCL2a		anm1	GV0601_0005,3,0
			anm1	GV0601_0005,3,0
			anm1	GV0601_0006,3,0
			anm1	GV0601_0007,3,0
			anm1	GV0601_0008,3,0
			anm1	GV0601_0009,3,0
			anm	ALoop,ANM_SCL2a,3
			anm1	GV0601_0004,3,0
			anm1	GV0601_0003,3,0
			anm1	GV0601_0002,3,0
			anm1	GV0601_0001,3,0
			anm	AEnd

SorcerDeRezANM		anmdef	ANM_SorcerDeRez,SorcerChr2,0,0,0,0
ANM_SorcerDeRez		anm1	GV0602_0001,3,0
			anm1	GV0602_0002,3,0
			anm1	GV0602_0003,3,0
			anm1	GV0602_0004,3,0
			anm1	GV0602_0005,3,0
			anm1	GV0602_0006,3,0
			anm	AEnd

SorcerBlankANM		anmdef	ANM_SorcerBlank,SorcerChr2,0,0,0,0
ANM_SorcerBlank		anm1	GV0602_0006,0,0
	       		anm	AEnd

SorcerIdleANM		anmdef	ANM_SorcerIdle,SorcerChr3,0,0,0,0
ANM_SorcerIdle		anm1	GV0603_0001,3,0
			anm1	GV0603_0002,3,0
			anm1	GV0603_0003,3,0
			anm1	GV0603_0004,3,0
			anm1	GV0603_0005,3,0
			anm	AEnd

SorcerWaitANM		anmdef	ANM_SorcerWait,SorcerChr3,0,0,0,0
ANM_SorcerWait		anm1	GV0603_0005,32,0
			anm	AEnd

SorcerHitANM		anmdef	ANM_SorcerHit,SorcerChr5,0,0,0,0
ANM_SorcerHit		anm1	GV0605_0001,0,0
			anm	AEnd

SorcerGrabANM		anmdef	ANM_SorcerGrab,SorcerChr5,0,0,0,0
ANM_SorcerGrab		;anm1	GV0605_0001,3,0
			;anm1	GV0605_0002,3,0
			anm1	GV0605_0003,3,0
			anm1	GV0605_0004,3,0
			anm	AEnd
		
SorcerThrownANM		anmdef	ANM_SorcerThrown,SorcerChr5,0,0,0,0
ANM_SorcerThrown	anm1	GV0605_0005,0,0
			anm	AEnd
			
SorcerThrownFallANM	anmdef	ANM_SorcerThrownFall,SorcerChr5,0,0,0,0
ANM_SorcerThrownFall	anm1	GV0605_0006,0,0
			anm	AEnd

SorcerSwingANM		anmdef	ANM_SorcerSwing,SorcerChr6,0,0,0,0
ANM_SorcerSwing		anm1	GV0606_0001,5,0
			anm1	GV0606_0002,3,0
			anm1	GV0606_0003,5,0
			anm1	GV0606_0004,5,0
			anm1	GV0606_0005,3,0
			anm	AEnd

SorcerHitWallANM	anmdef	ANM_SorcerHitWall,SorcerChr7,0,0,0,0
ANM_SorcerHitWall	anm1	GV0607_0001,3,0
			anm1	GV0607_0002,3,0
			anm1	GV0607_0003,3,0
			anm1	GV0607_0004,3,0
			anm1	GV0607_0005,3,0
			anm	AVar1,1
			anm1	GV0607_0006,3,0
			anm1	GV0607_0007,3,0
			anm	AEnd

SorcerDeadANM		anmdef	ANM_SorcerDead,SorcerChr7,0,0,0,0
ANM_SorcerDead		anm1	GV0607_0008,3,0
			anm1	GV0607_0009,3,0
			anm1	GV0607_0010,3,0
			anm1	GV0607_0011,3,0
			anm	AEnd
			
LightningTopANM		anmdef	ANM_LightningTop,SorcerChr8,0,0,0,0
ANM_LightningTop	anm1	GG8402_0002,48,0
			anm	AEnd
LightningBotANM		anmdef	ANM_LightningBot,SorcerChr8,0,0,0,0
ANM_LightningBot	anm1	GG8402_0001,48,0
			anm	AEnd


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ EXPLOSION/DEBRIS ANIMATION DATA					   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

BigExpInc1	include	data\objects\effects\ge1903a.Inc
BigExpInc2	include	data\objects\effects\ge1903b.Inc
SmallExpInc1	include	data\objects\effects\gg1904.Inc
GlassInc1	include	data\objects\effects\gg5802a.Inc
GlassInc2	include	data\objects\effects\gg5802b.Inc
GlassInc3	include	data\objects\effects\gg5802c.Inc
;HorElecInc1	include	data\objects\effects\gg8401.Inc
;VerElecInc1	include	data\objects\effects\gg8402.Inc
SparkInc1	include	data\objects\effects\gg8405.Inc
SparksInc1	include	data\objects\effects\gg8406.Inc
Sparks2Inc1	include	data\objects\effects\gg8406b.Inc
FireBallInc1	include	data\objects\effects\ge1905a.Inc
MetalInc1	include	data\objects\effects\ge8701a.Inc
MetalInc2	include	data\objects\effects\ge8701b.Inc
MetalInc3	include	data\objects\effects\ge8701c.Inc
MetalInc4	include	data\objects\effects\ge8701d.Inc
MetalInc5	include	data\objects\effects\ge8701e.Inc
MetalInc6	include	data\objects\effects\ge8701f.Inc
WallDebrisInc1	include	data\objects\effects\gg1901.Inc
WallDebrisInc2	include	data\objects\effects\gg1902.Inc

BigFlrExplodeANM	anmdef	ANM_BigFlrExplode,BigExpChr1,0,0,0,0
ANM_BigFlrExplode	anm1	GE1903A_0001,3,0
			anm1	GE1903A_0002,3,0
			anm1	GE1903A_0003,3,0
			anm1	GE1903A_0004,3,0
			anm1	GE1903A_0005,3,0
			anm1	GE1903A_0006,3,0
			anm1	GE1903A_0007,3,0
			anm1	GE1903A_0008,3,0
			anm1	GE1903A_0009,3,0
			anm1	GE1903A_0010,3,0
			anm1	GE1903A_0011,3,0
			anm1	GE1903A_0012,3,0
			anm1	GE1903A_0013,3,0
			anm1	GE1903A_0014,3,0
			anm1	GE1903A_0015,3,0
			anm1	GE1903A_0016,3,0
			anm	AEnd

BigAirExplodeANM	anmdef	ANM_BigAirExplode,BigExpChr2,0,0,0,0
ANM_BigAirExplode	anm1	GE1903B_0001,3,0
			anm1	GE1903B_0002,3,0
			anm1	GE1903B_0003,3,0
			anm1	GE1903B_0004,3,0
			anm1	GE1903B_0005,3,0
			anm1	GE1903B_0006,3,0
			anm1	GE1903B_0007,3,0
			anm1	GE1903B_0008,3,0
			anm1	GE1903B_0009,3,0
			anm1	GE1903B_0010,3,0
			anm1	GE1903B_0011,3,0
			anm1	GE1903B_0012,3,0
			anm1	GE1903B_0013,3,0
			anm1	GE1903B_0014,3,0
			anm	AEnd

SmallAirExplodeANM	anmdef	ANM_SmallAirExplode,SmallExpChr1,0,0,0,0
ANM_SmallAirExplode	anm1	GG1904_0001,3,0
			anm1	GG1904_0002,3,0
			anm1	GG1904_0003,3,0
			anm1	GG1904_0004,3,0
			anm1	GG1904_0005,3,0
			anm1	GG1904_0006,3,0
			anm1	GG1904_0007,3,0
			anm1	GG1904_0008,3,0
			anm	AEnd
	
FireBall1ANM		anmdef	ANM_FireBall1,FireBallChr1,0,0,0,0
ANM_FireBall1		anm1	GE1905A_0003,2,0
			anm	AEnd

Glass1ANM		anmdef	ANM_Glass1,GlassChr1,0,0,0,0
ANM_Glass1		anm1	GG5802A_0001,3,0
			anm1	GG5802A_0002,3,0
			anm1	GG5802A_0003,3,0
			anm1	GG5802A_0004,3,0
			anm1	GG5802A_0005,3,0
			anm	ARep
Glass2ANM		anmdef	ANM_Glass2,GlassChr2,0,0,0,0
ANM_Glass2		anm1	GG5802B_0001,3,0
			anm1	GG5802B_0002,3,0
			anm1	GG5802B_0003,3,0
			anm1	GG5802B_0004,3,0
			anm1	GG5802B_0005,3,0
			anm	ARep
Glass3ANM		anmdef	ANM_Glass3,GlassChr3,0,0,0,0
ANM_Glass3		anm1	GG5802C_0001,3,0
			anm1	GG5802C_0002,3,0
			anm1	GG5802C_0003,3,0
			anm1	GG5802C_0004,3,0
			anm1	GG5802C_0005,3,0
			anm	ARep

;HorElecANM		anmdef	ANM_HorElec,HorElecChr1,0,0,0,0
;ANM_HorElec		anm1	GG8401_0001,3,0
;			anm1	GG8401_0002,3,0
;			anm1	GG8401_0003,3,0
;			anm1	GG8401_0004,3,0
;			anm1	GG8401_0005,3,0
;			anm1	GG8401_0006,3,0
;			anm1	GG8401_0007,3,0
;			anm1	GG8401_0008,3,0
;			anm	ARep

;VerElecANM		anmdef	ANM_VerElec,VerElecChr1,0,0,0,0
;ANM_VerElec		anm1	GG8402_0001,3,0
;			anm1	GG8402_0002,3,0
;			anm1	GG8402_0003,3,0
;			anm1	GG8402_0004,3,0
;			anm1	GG8402_0005,3,0
;			anm1	GG8402_0006,3,0
;			anm1	GG8402_0007,3,0
;			anm1	GG8402_0008,3,0
;			anm	ARep

SparkANM		anmdef	ANM_Spark,SparkChr1,0,0,0,0
ANM_Spark		anm1	GG8405_0001,3,0
			anm	AEnd
			anm1	GG8405_0002,3,0
			anm1	GG8405_0003,3,0
			anm1	GG8405_0004,3,0
			anm1	GG8405_0005,3,0
			anm	ARep

SparksANM		anmdef	ANM_Sparks,SparksChr1,0,0,0,0
ANM_Sparks		anm1	GG8406_0001,3,0
			anm1	GG8406_0002,3,0
			anm1	GG8406_0003,3,0
			anm1	GG8406_0004,3,0
			anm	ARep

Sparks2ANM		anmdef	ANM_Sparks2,Sparks2Chr1,0,0,0,0
ANM_Sparks2		anm1	GG8406B_0001,2,0
			anm1	GG8406B_0002,2,0
			anm1	GG8406B_0003,2,0
			anm1	GG8406B_0004,2,0
			anm1	GG8406B_0005,2,0
			anm1	GG8406B_0006,2,0
			anm1	GG8406B_0007,2,0
			anm1	GG8406B_0008,2,0
			anm	AEnd

Metal1ANM		anmdef	ANM_Metal1,MetalChr1,0,0,0,0
ANM_Metal1		anm1	GE8701A_0001,3,0
			anm1	GE8701A_0002,3,0
			anm1	GE8701A_0003,3,0
			anm1	GE8701A_0004,3,0
			anm1	GE8701A_0005,3,0
			anm1	GE8701A_0006,3,0
			anm1	GE8701A_0007,3,0
			anm1	GE8701A_0008,3,0
			anm1	GE8701A_0009,3,0
			anm1	GE8701A_0010,3,0
			anm	ARep
Metal2ANM		anmdef	ANM_Metal2,MetalChr2,0,0,0,0
ANM_Metal2		anm1	GE8701B_0001,3,0
			anm1	GE8701B_0002,3,0
			anm1	GE8701B_0003,3,0
			anm1	GE8701B_0004,3,0
			anm1	GE8701B_0005,3,0
			anm1	GE8701B_0006,3,0
			anm1	GE8701B_0007,3,0
			anm1	GE8701B_0008,3,0
			anm1	GE8701B_0009,3,0
			anm1	GE8701B_0010,3,0
			anm	ARep
Metal3ANM		anmdef	ANM_Metal3,MetalChr3,0,0,0,0
ANM_Metal3		anm1	GE8701C_0001,3,0
			anm1	GE8701C_0002,3,0
			anm1	GE8701C_0003,3,0
			anm1	GE8701C_0004,3,0
			anm1	GE8701C_0005,3,0
			anm1	GE8701C_0006,3,0
			anm1	GE8701C_0007,3,0
			anm1	GE8701C_0008,3,0
			anm1	GE8701C_0009,3,0
			anm1	GE8701C_0010,3,0
			anm	ARep
Metal4ANM		anmdef	ANM_Metal4,MetalChr4,0,0,0,0
ANM_Metal4		anm1	GE8701D_0001,3,0
			anm1	GE8701D_0002,3,0
			anm1	GE8701D_0003,3,0
			anm1	GE8701D_0004,3,0
			anm1	GE8701D_0005,3,0
			anm1	GE8701D_0006,3,0
			anm1	GE8701D_0007,3,0
			anm1	GE8701D_0008,3,0
			anm1	GE8701D_0009,3,0
			anm1	GE8701D_0010,3,0
			anm	ARep
Metal5ANM		anmdef	ANM_Metal5,MetalChr5,0,0,0,0
ANM_Metal5		anm1	GE8701E_0001,3,0
			anm1	GE8701E_0002,3,0
			anm1	GE8701E_0003,3,0
			anm1	GE8701E_0004,3,0
			anm1	GE8701E_0005,3,0
			anm1	GE8701E_0006,3,0
			anm1	GE8701E_0007,3,0
			anm1	GE8701E_0008,3,0
			anm1	GE8701E_0009,3,0
			anm1	GE8701E_0010,3,0
			anm	ARep
Metal6ANM		anmdef	ANM_Metal6,MetalChr6,0,0,0,0
ANM_Metal6		anm1	GE8701F_0001,3,0
			anm1	GE8701F_0002,3,0
			anm1	GE8701F_0003,3,0
			anm1	GE8701F_0004,3,0
			anm1	GE8701F_0005,3,0
			anm1	GE8701F_0006,3,0
			anm1	GE8701F_0007,3,0
			anm1	GE8701F_0008,3,0
			anm1	GE8701F_0009,3,0
			anm1	GE8701F_0010,3,0
			anm	ARep


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ LEVEL1 MISC ANIMATION DATA						   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

L1CastleBitsInc1	include	data\level01\anims\gg0801.Inc
L1BoulderInc1		include	data\level01\anims\gg0904.Inc
L1GBalistaLogInc1	include	data\level01\anims\gg1401.Inc
L1BalistaCockInc1	include	data\level01\anims\gg1402.Inc
L1CatapultCockInc1	include	data\level01\anims\gg1501.Inc
L1CouldronTipInc1	include	data\level01\anims\gg1601.Inc
L1CouldronIdleInc1	include	data\level01\anims\gg1602.Inc
L1OilDripInc1		include	data\level01\anims\gg1603.Inc
L1OilSplashInc1		include	data\level01\anims\gg1604.Inc
L1WallOverInc1		include	data\level01\anims\gg1703.Inc
L1WallDebrisInc1	include	data\level01\anims\gg1704.Inc
L1CollapseFloorInc1	include	data\level01\anims\gg1801.Inc
L1FireBallInc1		include	data\level01\anims\gg1905.Inc
L1BigFireBallInc1	include	data\level01\anims\gg1905b.Inc
L1GateInc1		include	data\level01\anims\gg4801.Inc
L1WeightInc1		include	data\level01\anims\gg4901.Inc
;L1HorzFlameInc1		include	data\level01\anims\gg8501.Inc
;L1FireFloorInc1		include	data\level01\anims\gg8901.Inc
L1FireWallInc1		include	data\level01\anims\gg8902.Inc
L1FireWispInc1		include	data\level01\anims\gg8903.Inc


CastlePiece1ANM		anmdef	ANM_CastlePiece1,L1CastleBitsChr1,0,0,0,0
ANM_CastlePiece1	anm1	GG0801_0001,3,0
			anm	AEnd
CastlePiece2ANM		anmdef	ANM_CastlePiece2,L1CastleBitsChr1,0,0,0,0
ANM_CastlePiece2	anm1	GG0801_0002,3,0
			anm	AEnd
CastlePiece3ANM		anmdef	ANM_CastlePiece3,L1CastleBitsChr1,0,0,0,0
ANM_CastlePiece3	anm1	GG0801_0003,3,0
			anm	AEnd
CastlePiece4ANM		anmdef	ANM_CastlePiece4,L1CastleBitsChr1,0,0,0,0
ANM_CastlePiece4	anm1	GG0801_0004,3,0
			anm	AEnd

FlameBoulderANM		anmdef	ANM_FlameBoulder,L1BoulderChr1,0,0,0,0
ANM_FlameBoulder	anm1	GG0904_0001,3,0
			anm1	GG0904_0002,3,0
			anm1	GG0904_0003,3,0
			anm	ARep

BalistaLogANM		anmdef	ANM_BalistaLog,L1BalistaLogChr1,0,0,0,0
ANM_BalistaLog		anm1	GG1401_0001,3,0
			anm1	GG1401_0002,3,0
			anm1	GG1401_0003,3,0
			anm	ARep

BalistaANM		anmdef	ANM_Balista,L1BalistaCockChr1,0,0,0,0
ANM_Balista		anm1	GG1402_0001,3,0
			anm	AEnd
BalistaCockANM		anmdef	ANM_BalistaCock,L1BalistaCockChr1,0,0,0,0
ANM_BalistaCock		anm1	GG1402_0001,4,0
			anm1	GG1402_0002,4,0
			anm1	GG1402_0003,4,0
			anm1	GG1402_0004,4,0
			anm1	GG1402_0005,4,0
			anm1	GG1402_0006,4,0
			anm1	GG1402_0007,4,0
			anm1	GG1402_0008,4,0
			anm1	GG1402_0009,4,0
			anm1	GG1402_0010,4,0
			anm1	GG1402_0011,4,0
			anm	AEnd
BalistaFireANM		anmdef	ANM_BalistaFire,L1BalistaCockChr1,0,0,0,0
ANM_BalistaFire		anm1	GG1402_0012,5,0
			anm1	GG1402_0013,5,0
			anm1	GG1402_0014,5,0
			anm1	GG1402_0015,5,0
			anm1	GG1402_0016,4,0
			anm1	GG1402_0017,4,0
			anm1	GG1402_0018,4,0
			anm	AEnd

CatapultANM		anmdef	ANM_Catapult,L1CatapultCockChr1,0,0,0,0
ANM_Catapult		anm1	GG1501_0001,3,0
   			anm	AEnd
CatapultCockANM		anmdef	ANM_CatapultCock,L1CatapultCockChr1,0,0,0,0
ANM_CatapultCock	anm1	GG1501_0001,1,0
			anm1	GG1501_0002,1,0
			anm1	GG1501_0003,1,0
			anm1	GG1501_0004,1,0
			anm1	GG1501_0005,1,0
			anm	AVar2,1
			anm1	GG1501_0006,1,0
			anm1	GG1501_0007,1,0
			anm1	GG1501_0008,1,0
			anm	AVar1,1
			anm1	GG1501_0009,3,0
			anm1	GG1501_0010,3,0
			anm1	GG1501_0011,3,0
			anm1	GG1501_0012,3,0
			anm1	GG1501_0013,3,0
			anm1	GG1501_0014,3,0
			anm	AEnd

CouldronTipANM		anmdef	ANM_CouldronTip,L1CouldronTipChr1,0,0,0,0
ANM_CouldronTip		anm1	GG1601_0001,3,0
			anm1	GG1601_0002,3,0
			anm1	GG1601_0003,3,0
			anm	AVar1,1
			anm1	GG1601_0004,3,0
			anm1	GG1601_0005,32,0
			anm1	GG1601_0004,3,0
			anm1	GG1601_0003,3,0
			anm1	GG1601_0002,3,0
			anm1	GG1601_0001,3,0
			anm	AEnd

CouldronIdleANM		anmdef	ANM_CouldronIdle,L1CouldronIdleChr1,0,0,0,0
ANM_CouldronIdle	anm1	GG1602_0001,3,0
			anm1	GG1602_0002,3,0
			anm1	GG1602_0003,3,0
			anm1	GG1602_0004,3,0
			anm1	GG1602_0005,3,0
			anm1	GG1602_0006,3,0
			anm1	GG1602_0007,3,0
			anm1	GG1602_0008,3,0
			anm1	GG1602_0009,3,0
			anm	ARep

OilDripANM		anmdef	ANM_OilDrip,L1OilDripChr1,0,0,0,0
ANM_OilDrip		anm1	GG1603_0001,3,0
			anm1	GG1603_0002,3,0
			anm1	GG1603_0003,3,0
			anm	ARep

OilSplashANM		anmdef	ANM_OilSplash,L1OilSplashChr1,0,0,0,0
ANM_OilSplash		anm1	GG1604_0001,3,0
			anm1	GG1604_0002,3,0
			anm1	GG1604_0003,3,0
			anm1	GG1604_0004,3,0
			anm1	GG1604_0005,3,0
			anm	AEnd

CastleWallOverANM	anmdef	ANM_CastleWallOver,L1WallOverChr1,0,0,0,0
ANM_CastleWallOver	anm1	GG1703,3,0
			anm	AEnd
CastleWallDebrisANM	anmdef	ANM_CastleWallDebris,L1WallDebrisChr1,0,0,0,0
ANM_CastleWallDebris	anm1	GG1704_0001,3,0
			anm1	GG1704_0002,3,0
			anm1	GG1704_0003,3,0
			anm1	GG1704_0004,3,0
			anm1	GG1704_0005,3,0
			anm1	GG1704_0006,3,0
			anm1	GG1704_0007,3,0
			anm1	GG1704_0008,3,0
			anm	ARep

FireBallHeadANM		anmdef	ANM_FireBallHead,L1FireBallChr1,0,0,0,0
ANM_FireBallHead	anm1	GG1905_0001,2,0
			anm1	GG1905_0002,2,0
			anm1	GG1905_0003,2,0
			anm	ARep
FireBallTrailANM	anmdef	ANM_FireBallTrail,L1FireBallChr1,0,0,0,0
ANM_FireBallTrail	anm1	GG1905_0004,1,0
			anm1	GG1905_0005,1,0
			anm1	GG1905_0006,1,0
			anm	AEnd

BigFireBallHeadANM	anmdef	ANM_BigFireBallHead,L1BigFireBallChr1,0,0,0,0
ANM_BigFireBallHead	anm1	GG1905B_0001,2,0
			anm1	GG1905B_0002,2,0
			anm1	GG1905B_0003,2,0
			anm	ARep
BigFireBallTrailANM	anmdef	ANM_BigFireBallTrail,L1BigFireBallChr1,0,0,0,0
ANM_BigFireBallTrail	anm1	GG1905B_0004,1,0
			anm1	GG1905B_0005,1,0
			anm1	GG1905B_0006,1,0
			anm	AEnd

CollapseFloorANM 	anmdef	ANM_CollapseFloor,L1CollapseFloorChr1,0,0,0,0
ANM_CollapseFloor	anm1	GG1801,3,0
			anm	AEnd

;HorzFlameANM		anmdef	ANM_HorzFlame,L1HorzFlameChr1,0,0,0,0
;ANM_HorzFlame		anm1	GG8501_0001,3,0
;			anm1	GG8501_0002,3,0
;			anm1	GG8501_0003,3,0
;			anm1	GG8501_0004,3,0
;			anm1	GG8501_0005,3,0
;			anm1	GG8501_0006,3,0
;			anm1	GG8501_0007,3,0
;			anm1	GG8501_0008,3,0
;			anm1	GG8501_0009,3,0
;			anm1	GG8501_0010,3,0
;			anm1	GG8501_0011,3,0
;			anm	ARep

;FireFloorANM 		anmdef	ANM_FireFloor,L1FireFloorChr1,0,0,0,0
;ANM_FireFloor		anm1	GG8901_0001,3,0
;			anm1	GG8901_0002,3,0
;			anm1	GG8901_0003,3,0
;			anm1	GG8901_0004,3,0
;			anm1	GG8901_0005,3,0
;			anm1	GG8901_0006,3,0
;			anm1	GG8901_0007,3,0
;			anm1	GG8901_0008,3,0
;			anm	ARep

FireWallANM 		anmdef	ANM_FireWall,L1FireWallChr1,0,0,0,0
ANM_FireWall		anm1	GG8902_0001,3,0
			anm1	GG8902_0002,3,0
			anm1	GG8902_0003,3,0
			anm1	GG8902_0004,3,0
			anm1	GG8902_0005,3,0
			anm1	GG8902_0006,3,0
			anm1	GG8902_0007,3,0
			anm1	GG8902_0008,3,0
			anm	ARep

FireWispANM 		anmdef	ANM_FireWisp,L1FireWispChr1,0,0,0,0
ANM_FireWisp		anm1	GG8903_0001,3,0
			anm1	GG8903_0002,3,0
			anm1	GG8903_0003,3,0
			anm1	GG8903_0004,3,0
			anm1	GG8903_0005,3,0
			anm1	GG8903_0006,3,0
			anm1	GG8903_0007,3,0
			anm	AEnd

GateANM 		anmdef	ANM_Gate,L1GateChr1,0,0,0,0
ANM_Gate		anm1	GG4801,3,0
			anm	AEnd

WeightANM 		anmdef	ANM_Weight,L1WeightChr1,0,0,0,0
ANM_Weight		anm1	GG4901,3,0
			anm	AEnd


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ LEVEL2 MISC ANIMATION DATA						   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

VentExhaustInc1		include	data\level02\anims\gg2401.Inc
VentSparksInc1		include	data\level02\anims\gg2402.Inc
VentChainInc1		include	data\level02\anims\gg3303.Inc
ColumnClawInc1		include	data\level02\anims\gg2501.Inc
ColumnFireInc1a		include	data\level02\anims\gg2801a.Inc
ColumnFireInc1b		include	data\level02\anims\gg2801b.Inc
ColumnFireInc2		include	data\level02\anims\gg2802.Inc
ColumnFireInc3		include	data\level02\anims\gg2803.Inc
		
VentClosedANM 		anmdef	ANM_VentClosed,VentExhaustChr1,0,0,0,0
ANM_VentClosed		anm1	GG2401_0001,3,0
			anm	AEnd
VentOpeningANM 		anmdef	ANM_VentOpening,VentExhaustChr1,0,0,0,0
ANM_VentOpening		anm1	GG2401_0001,3,0
			anm1	GG2401_0002,3,0
			anm1	GG2401_0003,3,0
			anm1	GG2401_0004,3,0
			anm1	GG2401_0005,3,0
			anm1	GG2401_0006,3,0
			anm1	GG2401_0007,3,0
			anm1	GG2401_0008,3,0
			anm1	GG2401_0009,3,0
			anm1	GG2401_0010,3,0
			anm1	GG2401_0011,3,0
			anm1	GG2401_0012,3,0
			anm1	GG2401_0013,3,0
			anm1	GG2401_0014,3,0
			anm1	GG2401_0015,3,0
			anm1	GG2401_0016,3,0
			anm1	GG2401_0017,3,0
			anm1	GG2401_0018,3,0
			anm	AEnd
VentClosingANM 		anmdef	ANM_VentClosing,VentExhaustChr1,0,0,0,0
ANM_VentClosing		anm1	GG2401_0018,3,0
			anm1	GG2401_0017,3,0
			anm1	GG2401_0016,3,0
			anm1	GG2401_0015,3,0
			anm1	GG2401_0014,3,0
			anm1	GG2401_0013,3,0
			anm1	GG2401_0012,3,0
			anm1	GG2401_0011,3,0
			anm1	GG2401_0010,3,0
			anm1	GG2401_0009,3,0
			anm1	GG2401_0008,3,0
			anm1	GG2401_0007,3,0
			anm1	GG2401_0006,3,0
			anm1	GG2401_0005,3,0
			anm1	GG2401_0004,3,0
			anm1	GG2401_0003,3,0
			anm1	GG2401_0002,3,0
			anm1	GG2401_0001,3,0
			anm	AEnd
VentOpenANM 		anmdef	ANM_VentOpen,VentExhaustChr1,0,0,0,0
ANM_VentOpen		anm1	GG2401_0018,3,0
			anm	AEnd

VentSparksANM		anmdef	ANM_VentSparks,VentSparksChr1,0,0,0,0
ANM_VentSparks		anm1	GG2402_0001,3,0
			anm1	GG2402_0002,3,0
			anm1	GG2402_0003,3,0
			anm1	GG2402_0004,3,0
			anm1	GG2402_0005,3,0
			anm1	GG2402_0006,3,0
			anm1	GG2402_0007,3,0
			anm1	GG2402_0008,3,0
			anm	ARep

VentChainANM		anmdef	ANM_VentChain,VentChainChr1,0,0,0,0
ANM_VentChain		anm1	GG3303,3,0
			anm	AEnd


ClawClosedANM		anmdef	ANM_ClawClosed,ColumnClawChr1,0,0,0,0
ANM_ClawClosed		anm1	GG2501_0001,0,0
	      		anm	AEnd
ClawOpeningANM		anmdef	ANM_ClawOpening,ColumnClawChr1,0,0,0,0
ANM_ClawOpening		anm1	GG2501_0001,3,0
			anm1	GG2501_0002,3,0
			anm1	GG2501_0003,3,0
			anm1	GG2501_0004,3,0
			anm1	GG2501_0005,3,0
			anm1	GG2501_0006,3,0
			anm1	GG2501_0007,3,0
			anm	AEnd
ClawClosingANM		anmdef	ANM_ClawClosing,ColumnClawChr1,0,0,0,0
ANM_ClawClosing		anm1	GG2501_0007,3,0
			anm1	GG2501_0006,3,0
			anm1	GG2501_0005,3,0
			anm1	GG2501_0004,3,0
			anm1	GG2501_0003,3,0
			anm1	GG2501_0002,3,0
			anm1	GG2501_0001,3,0
			anm	AEnd
ClawOpenANM		anmdef	ANM_ClawOpen,ColumnClawChr1,0,0,0,0
ANM_ClawOpen		anm1	GG2501_0007,3,0
			anm	AEnd
			
ColumnBubbleANM		anmdef	ANM_ColumnBubble,ColumnFireChr1a,0,0,0,0
ANM_ColumnBubble	anm1	GG2801A_0001,3,0
			anm1	GG2801A_0002,3,0
			anm	AVar1,1
			anm1	GG2801A_0003,3,0
			anm1	GG2801A_0004,3,0
			anm1	GG2801A_0005,3,0
			anm1	GG2801A_0006,3,0
			anm1	GG2801A_0007,3,0
			anm1	GG2801A_0008,3,0
			anm1	GG2801A_0009,3,0
			anm1	GG2801A_0010,3,0
			anm1	GG2801A_0011,3,0
			anm	AEnd
ColumnFireBallStartANM	anmdef	ANM_ColumnFireBallStart,ColumnFireChr1b,0,0,0,0
ANM_ColumnFireBallStart	anm1	GG2801B_0001,3,0
			anm1	GG2801B_0002,3,0
			anm1	GG2801B_0003,3,0
			anm1	GG2801B_0004,3,0
			anm1	GG2801B_0005,3,0
			anm1	GG2801B_0006,3,0
			anm1	GG2801B_0007,3,0
			anm1	GG2801B_0008,3,0
			anm	AEnd
ColumnFireBallUpANM	anmdef	ANM_ColumnFireBallUp,ColumnFireChr2,0,0,0,0
ANM_ColumnFireBallUp	anm1	GG2802_0001,3,0
			anm1	GG2802_0002,3,0
			anm1	GG2802_0003,3,0
			anm1	GG2802_0004,3,0
			anm1	GG2802_0005,3,0
			anm1	GG2802_0006,3,0
			anm1	GG2802_0007,3,0
			anm	ARep
ColumnFireBallFinANM	anmdef	ANM_ColumnFireBallFin,ColumnFireChr3,0,0,0,0
ANM_ColumnFireBallFin	anm1	GG2803_0001,3,0
			anm1	GG2803_0002,3,0
			anm1	GG2803_0003,3,0
			anm1	GG2803_0004,3,0
			anm1	GG2803_0005,3,0
			anm1	GG2803_0006,3,0
			anm1	GG2803_0007,3,0
			anm1	GG2803_0008,3,0
			anm	AEnd


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ LEVEL3 MISC ANIMATION DATA						   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

SkyLightInc1		include	data\level03\anims\gg5801.inc
BreakLightInc1		include	data\level03\anims\gg3601.inc
ThrowCrateInc1		include	data\level03\anims\gg3605.inc
WoodDebrisInc1		include	data\level03\anims\gg3605a.inc
WoodDebrisInc2		include	data\level03\anims\gg3605b.inc
WoodDebrisInc3		include	data\level03\anims\gg3605c.inc
BreakEdgeLftInc1	include	data\level03\anims\gg3603a.inc
BreakEdgeRteInc1	include	data\level03\anims\gg3603b.inc
BreakEdgeLftInc2	include	data\level03\anims\gg3603c.inc
BreakEdgeRteInc2	include	data\level03\anims\gg3603d.inc
WallOverInc1		include	data\level03\anims\gg6201.inc
WallDebrisInc		include	data\level03\anims\gg1705.inc
SignPieceInc1		include	data\level03\anims\gg3609.inc
SteamVentInc1		include	data\level03\anims\gg3602.inc

; - Animation Data ---------------------------------------------------------

SkyLightANM		anmdef	ANM_SkyLight,SkyLightChr1,0,0,0,0
ANM_SkyLight		anm1	GG5801_0001,3,0
			anm	AEnd
SkyLightBrokenANM 	anmdef	ANM_SkyLightBroken,SkyLightChr1,0,0,0,0
ANM_SkyLightBroken	anm1	GG5801_0002,1,0
			anm1	GG5801_0003,1,0
			anm1	GG5801_0004,1,0
			anm1	GG5801_0005,1,0
			anm1	GG5801_0006,1,0
			anm	AEnd


; - Animation Data ---------------------------------------------------------

SteamVentANM		anmdef	ANM_SteamVent,SteamVentChr1,0,0,0,0
ANM_SteamVent		anm1	GG3602_0001,3,0
			anm	AEnd
SteamVentBrokenANM 	anmdef	ANM_SteamVentBroken,SteamVentChr1,0,0,0,0
ANM_SteamVentBroken	anm1	GG3602_0002,3,0
			anm1	GG3602_0003,3,0
			anm1	GG3602_0004,3,0
			anm1	GG3602_0005,3,0
			anm1	GG3602_0006,3,0
			anm1	GG3602_0007,3,0
			anm1	GG3602_0008,3,0
			anm	ARep


; - Animation Data ---------------------------------------------------------

BreakLightANM		anmdef	ANM_BreakLight,BreakLightChr1,0,0,0,0
ANM_BreakLight		anm1	GG3601_0001,3,0
			anm	AEnd
BreakLightBrokenANM	anmdef	ANM_BreakLightBroken,BreakLightChr1,0,0,0,0
ANM_BreakLightBroken	anm1	GG3601_0002,3,0
			anm	AEnd


; - Animation Data ---------------------------------------------------------

ThrowCrateANM		anmdef	ANM_ThrowCrate,ThrowCrateChr1,0,0,0,0
ANM_ThrowCrate		anm1	GG3605,3,0
			anm	AEnd

Wood1ANM		anmdef	ANM_Wood1,WoodDebrisChr1,0,0,0,0
ANM_Wood1		anm1	GG3605A_0001,3,0
			anm1	GG3605A_0002,3,0
			anm1	GG3605A_0003,3,0
			anm1	GG3605A_0004,3,0
			anm	ARep
Wood2ANM		anmdef	ANM_Wood2,WoodDebrisChr2,0,0,0,0
ANM_Wood2		anm1	GG3605B_0001,3,0
			anm1	GG3605B_0002,3,0
			anm1	GG3605B_0003,3,0
			anm1	GG3605B_0004,3,0
			anm	ARep
Wood3ANM		anmdef	ANM_Wood3,WoodDebrisChr3,0,0,0,0
ANM_Wood3		anm1	GG3605C_0001,3,0
			anm1	GG3605C_0002,3,0
			anm1	GG3605C_0003,3,0
			anm1	GG3605C_0004,3,0
			anm	ARep


; - Animation Data ---------------------------------------------------------

Sign1ANM		anmdef	ANM_Sign1,SignPieceChr1,0,0,0,0
ANM_Sign1		anm1	GG3609_0001,3,0
			anm	AEnd
Sign2ANM		anmdef	ANM_Sign2,SignPieceChr1,0,0,0,0
ANM_Sign2		anm1	GG3609_0002,3,0
			anm	AEnd
Sign3ANM		anmdef	ANM_Sign3,SignPieceChr1,0,0,0,0
ANM_Sign3		anm1	GG3609_0003,3,0
			anm	AEnd
Sign4ANM		anmdef	ANM_Sign4,SignPieceChr1,0,0,0,0
ANM_Sign4		anm1	GG3609_0004,3,0
			anm	AEnd
Sign5ANM		anmdef	ANM_Sign5,SignPieceChr1,0,0,0,0
ANM_Sign5		anm1	GG3609_0005,3,0
			anm	AEnd
Sign6ANM		anmdef	ANM_Sign6,SignPieceChr1,0,0,0,0
ANM_Sign6		anm1	GG3609_0006,3,0
			anm	AEnd
Sign7ANM		anmdef	ANM_Sign7,SignPieceChr1,0,0,0,0
ANM_Sign7		anm1	GG3609_0007,3,0
			anm	AEnd
Sign8ANM		anmdef	ANM_Sign8,SignPieceChr1,0,0,0,0
ANM_Sign8		anm1	GG3609_0008,3,0
			anm	AEnd
Sign9ANM		anmdef	ANM_Sign9,SignPieceChr1,0,0,0,0
ANM_Sign9		anm1	GG3609_0009,3,0
			anm	AEnd
Sign10ANM		anmdef	ANM_Sign10,SignPieceChr1,0,0,0,0
ANM_Sign10		anm1	GG3609_0010,3,0
			anm	AEnd
Sign11ANM		anmdef	ANM_Sign11,SignPieceChr1,0,0,0,0
ANM_Sign11		anm1	GG3609_0011,3,0
			anm	AEnd
Sign12ANM		anmdef	ANM_Sign12,SignPieceChr1,0,0,0,0
ANM_Sign12		anm1	GG3609_0012,3,0
			anm	AEnd
Sign13ANM		anmdef	ANM_Sign13,SignPieceChr1,0,0,0,0
ANM_Sign13		anm1	GG3609_0013,3,0
			anm	AEnd
Sign14ANM		anmdef	ANM_Sign14,SignPieceChr1,0,0,0,0
ANM_Sign14		anm1	GG3609_0014,3,0
			anm	AEnd
Sign15ANM		anmdef	ANM_Sign15,SignPieceChr1,0,0,0,0
ANM_Sign15		anm1	GG3609_0015,3,0
			anm	AEnd
Sign16ANM		anmdef	ANM_Sign16,SignPieceChr1,0,0,0,0
ANM_Sign16		anm1	GG3609_0016,3,0
			anm	AEnd



; - Animation Data ---------------------------------------------------------

BreakEdgeLeft1ANM 	anmdef	ANM_BreakEdgeLeft1,BreakEdgeLChr1,0,0,0,0
ANM_BreakEdgeLeft1	anm1	GG3603A_0001,3,0
			anm	AEnd
BreakEdgeLeft1BrkANM 	anmdef	ANM_BreakEdgeLeft1Brk,BreakEdgeLChr1,0,0,0,0
ANM_BreakEdgeLeft1Brk	anm1	GG3603A_0002,3,0
			anm1	GG3603A_0003,3,0
			anm1	GG3603A_0004,3,0
			anm	AEnd
BreakEdgeLeft1FallANM 	anmdef	ANM_BreakEdgeLeft1Fall,BreakEdgeLChr1,0,0,0,0
ANM_BreakEdgeLeft1Fall	anm1	GG3603A_0004,3,0
			anm	AEnd
BreakEdgeLeft2ANM 	anmdef	ANM_BreakEdgeLeft2,BreakEdgeLChr2,0,0,0,0
ANM_BreakEdgeLeft2	anm1	GG3603C_0001,3,0
			anm	AEnd
BreakEdgeLeft2BrkANM 	anmdef	ANM_BreakEdgeLeft2Brk,BreakEdgeLChr2,0,0,0,0
ANM_BreakEdgeLeft2Brk	anm1	GG3603C_0002,3,0
			anm1	GG3603C_0003,3,0
			anm	AEnd
BreakEdgeLeft2FallANM 	anmdef	ANM_BreakEdgeLeft2Fall,BreakEdgeLChr2,0,0,0,0
ANM_BreakEdgeLeft2Fall	anm1	GG3603C_0003,3,0
			anm	AEnd

BreakEdgeRight1ANM 	anmdef	ANM_BreakEdgeRight1,BreakEdgeRChr1,0,0,0,0
ANM_BreakEdgeRight1	anm1	GG3603B_0001,3,0
			anm	AEnd
BreakEdgeRight1BrkANM 	anmdef	ANM_BreakEdgeRight1Brk,BreakEdgeRChr1,0,0,0,0
ANM_BreakEdgeRight1Brk	anm1	GG3603B_0002,3,0
			anm1	GG3603B_0003,3,0
			anm	AEnd
BreakEdgeRight1FallANM 	anmdef	ANM_BreakEdgeRight1Fall,BreakEdgeRChr1,0,0,0,0
ANM_BreakEdgeRight1Fall	anm1	GG3603B_0003,3,0
			anm	AEnd
BreakEdgeRight2ANM 	anmdef	ANM_BreakEdgeRight2,BreakEdgeRChr2,0,0,0,0
ANM_BreakEdgeRight2	anm1	GG3603D_0001,3,0
			anm	AEnd
BreakEdgeRight2BrkANM 	anmdef	ANM_BreakEdgeRight2Brk,BreakEdgeRChr2,0,0,0,0
ANM_BreakEdgeRight2Brk	anm1	GG3603D_0002,3,0
			anm1	GG3603D_0003,3,0
			anm	AEnd
BreakEdgeRight2FallANM 	anmdef	ANM_BreakEdgeRight2Fall,BreakEdgeRChr2,0,0,0,0
ANM_BreakEdgeRight2Fall	anm1	GG3603D_0003,3,0
			anm	AEnd



; - Animation Data ---------------------------------------------------------

WallOverLANM		anmdef	ANM_WallOverL,WallOverChr1,0,0,0,0
ANM_WallOverL		anm1	GG6201_0001,0,0
			anm	AEnd
WallOverRANM		anmdef	ANM_WallOverR,WallOverChr1,0,0,0,0
ANM_WallOverR		anm1	GG6201_0002,0,0
			anm	AEnd

WallDebrisANM		anmdef	ANM_WallDebris,WallDebrisChr1,0,0,0,0
ANM_WallDebris		anm1	GG1705_0001,3,0
			;anm	AEnd
			anm1	GG1705_0002,3,0
			anm1	GG1705_0003,3,0
			anm1	GG1705_0004,3,0
			anm1	GG1705_0005,3,0
			anm	ARep


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ LEVEL5 MISC ANIMATION DATA						   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

L5SignInc1		include	data\level05\anims\gg7101.Inc
L5LightsInc1		include	data\level05\anims\gg7102.Inc
L5SignPiecesInc1	include	data\level05\anims\gg7104.Inc
L5SkylightInc1		include	data\level05\anims\gg7201.Inc
L5DoorInc1		include	data\level05\anims\gg7202.Inc
L5DebrisInc1		include	data\level05\anims\gg7301.Inc
L5ElecBallInc1		include	data\level05\anims\gg7401.Inc
L5ElecBarInc1		include	data\level05\anims\gg7402.Inc
L5TunnelEdgeInc1	include	data\level05\anims\gg7403.Inc
L5ForegroundPostInc1	include	data\level05\anims\gg7404.Inc


L5ForegroundPostANM 	anmdef	ANM_L5ForegroundPost,L5ForegroundPostChr1,0,0,0,0
ANM_L5ForegroundPost	anm1	GG7404,0,0
			anm	AEnd

L5TunnelEdgeANM 	anmdef	ANM_L5TunnelEdge,L5TunnelEdgeChr1,0,0,0,0
ANM_L5TunnelEdge	anm1	GG7403,0,0
			anm	AEnd

L5HighSignPoleANM 	anmdef	ANM_L5HighSignPole,L5SignChr1,0,0,0,0
ANM_L5HighSignPole	anm1	GG7101_0001,0,0
			anm	AEnd
L5HighSignANM		anmdef	ANM_L5HighSign,L5SignChr1,0,0,0,0
ANM_L5HighSign		anm1	GG7101_0002,5,0
			anm1	GG7101_0003,5,0
			anm1	GG7101_0004,5,0
			anm1	GG7101_0005,5,0
			anm1	GG7101_0006,5,0
			anm1	GG7101_0007,5,0
			anm1	GG7101_0008,5,0
			anm	AEnd

L5LowLightMountANM	anmdef	ANM_L5LowLightMount,L5LightsChr1,0,0,0,0
ANM_L5LowLightMount	anm1	GG7102_0001,0,0
			anm	AEnd
L5LowLight1ANM		anmdef	ANM_L5LowLight1,L5LightsChr1,0,0,0,0
ANM_L5LowLight1		anm1	GG7102_0002,0,0
			anm	AEnd
L5LowLight2ANM		anmdef	ANM_L5LowLight2,L5LightsChr1,0,0,0,0
ANM_L5LowLight2		anm1	GG7102_0003,0,0
			anm	AEnd
L5LowLight3ANM		anmdef	ANM_L5LowLight3,L5LightsChr1,0,0,0,0
ANM_L5LowLight3		anm1	GG7102_0004,0,0
			anm	AEnd

L5SignPieceANM		anmdef	ANM_L5SignPiece,L5SignPiecesChr1,0,0,0,0
ANM_L5SignPiece		anm1	GG7104_0001,3,0
			anm1	GG7104_0002,3,0
			anm1	GG7104_0003,3,0
			anm1	GG7104_0004,3,0
			anm1	GG7104_0005,3,0
			anm1	GG7104_0006,3,0
			anm1	GG7104_0007,3,0
			anm1	GG7104_0008,3,0
			anm	ARep

L5SkylightANM		anmdef	ANM_L5Skylight,L5SkylightChr1,0,0,0,0
ANM_L5Skylight		anm1	GG7201,0,0
			anm	AEnd
L5DoorANM		anmdef	ANM_L5Door,L5DoorChr1,0,0,0,0
ANM_L5Door		anm1	GG7202,0,0
			anm	AEnd

L5DebrisANM		anmdef	ANM_L5Debris,L5DebrisChr1,0,0,0,0
ANM_L5Debris		anm1	GG7301_0001,3,0
			anm1	GG7301_0002,3,0
			anm1	GG7301_0003,3,0
			anm1	GG7301_0004,3,0
			anm1	GG7301_0005,3,0
			anm	ARep

L5ElecBallANM		anmdef	ANM_L5ElecBall,L5ElecBallChr1,0,0,0,0
ANM_L5ElecBall		anm1	GG7401_0001,2,0
			anm1	GG7401_0002,2,0
			anm1	GG7401_0003,2,0
			anm1	GG7401_0004,2,0
			anm1	GG7401_0005,2,0
			anm	AEnd

L5ElecBarANM		anmdef	ANM_L5ElecBar,L5ElecBarChr1,0,0,0,0
ANM_L5ElecBar		anm1	GG7402_0001,2,0
			anm1	GG7402_0002,2,0
			anm1	GG7402_0003,2,0
			anm1	GG7402_0004,2,0
			anm1	GG7402_0005,2,0
			anm1	GG7402_0006,2,0
			anm1	GG7402_0007,2,0
			anm1	GG7402_0008,2,0
			anm	ARep


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ LEVEL7 MISC ANIMATION DATA						   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

L7RocksInc1		include	data\level07\anims\gg8701.Inc
L7CouldronInc1		include	data\level07\anims\gg8601.Inc
L7FurnaceInc1		include	data\level07\anims\gg8801.Inc
L7VertFlameInc1		include	data\level07\anims\gg8803.Inc
L7TroughInc1		include	data\level07\anims\gg8804.Inc
L7RobotGenInc1		include	data\level07\anims\gg9103.Inc
L7PlatOrbInc1		include	data\level07\anims\gg9104.Inc
L7WallFlameInc1		include	data\level07\anims\gg9106.Inc
L7FloorFlameInc1	include	data\level07\anims\gg9107.Inc
L7EnergizerInc1		include	data\level07\anims\gg8005.Inc
L7TentacleInc1		include	data\level07\anims\gg9201.Inc
L7WallPasteInc1		include	data\level07\anims\gg9202.Inc
L7InfuserInc1		include	data\level07\anims\gg9203.Inc
L7BigGunsInc1		include	data\level07\anims\gg9204.Inc
L7BigGunsProjInc1	include	data\level07\anims\gg9205.Inc
L7EdgePasteInc1		include	data\level07\anims\gg9206.Inc
L7FlameLickInc1		include	data\level07\anims\gg8806.Inc



BigGunsProjANM		anmdef	ANM_BigGunsProj,L7BigGunsProjChr1,0,0,0,0
ANM_BigGunsProj		anm1	GG9205_0001,3,0
			anm1	GG9205_0002,3,0
			anm1	GG9205_0003,3,0
			anm	AVar1,1   
ANM_BGP1		anm1	GG9205_0004,3,0
			anm1	GG9205_0005,3,0
			anm1	GG9205_0006,3,0
			anm	AJmp,ANM_BGP1
			
BigGunsANM		anmdef	ANM_BigGuns,L7BigGunsChr1,0,0,0,0
ANM_BigGuns		anm1	GG9204,3,0
			anm	AEnd

InfuserANM		anmdef	ANM_Infuser,L7InfuserChr1,0,0,0,0
ANM_Infuser		anm1	GG9203_0001,3,0
			anm1	GG9203_0002,3,0
			anm1	GG9203_0003,3,0
			anm1	GG9203_0004,3,0
			anm1	GG9203_0005,3,0
			anm1	GG9203_0006,3,0
			anm1	GG9203_0007,3,0
			anm1	GG9203_0008,3,0
			anm1	GG9203_0009,3,0
			anm	AVar1,1
ANM_I2			anm1	GG9203_0010,3,0
			anm1	GG9203_0010,3,0
			anm1	GG9203_0011,3,0
			anm	AVar2,1
			anm	ALoop,ANM_I2,24
			anm	AEnd

TentacleStartANM 	anmdef	ANM_TentacleStart,L7TentacleChr1,0,0,0,0
ANM_TentacleStart	anm1	GG9201_0001,3,0
			anm1	GG9201_0002,3,0
			anm1	GG9201_0003,3,0
			anm1	GG9201_0004,3,0
			anm1	GG9201_0005,3,0
			anm1	GG9201_0006,3,0
			anm1	GG9201_0007,3,0
			anm1	GG9201_0008,3,0
			anm1	GG9201_0009,3,0
			anm	AEnd

TentacleRiseANM 	anmdef	ANM_TentacleRise,L7TentacleChr1,0,0,0,0
ANM_TentacleRise	anm1	GG9201_0010,2,0
			anm1	GG9201_0011,2,0
			anm1	GG9201_0012,3,0
			anm1	GG9201_0013,3,0
			anm1	GG9201_0014,4,0
			anm1	GG9201_0015,4,0
			anm1	GG9201_0016,5,0
			anm1	GG9201_0017,5,0
			anm1	GG9201_0018,5,0
			anm1	GG9201_0019,6,0
			anm1	GG9201_0020,6,0
			anm1	GG9201_0021,6,0
			anm1	GG9201_0022,6,0
			anm1	GG9201_0023,6,0
			anm1	GG9201_0024,6,0
			anm	AEnd

EnergizerANM		anmdef	ANM_Energizer,L7EnergizerChr1,0,0,0,0
ANM_Energizer		anm1	GG8005_0001,3,0
			anm1	GG8005_0002,3,0
			anm1	GG8005_0003,3,0
			anm1	GG8005_0004,3,0
			anm1	GG8005_0005,3,0
			anm1	GG8005_0006,3,0
			anm1	GG8005_0007,3,0
			anm1	GG8005_0008,3,0
			anm1	GG8005_0009,3,0
			anm1	GG8005_0010,3,0
			anm	ARep

BigRockANM		anmdef	ANM_BigRock,L7RocksChr1,0,0,0,0
ANM_BigRock		anm1	GG8701_0003,3,0
			anm	AEnd
MediumRockANM		anmdef	ANM_MediumRock,L7RocksChr1,0,0,0,0
ANM_MediumRock		anm1	GG8701_0002,3,0
			anm	AEnd
SmallRockANM		anmdef	ANM_SmallRock,L7RocksChr1,0,0,0,0
ANM_SmallRock		anm1	GG8701_0001,3,0
			anm	AEnd

BigCouldronANM		anmdef	ANM_BigCouldron,L7CouldronChr1,0,0,0,0
ANM_BigCouldron		anm1	GG8601,3,0
			anm	AEnd

FurnaceZeroANM		anmdef	ANM_FurnaceZero,L7FurnaceChr1,0,0,0,0
ANM_FurnaceZero		anm1	GG8801_0001,3,0
			anm1	GG8801_0002,3,0
			anm1	GG8801_0003,3,0
			anm	AEnd
FurnaceFlareANM		anmdef	ANM_FurnaceFlare,L7FurnaceChr1,0,0,0,0
ANM_FurnaceFlare	anm1	GG8801_0003,0,0
			anm1	GG8801_0003,3,0
			anm1	GG8801_0004,3,0
			anm	ALoop,ANM_FurnaceFlare,3
			anm	AVar1,1
			anm1	GG8801_0005,3,0
			anm1	GG8801_0006,3,0
			anm1	GG8801_0007,3,0
			anm1	GG8801_0008,3,0
			anm1	GG8801_0009,3,0
			anm1	GG8801_0010,3,0
			anm1	GG8801_0011,3,0
			anm1	GG8801_0012,3,0
			anm1	GG8801_0001,3,0
			anm	AEnd

VertFlameFlareANM 	anmdef	ANM_VertFlameFlare,L7VertFlameChr1,0,0,0,0
ANM_VertFlameFlare	anm1	GG8803_0001,3,0
			anm1	GG8803_0002,3,0
			anm1	GG8803_0003,3,0
			anm1	GG8803_0004,3,0
			anm1	GG8803_0005,3,0
			anm1	GG8803_0006,3,0
			anm	ARep

TroughANM		anmdef	ANM_Trough,L7TroughChr1,0,0,0,0
ANM_Trough		anm1	GG8804_0001,3,0
			anm	AEnd
TroughTipANM		anmdef	ANM_TroughTip,L7TroughChr1,0,0,0,0
ANM_TroughTip		anm1	GG8804_0002,3,0
			anm1	GG8804_0003,3,0
			anm1	GG8804_0004,3,0
			anm1	GG8804_0005,3,0
			anm1	GG8804_0006,3,0
			anm1	GG8804_0007,3,0
			anm1	GG8804_0008,3,0
			anm1	GG8804_0009,32,0
			anm1	GG8804_0008,3,0
			anm1	GG8804_0007,3,0
			anm1	GG8804_0006,3,0
			anm1	GG8804_0005,3,0
			anm1	GG8804_0004,3,0
			anm1	GG8804_0003,3,0
			anm1	GG8804_0002,3,0
			anm1	GG8804_0001,3,0
			anm	AEnd

L7FlameLickANM		anmdef	ANM_L7FlameLick,L7FlameLickChr1,0,0,0,0
ANM_L7FlameLick		anm1	GG8806_0001,3,0
			anm1	GG8806_0002,3,0
			anm1	GG8806_0003,3,0
			anm1	GG8806_0004,3,0
			anm1	GG8806_0005,3,0
			anm1	GG8806_0006,3,0
			anm1	GG8806_0007,3,0
;			anm1	GG8806_0008,3,0
			anm	AEnd

RobotGenZeroANM		anmdef	ANM_RobotGenZero,L7RobotGenChr1,0,0,0,0
ANM_RobotGenZero	anm1	GG9103_0001,3,0
			anm	AEnd
RobotGenOpenANM		anmdef	ANM_RobotGenOpen,L7RobotGenChr1,0,0,0,0
ANM_RobotGenOpen	anm1	GG9103_0002,3,0
			anm1	GG9103_0003,3,0
			anm1	GG9103_0004,3,0
			anm1	GG9103_0005,3,0
			anm1	GG9103_0006,3,0
			anm	AVar1,0
			anm	AEnd
RobotGenCloseANM 	anmdef	ANM_RobotGenClose,L7RobotGenChr1,0,0,0,0
ANM_RobotGenClose	anm1	GG9103_0005,3,0
			anm1	GG9103_0004,3,0
			anm1	GG9103_0003,3,0
			anm1	GG9103_0002,3,0
			anm1	GG9103_0001,3,0
			anm	AEnd

OrbPlatformLinkANM 	anmdef	ANM_OrbPlatformLink,L7PlatOrbChr1,0,0,0,0
ANM_OrbPlatformLink	anm1	GG9104_0002,3,0
			anm	AEnd
OrbPlatformANM		anmdef	ANM_OrbPlatform,L7PlatOrbChr1,0,0,0,0
ANM_OrbPlatform		anm1	GG9104_0001,3,0
			anm	AEnd
OrbPlatformOrbANM	anmdef	ANM_OrbPlatformOrb,L7PlatOrbChr1,0,0,0,0
ANM_OrbPlatformOrb	anm1	GG9104_0003,3,0
			anm	AEnd

WallFlameZeroANM 	anmdef	ANM_WallFlameZero,L7WallFlameChr1,0,0,0,0
ANM_WallFlameZero	anm1	GG9106_0001,3,0
			anm	AEnd
WallFlameFlareANM 	anmdef	ANM_WallFlameFlare,L7WallFlameChr1,0,0,0,0
ANM_WallFlameFlare	anm1	GG9106_0001,3,0
			anm1	GG9106_0002,3,0
			anm1	GG9106_0003,3,0
			anm1	GG9106_0004,3,0
			anm1	GG9106_0005,3,0
			anm1	GG9106_0006,3,0
			anm1	GG9106_0007,3,0
			anm1	GG9106_0008,3,0
			anm1	GG9106_0009,3,0
			anm1	GG9106_0007,3,0
			anm1	GG9106_0008,3,0
			anm1	GG9106_0009,3,0
			anm1	GG9106_0007,3,0
			anm1	GG9106_0008,3,0
			anm1	GG9106_0009,3,0
			anm1	GG9106_0010,3,0
			anm1	GG9106_0011,3,0
			anm1	GG9106_0012,3,0
			anm1	GG9106_0013,3,0
			anm	AEnd

FloorFlameZeroANM 	anmdef	ANM_FloorFlameZero,L7FloorFlameChr1,0,0,0,0
ANM_FloorFlameZero	anm1	GG9107_0001,3,0
			anm	AEnd
FloorFlameFlareANM 	anmdef	ANM_FloorFlameFlare,L7FloorFlameChr1,0,0,0,0
ANM_FloorFlameFlare	anm1	GG9107_0001,3,0
			anm1	GG9107_0002,3,0
			anm1	GG9107_0003,3,0
			anm1	GG9107_0004,3,0
			anm1	GG9107_0005,3,0
			anm1	GG9107_0006,3,0
			anm1	GG9107_0007,3,0
			anm1	GG9107_0008,3,0
			anm1	GG9107_0009,3,0
			anm1	GG9107_0007,3,0
			anm1	GG9107_0008,3,0
			anm1	GG9107_0009,3,0
			anm1	GG9107_0007,3,0
			anm1	GG9107_0008,3,0
			anm1	GG9107_0009,3,0
			anm1	GG9107_0010,3,0
			anm1	GG9107_0011,3,0
			anm1	GG9107_0012,3,0
			anm1	GG9107_0013,3,0
			anm	AEnd

WallPasteANM		anmdef	ANM_WallPaste,L7WallPasteChr1,0,0,0,0
ANM_WallPaste		anm1	GG9202,3,0
			anm	AEnd
EdgePasteANM		anmdef	ANM_EdgePaste,L7EdgePasteChr1,0,0,0,0
ANM_EdgePaste		anm1	GG9206,3,0
			anm	AEnd


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ MUTANT SPIDERBOT BOSS ANIMATION DATA				   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

MutSpiInc1		include	data\level03\anims\gg97801.Inc
MutSpiInc2		include	data\level03\anims\gg97802.Inc
MutSpiInc3		include	data\level03\anims\gg97803.Inc
MutSpiInc4		include	data\level03\anims\gg97804.Inc
MutSpiInc5		include	data\level03\anims\gg97805.Inc
MutSpiInc6		include	data\level03\anims\gg97806.Inc
MutSpiInc8		include	data\level03\anims\gg97808.Inc


MutSpiHorzLegANM	anmdef	ANM_MutSpiHorzLeg,MutSpiChr1,0,0,0,0
ANM_MutSpiHorzLeg	anm1	GG97801_0004,3,0
			anm	AEnd
MutSpiHorzLegAttkANM	anmdef	ANM_MutSpiHorzLegAttk,MutSpiChr1,0,0,0,0
ANM_MutSpiHorzLegAttk	anm1	GG97801_0005,3,0
			anm1	GG97801_0006,3,0
			anm1	GG97801_0007,3,0
			anm1	GG97801_0008,24,0
			anm1	GG97801_0001,3,0
			anm1	GG97801_0002,3,0
			anm1	GG97801_0003,3,0
			anm1	GG97801_0004,3,0
			anm	AEnd

MutSpiVertLegANM	anmdef	ANM_MutSpiVertLeg,MutSpiChr2,0,0,0,0
ANM_MutSpiVertLeg	anm1	GG97802_0004,3,0
			anm	AEnd
MutSpiVertLegAttkANM	anmdef	ANM_MutSpiVertLegAttk,MutSpiChr2,0,0,0,0
ANM_MutSpiVertLegAttk	anm1	GG97802_0005,3,0
			anm1	GG97802_0006,3,0
			anm1	GG97802_0007,3,0
			anm1	GG97802_0008,24,0
			anm1	GG97802_0001,3,0
			anm1	GG97802_0002,3,0
			anm1	GG97802_0003,3,0
			anm1	GG97802_0004,3,0
			anm	AEnd

MutSpiProjHeadANM 	anmdef	ANM_MutSpiProjHead,MutSpiChr5,0,0,0,0
ANM_MutSpiProjHead	anm1	GG97805_0001,2,0
			anm1	GG97805_0002,2,0
			anm1	GG97805_0003,2,0
			anm1	GG97805_0004,2,0
			anm1	GG97805_0005,2,0
			anm	ARep
MutSpiProjTailANM 	anmdef	ANM_MutSpiProjTail,MutSpiChr6,0,0,0,0
ANM_MutSpiProjTail	anm1	GG97806_0004,1,0
			anm1	GG97806_0005,1,0
			anm1	GG97806_0006,1,0
			anm	AEnd

MutSpiHead1ANM 		anmdef	ANM_MutSpiHead1,MutSpiChr8,0,0,0,0
ANM_MutSpiHead1		anm1	GG97808_0001,3,0
			anm	AEnd
MutSpiHead2ANM 		anmdef	ANM_MutSpiHead2,MutSpiChr8,0,0,0,0
ANM_MutSpiHead2		anm1	GG97808_0002,3,0
			anm	AEnd
MutSpiHead3ANM 		anmdef	ANM_MutSpiHead3,MutSpiChr8,0,0,0,0
ANM_MutSpiHead3		anm1	GG97808_0003,3,0
			anm	AEnd
MutSpiHead4ANM 		anmdef	ANM_MutSpiHead4,MutSpiChr8,0,0,0,0
ANM_MutSpiHead4		anm1	GG97808_0004,3,0
			anm	AEnd
MutSpiHead5ANM 		anmdef	ANM_MutSpiHead5,MutSpiChr8,0,0,0,0
ANM_MutSpiHead5		anm1	GG97808_0005,3,0
			anm	AEnd
MutSpiHeadSweepANM 	anmdef	ANM_MutSpiHeadSweep,MutSpiChr8,0,0,0,0
ANM_MutSpiHeadSweep	anm1	GG97808_0001,3,0
			anm1	GG97808_0002,3,0
			anm1	GG97808_0003,3,0
			anm1	GG97808_0004,3,0
			anm1	GG97808_0005,64,0
ANM_MSHS2		anm1	GG97808_0004,0,0
			anm	AVar1,3
			anm1	GG97808_0004,2,0
			anm	AVar1,2
			anm1	GG97808_0003,2,0
			anm	AVar1,1
			anm1	GG97808_0002,2,0
			anm	AVar1,0
			anm1	GG97808_0001,2,0
			anm	AVar1,5
			anm1	GG97808_0002,2,%00000001
			anm	AVar1,6
			anm1	GG97808_0003,2,0
			anm	AVar1,7
			anm1	GG97808_0004,2,0
			anm	AVar1,8
			anm1	GG97808_0005,2,0
			anm	AVar1,7
			anm1	GG97808_0004,2,0
			anm	AVar1,6
			anm1	GG97808_0003,2,0
			anm	AVar1,5
			anm1	GG97808_0002,2,0
			anm	AVar1,0
			anm1	GG97808_0001,2,%00000001
			anm	AVar1,1
			anm1	GG97808_0002,2,0
			anm	AVar1,2
			anm1	GG97808_0003,2,0
			anm	AVar1,3
			anm1	GG97808_0004,2,0
			anm	AVar1,4
			anm1	GG97808_0005,2,0
			anm	ALoop,ANM_MSHS2,4
			anm	AVar1,-1
			anm1	GG97808_0004,3,0
			anm1	GG97808_0003,3,0
			anm1	GG97808_0002,3,0
			anm1	GG97808_0001,3,0
			anm	AEnd

MutSpiHeadLookANM 	anmdef	ANM_MutSpiHeadLook,MutSpiChr8,0,0,0,0
ANM_MutSpiHeadLook	anm1	GG97808_0001,3,0
			anm1	GG97808_0002,3,0
			anm1	GG97808_0003,3,0
			anm1	GG97808_0004,3,0
			anm1	GG97808_0005,16,0
			anm1	GG97808_0004,3,0
			anm1	GG97808_0003,3,0
			anm1	GG97808_0002,3,0
			anm1	GG97808_0001,3,0
			anm	AEnd
			
			
MutSpiHeadFlameANM 	anmdef	ANM_MutSpiHeadFlame,MutSpiChr5,0,0,0,0
ANM_MutSpiHeadFlame	anm1	GG97805_0001,2,0
			anm1	GG97805_0002,2,0
			anm1	GG97805_0003,2,0
			anm1	GG97805_0004,2,0
			anm1	GG97805_0005,2,0
			anm	ARep
				
MutSpiElecHorzANM 	anmdef	ANM_MutSpiElecHorz,MutSpiChr4,0,0,0,0
ANM_MutSpiElecHorz	anm1	GG97804_0001,3,0
			anm1	GG97804_0002,3,0
			anm1	GG97804_0003,3,0
			anm1	GG97804_0004,3,0
			anm1	GG97804_0005,3,0
			anm1	GG97804_0006,3,0
			anm1	GG97804_0007,3,0
			anm1	GG97804_0008,3,0
			anm1	GG97804_0009,3,0
			anm1	GG97804_0010,3,0
			anm1	GG97804_0011,3,0
			anm	AEnd

MutSpiElecVertANM 	anmdef	ANM_MutSpiElecVert,MutSpiChr3,0,0,0,0
ANM_MutSpiElecVert	anm1	GG97803_0001,3,0
			anm1	GG97803_0002,3,0
			anm1	GG97803_0003,3,0
			anm1	GG97803_0004,3,0
			anm1	GG97803_0005,3,0
			anm1	GG97803_0006,3,0
			anm1	GG97803_0007,3,0
			anm1	GG97803_0008,3,0
			anm1	GG97803_0009,3,0
			anm	AEnd


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ SHELL SPRITES ANIMATION DATA					   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

;ScratchInc1		include	data\shell\scratcha.inc
;ScratchInc2		include	data\shell\scratchb.inc
;ScratchInc3		include	data\shell\scratchc.inc
;ScratchInc4		include	data\shell\scratchd.inc
;
;Scratch1ANM		anmdef	ANM_Scratch1,ScratchChr1,0,0,0,0
;ANM_Scratch1		anm	APau,64
;			anm1	SCRATCHA_0001,4,0
;			anm1	SCRATCHA_0002,4,0
;			anm1	SCRATCHA_0003,4,0
;			anm1	SCRATCHA_0004,4,0
;			anm1	SCRATCHA_0005,4,0
;			anm1	SCRATCHA_0006,4,0
;			anm1	SCRATCHA_0007,4,0
;			anm1	SCRATCHA_0008,4,0
;			anm1	SCRATCHA_0009,4,0
;			anm1	SCRATCHA_0010,4,0
;			anm1	SCRATCHA_0011,4,0
;			anm1	SCRATCHA_0012,4,0
;			anm1	SCRATCHA_0013,4,0
;			anm1	SCRATCHA_0014,4,0
;			anm	AEnd
;
;Scratch2ANM		anmdef	ANM_Scratch2,ScratchChr2,0,0,0,0
;ANM_Scratch2		anm	APau,64
;			anm1	SCRATCHB_0001,4,0
;			anm1	SCRATCHB_0002,4,0
;			anm1	SCRATCHB_0003,4,0
;			anm1	SCRATCHB_0004,4,0
;			anm1	SCRATCHB_0005,4,0
;			anm1	SCRATCHB_0006,4,0
;			anm1	SCRATCHB_0007,4,0
;			anm1	SCRATCHB_0008,4,0
;			anm1	SCRATCHB_0009,4,0
;			anm1	SCRATCHB_0010,4,0
;			anm1	SCRATCHB_0011,4,0
;			anm1	SCRATCHB_0012,4,0
;			anm1	SCRATCHB_0013,4,0
;			anm1	SCRATCHB_0014,4,0
;			anm	AEnd
;
;Scratch3ANM		anmdef	ANM_Scratch3,ScratchChr3,0,0,0,0
;ANM_Scratch3		anm	APau,64
;			anm1	SCRATCHC_0001,4,0
;			anm1	SCRATCHC_0002,4,0
;			anm1	SCRATCHC_0003,4,0
;			anm1	SCRATCHC_0004,4,0
;			anm1	SCRATCHC_0005,4,0
;			anm1	SCRATCHC_0006,4,0
;			anm1	SCRATCHC_0007,4,0
;			anm1	SCRATCHC_0008,4,0
;			anm1	SCRATCHC_0009,4,0
;			anm1	SCRATCHC_0010,4,0
;			anm1	SCRATCHC_0011,4,0
;			anm1	SCRATCHC_0012,4,0
;			anm1	SCRATCHC_0013,4,0
;			anm1	SCRATCHC_0014,4,0
;			anm	AEnd
;
;Scratch4ANM		anmdef	ANM_Scratch4,ScratchChr4,0,0,0,0
;ANM_Scratch4		anm	APau,64
;			anm1	SCRATCHD_0001,4,0
;			anm1	SCRATCHD_0002,4,0
;			anm1	SCRATCHD_0003,4,0
;			anm1	SCRATCHD_0004,4,0
;			anm1	SCRATCHD_0005,4,0
;			anm1	SCRATCHD_0006,4,0
;			anm1	SCRATCHD_0007,4,0
;			anm1	SCRATCHD_0008,4,0
;			anm1	SCRATCHD_0009,4,0
;;			anm1	SCRATCHD_0010,4,0
;			anm1	SCRATCHD_0011,4,0
;			anm1	SCRATCHD_0012,4,0
;			anm1	SCRATCHD_0013,4,0
;			anm1	SCRATCHD_0014,4,0
;			anm	AEnd


; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ DEBUG CORNER ANIMATION DATA						   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

CornerInc		include	data\objects\corners\corners.Inc		;*

Corner1ANM 		anmdef	ANM_Corner1,CornerChr,0,0,0,0
ANM_Corner1		anm1	CORNERS_0004,4,0
			anm	AEnd
Corner2ANM 		anmdef	ANM_Corner2,CornerChr,0,0,0,0
ANM_Corner2		anm1	CORNERS_0001,4,0
			anm	AEnd
Corner3ANM 		anmdef	ANM_Corner3,CornerChr,0,0,0,0
ANM_Corner3		anm1	CORNERS_0002,4,0
			anm	AEnd
Corner4ANM 		anmdef	ANM_Corner4,CornerChr,0,0,0,0
ANM_Corner4		anm1	CORNERS_0003,4,0
			anm	AEnd

; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ 			CHARACTER ANIMATION DATA			   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

; - TITLEPAGE -------------------------------------------------------

;* Animation from room 'flame1'
;*
AMAP_FLAME10_START:
	ani_dma TITLPAGE_DATA+$0000,$0000,$0480,4,0	; Frame  1 ( 1) of  8
	ani_dma TITLPAGE_DATA+$0480,$0000,$0480,4,0	; Frame  2 ( 2) of  8
	ani_dma TITLPAGE_DATA+$0900,$0000,$0480,4,0	; Frame  3 ( 3) of  8
	ani_dma TITLPAGE_DATA+$0d80,$0000,$0480,4,0	; Frame  4 ( 4) of  8
	ani_dma TITLPAGE_DATA+$1200,$0000,$0480,4,0	; Frame  5 ( 5) of  8
	ani_dma TITLPAGE_DATA+$1680,$0000,$0480,4,0	; Frame  6 ( 6) of  8
	ani_dma TITLPAGE_DATA+$1b00,$0000,$0480,4,0	; Frame  7 ( 7) of  8
	ani_dma TITLPAGE_DATA+$1f80,$0000,$0480,4,0	; Frame  8 ( 8) of  8
	dc.l	CRep

;* Animation from room 'flame2'
;*
AMAP_FLAME20_START:
	ani_dma TITLPAGE_DATA+$2400,$0480,$0600,4,0	; Frame  1 ( 1) of  8
	ani_dma TITLPAGE_DATA+$2a00,$0480,$0600,4,0	; Frame  2 ( 2) of  8
	ani_dma TITLPAGE_DATA+$3000,$0480,$0600,4,0	; Frame  3 ( 3) of  8
	ani_dma TITLPAGE_DATA+$3600,$0480,$0600,4,0	; Frame  4 ( 4) of  8
	ani_dma TITLPAGE_DATA+$3c00,$0480,$0600,4,0	; Frame  5 ( 5) of  8
	ani_dma TITLPAGE_DATA+$4200,$0480,$0600,4,0	; Frame  6 ( 6) of  8
	ani_dma TITLPAGE_DATA+$4800,$0480,$0600,4,0	; Frame  7 ( 7) of  8
	ani_dma TITLPAGE_DATA+$4e00,$0480,$0600,4,0	; Frame  8 ( 8) of  8
	dc.l	CRep



; - LEVEL 1.1 .. 1.3 -------------------------------------------------------

;* Animation from room 'flame'
;*
AMAP_FLAME0_START:
	ani_dma L1M0FNL0_DATA+$0c00,$0180,$0100,4,0	; Frame  1 ( 1) of  8
	ani_dma L1M0FNL0_DATA+$0d00,$0180,$0100,4,0	; Frame  2 ( 2) of  8
	ani_dma L1M0FNL0_DATA+$0e00,$0180,$0100,4,0	; Frame  3 ( 3) of  8
	ani_dma L1M0FNL0_DATA+$0f00,$0180,$0100,4,0	; Frame  4 ( 4) of  8
	ani_dma L1M0FNL0_DATA+$1000,$0180,$0100,4,0	; Frame  5 ( 5) of  8
	ani_dma L1M0FNL0_DATA+$1100,$0180,$0100,4,0	; Frame  6 ( 6) of  8
	ani_dma L1M0FNL0_DATA+$1200,$0180,$0100,4,0	; Frame  7 ( 7) of  8
	ani_dma L1M0FNL0_DATA+$1300,$0180,$0100,4,0	; Frame  8 ( 8) of  8
	dc.l	CRep

;* Animation from room 'flag'
;*
AMAP_FLAG0_START:
	ani_dma L1M0FNL0_DATA+$0000,$0000,$0180,4,0	; Frame  1 ( 1) of  8
	ani_dma L1M0FNL0_DATA+$0180,$0000,$0180,4,0	; Frame  2 ( 2) of  8
	ani_dma L1M0FNL0_DATA+$0300,$0000,$0180,4,0	; Frame  3 ( 3) of  8
	ani_dma L1M0FNL0_DATA+$0480,$0000,$0180,4,0	; Frame  4 ( 4) of  8
	ani_dma L1M0FNL0_DATA+$0600,$0000,$0180,4,0	; Frame  5 ( 5) of  8
	ani_dma L1M0FNL0_DATA+$0780,$0000,$0180,4,0	; Frame  6 ( 6) of  8
	ani_dma L1M0FNL0_DATA+$0900,$0000,$0180,4,0	; Frame  7 ( 7) of  8
	ani_dma L1M0FNL0_DATA+$0a80,$0000,$0180,4,0	; Frame  8 ( 8) of  8
	dc.l	CRep


;* Animation from room 'sparks'
;*
AMAP_SPARKS0_START:
	ani_dma L1M0FNL0_DATA+$1400,$0280,$0300,4,0	; Frame  1 ( 1) of 12
	ani_dma L1M0FNL0_DATA+$1700,$0280,$0300,4,0	; Frame  2 ( 2) of 12
	ani_dma L1M0FNL0_DATA+$1a00,$0280,$0300,4,0	; Frame  3 ( 3) of 12
	ani_dma L1M0FNL0_DATA+$1d00,$0280,$0300,4,0	; Frame  4 ( 4) of 12
	ani_dma L1M0FNL0_DATA+$2000,$0280,$0300,4,0	; Frame  5 ( 5) of 12
	ani_dma L1M0FNL0_DATA+$2300,$0280,$0300,4,0	; Frame  6 ( 6) of 12
	ani_dma L1M0FNL0_DATA+$2600,$0280,$0300,4,0	; Frame  7 ( 7) of 12
	ani_dma L1M0FNL0_DATA+$2900,$0280,$0300,4,0	; Frame  8 ( 8) of 12
	ani_dma L1M0FNL0_DATA+$2c00,$0280,$0300,4,0	; Frame  9 ( 9) of 12
	ani_dma L1M0FNL0_DATA+$2f00,$0280,$0300,4,0	; Frame 10 (10) of 12
	ani_dma L1M0FNL0_DATA+$3200,$0280,$0300,4,0	; Frame 11 (11) of 12
	ani_dma L1M0FNL0_DATA+$3500,$0280,$0300,4,0	; Frame 12 (12) of 12
	dc.l	CRep

;* Animation from room 'bird'
;*
AMAP_BIRD0_START:
	ani_dma L1M0FNL0_DATA+$3800,$0580,$0080,hz5060*4,0	; Frame  1 ( 1) of  3
	ani_dma L1M0FNL0_DATA+$3800,$0580,$0080,hz5060*4,0	; Frame  1 ( 1) of  3
	ani_dma L1M0FNL0_DATA+$3880,$0580,$0080,3,0		; Frame  2 ( 2) of  3
	ani_dma L1M0FNL0_DATA+$3900,$0580,$0080,hz5060*4,0	; Frame  3 ( 3) of  3
	ani_dma L1M0FNL0_DATA+$3880,$0580,$0080,3,0		; Frame  2 ( 2) of  3
	dc.l	CRep


; - LEVEL 3 -------------------------------------------------------

;* Animation from room 'banner'
;*
AMAP_BANNER0_START:
	ani_dma L3M0FNL0_DATA+$0200,$0080,$0300,4,0	; Frame  1 ( 1) of  5
	ani_dma L3M0FNL0_DATA+$0500,$0080,$0300,4,0	; Frame  2 ( 2) of  5
	ani_dma L3M0FNL0_DATA+$0800,$0080,$0300,4,0	; Frame  3 ( 3) of  5
	ani_dma L3M0FNL0_DATA+$0b00,$0080,$0300,4,0	; Frame  4 ( 4) of  5
	ani_dma L3M0FNL0_DATA+$0e00,$0080,$0300,4,0	; Frame  5 ( 5) of  5
	dc.l	CRep

;* Animation from room 'vent'
;*
AMAP_VENT0_START:
	ani_dma L3M0FNL0_DATA+$0000,$0000,$0080,4,0	; Frame  1 ( 1) of  4
	ani_dma L3M0FNL0_DATA+$0080,$0000,$0080,4,0	; Frame  2 ( 2) of  4
	ani_dma L3M0FNL0_DATA+$0100,$0000,$0080,4,0	; Frame  3 ( 3) of  4
	ani_dma L3M0FNL0_DATA+$0180,$0000,$0080,4,0	; Frame  4 ( 4) of  4
	dc.l	CRep


;* Animation from room 'lift'
;*
AMAP_LIFT0_START:
	ani_dma L3M4FNL0_DATA+$0000,$0000,$0300,1,0	; Frame  1 ( 1) of  6
	ani_dma L3M4FNL0_DATA+$0300,$0000,$0300,1,0	; Frame  2 ( 2) of  6
	ani_dma L3M4FNL0_DATA+$0600,$0000,$0300,1,0	; Frame  3 ( 3) of  6
	ani_dma L3M4FNL0_DATA+$0900,$0000,$0300,1,0	; Frame  4 ( 4) of  6
	ani_dma L3M4FNL0_DATA+$0c00,$0000,$0300,1,0	; Frame  5 ( 5) of  6
	ani_dma L3M4FNL0_DATA+$0f00,$0000,$0300,1,0	; Frame  6 ( 6) of  6
	dc.l	CRep

						 
; - LEVEL 5 -------------------------------------------------------

;* Animation from room 'anim_5'
;*
AMAP_ANIM_50_START:
	ani_dma L5M0FNL0_DATA+$0000,$0000,$0380,1,0	; Frame  1 ( 1) of  3
	ani_dma L5M0FNL0_DATA+$0380,$0000,$0380,1,0	; Frame  2 ( 2) of  3
	ani_dma L5M0FNL0_DATA+$0700,$0000,$0380,1,0	; Frame  3 ( 3) of  3
	dc.l	CRep


; - LEVEL 7 -------------------------------------------------------

;* Animation from room 'conveyor0'
;*
AMAP_CONVEYOR0_START:
	ani_dma L7M0FNL0_DATA+$0000,$0000,$0200,0,0	; Frame  1 ( 1) of  8
	ani_dma L7M0FNL0_DATA+$0200,$0000,$0200,0,0	; Frame  2 ( 2) of  8
	ani_dma L7M0FNL0_DATA+$0400,$0000,$0200,0,0	; Frame  3 ( 3) of  8
	ani_dma L7M0FNL0_DATA+$0600,$0000,$0200,0,0	; Frame  4 ( 4) of  8
	ani_dma L7M0FNL0_DATA+$0800,$0000,$0200,0,0	; Frame  5 ( 5) of  8
	ani_dma L7M0FNL0_DATA+$0a00,$0000,$0200,0,0	; Frame  6 ( 6) of  8
	ani_dma L7M0FNL0_DATA+$0c00,$0000,$0200,0,0	; Frame  7 ( 7) of  8
	ani_dma L7M0FNL0_DATA+$0e00,$0000,$0200,0,0	; Frame  8 ( 8) of  8
	dc.l	CRep

;* Animation from room 'cable0'
;*
AMAP_CABLE00_START:				
	ani_dma L7M0FNL0_DATA+$1600,$0380,$0200,0,0	; Frame  1 ( 1) of  8
	ani_dma L7M0FNL0_DATA+$1800,$0380,$0200,0,0	; Frame  2 ( 2) of  8
	ani_dma L7M0FNL0_DATA+$1a00,$0380,$0200,0,0	; Frame  3 ( 3) of  8
	ani_dma L7M0FNL0_DATA+$1c00,$0380,$0200,0,0	; Frame  4 ( 4) of  8
	ani_dma L7M0FNL0_DATA+$1e00,$0380,$0200,0,0	; Frame  5 ( 5) of  8
	ani_dma L7M0FNL0_DATA+$2000,$0380,$0200,0,0	; Frame  6 ( 6) of  8
	ani_dma L7M0FNL0_DATA+$2200,$0380,$0200,0,0	; Frame  7 ( 7) of  8
	ani_dma L7M0FNL0_DATA+$2400,$0380,$0200,0,0	; Frame  8 ( 8) of  8
	dc.l	CRep

;* Animation from room 'grinder0'
;*
AMAP_GRINDER00_START:
	ani_dma L7M0FNL0_DATA+$1000,$0200,$0180,2,0	; Frame  1 ( 1) of  4
	ani_dma L7M0FNL0_DATA+$1180,$0200,$0180,2,0	; Frame  2 ( 2) of  4
	ani_dma L7M0FNL0_DATA+$1300,$0200,$0180,2,0	; Frame  3 ( 3) of  4
	ani_dma L7M0FNL0_DATA+$1480,$0200,$0180,2,0	; Frame  4 ( 4) of  4
	dc.l	CRep

;* Animation from room 'pit'
;*
AMAP_PIT0_START:
	ani_dma L7M0FNL0_DATA+$2600,$0580,$0080,3,0	; Frame  1 ( 1) of  4
	ani_dma L7M0FNL0_DATA+$2680,$0580,$0080,3,0	; Frame  2 ( 2) of  4
	ani_dma L7M0FNL0_DATA+$2700,$0580,$0080,3,0	; Frame  3 ( 3) of  4
	ani_dma L7M0FNL0_DATA+$2780,$0580,$0080,3,0	; Frame  4 ( 4) of  4
	dc.l	CRep

;*
;* Animation from room 'forgflma'
;*
AMAP_FORGFLMA0_START:
	ani_dma L7M7FNL0_DATA+$0000,$0000,$0200,4,0		; Frame  1 ( 1) of  8
	ani_dma L7M7FNL0_DATA+$0200,$0000,$0200,4,0		; Frame  2 ( 2) of  8
	ani_dma L7M7FNL0_DATA+$0400,$0000,$0200,4,0		; Frame  3 ( 3) of  8
	ani_dma L7M7FNL0_DATA+$0600,$0000,$0200,4,0		; Frame  4 ( 4) of  8
	ani_dma L7M7FNL0_DATA+$0800,$0000,$0200,4,0		; Frame  5 ( 5) of  8
	ani_dma L7M7FNL0_DATA+$0a00,$0000,$0200,4,0		; Frame  6 ( 6) of  8
	ani_dma L7M7FNL0_DATA+$0c00,$0000,$0200,4,0		; Frame  7 ( 7) of  8
	ani_dma L7M7FNL0_DATA+$0e00,$0000,$0200,4,0		; Frame  8 ( 8) of  8
	dc.l	CRep


;*
;* Animation from room 'forgflmb'
;*
AMAP_FORGFLMB0_START:
	ani_dma L7M7FNL0_DATA+$1000,$0200,$0100,4,0		; Frame  1 ( 1) of  8
	ani_dma L7M7FNL0_DATA+$1100,$0200,$0100,4,0		; Frame  2 ( 2) of  8
	ani_dma L7M7FNL0_DATA+$1200,$0200,$0100,4,0		; Frame  3 ( 3) of  8
	ani_dma L7M7FNL0_DATA+$1300,$0200,$0100,4,0		; Frame  4 ( 4) of  8
	ani_dma L7M7FNL0_DATA+$1400,$0200,$0100,4,0		; Frame  5 ( 5) of  8
	ani_dma L7M7FNL0_DATA+$1500,$0200,$0100,4,0		; Frame  6 ( 6) of  8
	ani_dma L7M7FNL0_DATA+$1600,$0200,$0100,4,0		; Frame  7 ( 7) of  8
	ani_dma L7M7FNL0_DATA+$1700,$0200,$0100,4,0		; Frame  8 ( 8) of  8
	dc.l	CRep

;* Animation from room 'forgflmc'
;*
AMAP_FORGFLMC0_START:
;	ani_dma L7M7FNL0_DATA+$1800,$0300,$0300,4,0	; Frame  1 ( 1) of 12
;	ani_dma L7M7FNL0_DATA+$1b00,$0300,$0300,4,0	; Frame  2 ( 2) of 12
;	ani_dma L7M7FNL0_DATA+$1e00,$0300,$0300,4,0	; Frame  3 ( 3) of 12
;	ani_dma L7M7FNL0_DATA+$2100,$0300,$0300,4,0	; Frame  4 ( 4) of 12
	ani_dma L7M7FNL0_DATA+$2400,$0300,$0300,4,0	; Frame  5 ( 5) of 12
	ani_dma L7M7FNL0_DATA+$2700,$0300,$0300,4,0	; Frame  6 ( 6) of 12
	ani_dma L7M7FNL0_DATA+$2a00,$0300,$0300,4,0	; Frame  7 ( 7) of 12
	ani_dma L7M7FNL0_DATA+$2d00,$0300,$0300,4,0	; Frame  8 ( 8) of 12
	ani_dma L7M7FNL0_DATA+$3000,$0300,$0300,4,0	; Frame  9 ( 9) of 12
	ani_dma L7M7FNL0_DATA+$3300,$0300,$0300,4,0	; Frame 10 (10) of 12
	ani_dma L7M7FNL0_DATA+$3600,$0300,$0300,4,0	; Frame 11 (11) of 12
	ani_dma L7M7FNL0_DATA+$3900,$0300,$0300,4,0	; Frame 12 (12) of 12
	dc.l	CRep

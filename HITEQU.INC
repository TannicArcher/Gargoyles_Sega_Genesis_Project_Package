; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ All hit/damage/strength equates					   บ
; ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน
; บ Entry: 								   บ
; บ  Exit: 								   บ
; บ  Used: 								   บ
; ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน
; บ 									   บ
; บ 									   บ
; บ 									   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ


; - Goliath Damage values --------------------------------------------------

GolRunAttackPOWER		equ	32			
GolJumpAttackPOWER		equ	32
GolGroundClawPOWER		equ	4
GolGroundJabPOWER		equ	8
GolGroundSlashPOWER		equ	16
GolCrouchKickHitPOWER		equ	8
GolWallClimbClawPOWER		equ	4
GolAirClawPOWER			equ	4
GolAirAttackPOWER		equ	16


; - Enemy Damage values ----------------------------------------------------

AllSpikesHitPOWER		equ	10
MorningStarHitPOWER		equ	20
ArrowHitPOWER			equ	20
FireBallHeadHitPOWER		equ	10
FlamingBoulderHitPOWER		equ	40
BalistaLogHitPOWER		equ	40
ValkAxeProjHitPOWER		equ	20
ValkAxeAttkHitPOWER		equ	20
ValkShieldHitPOWER		equ	40
WeightHitPOWER			equ	10
GateHitPOWER			equ	10
OilHitPOWER			equ	20
WallFireHitPOWER		equ	10
SorLightningHitPOWER		equ	40
SorHammerAttkHitPOWER		equ	20
HotSpotHitPOWER			equ	10
StumpFireBallHitPOWER		equ	20
ClawHitPOWER			equ	20
VentHitPOWER			equ	20
MutVikHammerHitPOWER		equ	20
MutVikHitPOWER			equ	60
MutVikSparkHitPOWER		equ	10
RapBotSnakeAttackPOWER		equ	30
RapBotRendPOWER			equ	10
RapBotDefencePOWER		equ	20
LaserHitPOWER			equ	30
SniperBoltHitPOWER		equ	30 
WaspBoltHitPOWER		equ	30 
WaspStrafeBoltHitPOWER		equ	40 
MutSpiElecHitPOWER		equ	20
MutSpiLegsHitPOWER		equ	40
MutSpiSwirlHitPOWER		equ	20
MutSpiTrajHitPOWER		equ	20
PlasmaBallHitPOWER		equ	30
PlasmaHammerHitPOWER		equ	30
PlasmaLungeHitPOWER		equ	40
SubwaySignHitPOWER		equ	20
SubwayLightHitPOWER		equ	20
SteelSwipeHitPOWER		equ	20
SteelRocketHitPOWER		equ	40
SteelMinesHitPOWER		equ	40
SteelHomerHitPOWER		equ	20
GrinderHitPOWER			equ	1
ForgeWallFlameHitPOWER		equ	20
ForgeFloorFlameHitPOWER		equ	20
ForgeBigRockHitPOWER		equ	10
ForgeCouldronHitPOWER		equ	10
FurnaceHitPOWER			equ	40
FlameThrowHitPOWER		equ	20
DemEyeBoltsHitPOWER		equ	20
DemSpikesHitPOWER		equ	10
RabidSnapHitPOWER		equ	10
RabidTurnHitPOWER		equ	10
RabidLungeHitPOWER		equ	20
DemDiveAttkHitPOWER		equ	20
DemPlasmaArrayHitPOWER		equ	20
DemPlasmaArrayProjHitPOWER	equ	05
DemPhoenixAttkHitPOWER		equ	20
DemBigFireBallHitPOWER		equ	05
DemAllFlamesHitPOWER		equ	05


; - Enemy Health Equates ---------------------------------------------------

RaptorBot_NRG			equ	80
SniperBot_NRG			equ	40
SpiderBot_NRG			equ	01
WaspBot_NRG			equ	01
SteelClan_NRG			equ	120
PlasmaBot_NRG			equ	180
RabidHH_NRG			equ	120
MorningStar_NRG			equ	60
Archer_NRG			equ	40
Arrow_NRG			equ	40
Valkyrie_NRG			equ	120
WeaponExp_NRG			equ	40

CastleBOSS_NRG			equ	$075
RookeryBOSS_NRG			equ	$200
RooftopBOSS_NRG			equ	$200
SubwayBOSS_NRG			equ	$100
ForgeBOSS_NRG			equ	RabidHH_NRG+RabidHH_NRG+RabidHH_NRG+40+40+40+40+40+60+60

EasyModeDIV			equ	1			;divider (1=/2 : 2=/4 : 3=/8 etc.)
HardModeMUL			equ	1			;divider (1=*2 : 2=*4 : 3=/* etc.)

; ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
; บ ENEMY/OBJECT AI Data Tables						   บ
; ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน
; บ  									   บ
; บ 									   บ
; ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ



;EQUATES

CHANCE_ALWAYS		EQU	$00
CHANCE_1in2		EQU	$01
CHANCE_1in4		EQU	$03
CHANCE_1in8		EQU	$07
CHANCE_1in16		EQU	$0F
CHANCE_1in32		EQU	$1F
CHANCE_1in64		EQU	$3F
CHANCE_1in128		EQU	$7F
CHANCE_1in256		EQU	$FF
EMPTY			EQU	0

			include	rapbot.ai

AI_RBDefence3	AI_CB &				;Condition bits macro.
 	  	NO,&				;Player must NOT be within X Proximity distance.
 	  	YES,&				;Proximity test check LEFT/RIGHT.
 	  	NO,&				;Player must NOT be within Y Proximity distance.
		YES,&				;Proximity test check ABOVE/BELOW.
		NO,&				;Player must be to the LEFT of the enemy.
		NO,&				;Player must be to the RIGHT of the enemy.
		NO,&				;Player must be FACING the enemy.
		NO,&				;Player must have BACK towards enemy.
		NO,&				;Player must be on the GROUND.
		NO,&				;Player must be in the AIR.
		NO,&				;Player must be on the CEILING.
		NO,&				;Player must be on the WALL.
		NO,&				;Player must be IDLING.
		NO,&				;Player must be BEING HIT.
		NO,&				;Player must be DIEING.
		NO,&				;Player must be JUMPING.
		NO,&				;Player must be FALLING.
		NO,&				;Player must be ATTACKING.
		NO,&				;Player must be GRABBING.
		NO,&				;Player must be BLOCKING.
		NO,&				;Player must be ABOVE Enemy.
		NO,&				;Player must be BELOW Enemy.
		YES,&				;Player must be CROUCHING.
		NO,&				;Player must NOT be CROUCHING.
		NO,&				;Unused.
		NO,&				;Unused.
		NO,&				;Unused.
		NO,&				;Unused.
		NO,&				;Unused.
		NO,&				;Unused.
		NO				;Unused.	
		AI_DATA	&			;AI Data macro.
		$40,&				;Proximity to Player in X.
		$10,&				;Proximity to Player in Y.
		CHANCE_ALWAYS,&			;Chance that called routine will NOT be called.
		0,&				;Enemy data #1.
		0,&				;Enemy data #1.
		0,&				;Enemy data #1.
		0,&				;Future expansion.
		RapBotSetDefend			;This routine is called if all conditions are met.	

			include	snprbot.ai
			include	waspbot.ai
			include	mornstar.ai
			include	archer.ai
			include	valkyrie.ai
			include	mutvking.ai
			include	plasma.ai
			include	rabid.ai
			include	xanatos.ai
			

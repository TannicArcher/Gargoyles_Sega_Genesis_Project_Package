@echo L3M1 ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr gg2401 %1 1
call spr gg2402 %1 1
call spr gg2501 %1 1
call spr gg2801a %1 1
call spr gg2801b %1 1
call spr gg2802 %1 1
call spr gg2803 %1 1
call spr gg3303 %1 1

rem ** COLLECT the animations **
call col gg2401
call col gg2402
call col gg2501
call col gg2801a
call col gg2801b
call col gg2802
call col gg2803
call col gg3303

call modany


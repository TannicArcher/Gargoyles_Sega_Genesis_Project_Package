@echo GOLIATH ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr gg9301 %1 %2
call spr gg9302 %1 %2
call spr gg9303 %1 %2
call spr gg9304 %1 %2
call spr gg9305 %1 %2
call spr gg9306 %1 %2
call spr gg9307 %1 %2

rem ** COLLECT the animations **
call col gg9301
call col gg9302
call col gg9303
call col gg9304
call col gg9305
call col gg9306
call col gg9307

call modany2


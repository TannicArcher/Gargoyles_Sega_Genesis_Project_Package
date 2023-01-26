@echo L3M1 ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr gg7101 %1 %2
call spr gg7102 %1 %2
call spr gg7104 %1 %2
call spr gg7201 %1 %2
call spr gg7202 %1 %2
call spr gg7203 %1 %2
call spr gg7301 %1 %2
call spr gg7401 %1 1
call spr gg7402 %1 1
call spr gg7403 %1 %2
call spr gg7404 %1 %2

rem ** COLLECT the animations **
call col gg7101
call col gg7102
call col gg7104
call col gg7201
call col gg7202
call col gg7203
call col gg7301
call col gg7401
call col gg7402
call col gg7403
call col gg7404

call modany


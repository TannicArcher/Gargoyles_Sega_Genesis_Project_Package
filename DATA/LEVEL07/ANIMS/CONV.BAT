@echo L3M1 ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr gg8005 %1 1
call spr gg8601 %1 %2
call spr gg8701 %1 %2
call spr gg8801 %1 %2
call spr gg8803 %1 %2
call spr gg8804 %1 %2
call spr gg8806 %1 %2
call spr gg9103 %1 %2
call spr gg9104 %1 %2
call spr gg9106 %1 %2
call spr gg9107 %1 %2
call spr gg9201 4 %2
rem call cnvtff gg9201.spr gg9201z.spr
rem call del gg9201.spr
rem call ren gg9201z.spr gg9201.spr
call spr gg9202 %1 %2
call spr gg9203 %1 1
call spr gg9204 %1 1
call spr gg9205 %1 1
call spr gg9206 %1 %2

rem ** COLLECT the animations **
call col gg8005
call col gg8601
call col gg8701
call col gg8801
call col gg8803
call col gg8804
call col gg8806
call col gg9103
call col gg9104
call col gg9106
call col gg9107
call col gg9201
call col gg9202
call col gg9203
call col gg9204
call col gg9205
call col gg9206

call modany


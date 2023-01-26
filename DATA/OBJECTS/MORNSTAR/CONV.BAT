@echo GOLIATH ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr gv0302 %1 %2
call spr gv0303 %1 %2
call spr gv0304 %1 %2
call spr gv0305 %1 %2
call spr gv0306 %1 %2
call spr gv0307 %1 %2
call spr gv0308 %1 %2

rem ** COLLECT the animations **
call col gv0302
call col gv0303
call col gv0304
call col gv0305
call col gv0306
call col gv0307
call col gv0308

call modany2


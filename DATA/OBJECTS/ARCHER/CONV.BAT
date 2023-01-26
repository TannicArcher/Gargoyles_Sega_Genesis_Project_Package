@echo GOLIATH ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr gv0202 %1 %2
call spr gv0203 %1 %2
call spr gv0204 %1 %2
call spr gv0205 %1 %2
call spr gv0206 %1 %2
call spr gv0210 %1 %2
call spr gv0211 %1 %2
call spr gv0212 %1 %2
call spr gv0213 %1 %2
call spr gv0214 %1 %2
call spr gv0215 %1 %2
call spr gv0216 %1 %2

rem ** COLLECT the animations **
call col gv0202
call col gv0203
call col gv0204
call col gv0205
call col gv0206
call col gv0210
call col gv0211
call col gv0212
call col gv0213
call col gv0214
call col gv0215
call col gv0216

call modany2


@echo GOLIATH ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr gv0501 %1 %2
call spr gv0502 %1 %2
call spr gv0503 %1 %2
call spr gv0504 %1 %2
call spr gv0505 %1 %2
call spr gv0506 %1 %2
call spr gv0507 %1 %2
call spr gv0508 %1 %2

rem ** COLLECT the animations **
call col gv0501
call col gv0502
call col gv0503
call col gv0504
call col gv0505
call col gv0506
call col gv0507
call col gv0508

call modany2


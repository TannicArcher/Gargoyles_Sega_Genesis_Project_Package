@echo GOLIATH ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr gv0601 %1 %2
call spr gv0602 %1 1
call spr gv0603 %1 %2
call spr gv0605 %1 %2
call spr gv0606 %1 %2
call spr gv0607 %1 %2

call spr gg8402 %1 1

rem ** COLLECT the animations **
call col gv0601
call col gv0602
call col gv0603
call col gv0605
call col gv0606
call col gv0607

call col gg8402

call modany2


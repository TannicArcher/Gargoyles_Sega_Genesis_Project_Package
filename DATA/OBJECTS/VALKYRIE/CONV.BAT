@echo GOLIATH ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr gv0401 %1 %2
call spr gv0402 %1 %2
call spr gv0403 %1 %2
call spr gv0404 %1 %2
call spr gv0405 %1 %2
call spr gv0406 %1 %2
call spr gv0407 %1 %2
call spr gv0408 %1 %2
call spr gv0409 %1 %2
call spr gv0410 %1 %2
call spr gv0411 %1 %2
call spr gv0412 %1 %2

rem ** COLLECT the animations **
call col gv0401
call col gv0402
call col gv0403
call col gv0404
call col gv0405
call col gv0406
call col gv0407
call col gv0408
call col gv0409
call col gv0410
call col gv0411
call col gv0412

call modany2


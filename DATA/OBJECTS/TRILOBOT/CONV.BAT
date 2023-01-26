@echo GOLIATH ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr gg97701 %1 %2
call spr gg97702 %1 %2
call spr gg97703 %1 1
call spr gg97704 %1 1
call spr gg97705 %1 %2
call spr gg97706 %1 %2
call spr gg97708 %1 1
call spr gg97709 %1 %2
call spr gg97710 %1 1
call spr gg97711 %1 1
call spr gg97712 %1 %2
call spr gg97713 %1 %2

rem ** COLLECT the animations **
call col gg97701
call col gg97702
call col gg97703
call col gg97704
call col gg97705
call col gg97706
call col gg97708
call col gg97709
call col gg97710
call col gg97711
call col gg97712
call col gg97713

call modany2


@echo GOLIATH ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr gg90701 %1 %2
call spr gg90702 %1 %2
call spr gg90703 %1 %2
call spr gg90704 %1 %2
call spr gg90705 %1 %2
call spr gg90706 %1 %2

rem ** COLLECT the animations **
call col gg90701
call col gg90702
call col gg90703
call col gg90704
call col gg90705
call col gg90706

call modany2


@echo GOLIATH ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr gg3001 %1 %2
call spr gv1101a %1 %2
call spr gv1101b %1 %2
call spr gv1102 %1 %2
call spr gv1104 %1 %2
call spr gv1105 %1 %2
call spr gv1106 %1 %2
call spr gv1107 %1 %2
call spr gv1108 %1 %2
call spr gv0601 %1 %2
call spr gg3302 %1 %2

rem ** COLLECT the animations **
call col gg3001 
call col gv1101a
call col gv1101b
call col gv1102 
call col gv1104 
call col gv1105 
call col gv1106 
call col gv1107 
call col gv1108 
call col gv0601
call col gg3302 

call modany2


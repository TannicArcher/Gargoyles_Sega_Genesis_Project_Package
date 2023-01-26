@echo L3M1 ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr gg3601 %1 %2
call spr gg3602 %1 %2
call spr gg3603a %1 %2
call spr gg3603b %1 %2
call spr gg3603c %1 %2
call spr gg3603d %1 %2
call spr gg3605 %1 %2
call spr gg3605a %1 %2
call spr gg3605b %1 %2
call spr gg3605c %1 %2
call spr gg3606 %1 %2
call spr gg3609 %1 %2

call spr gg5801 %1 %2
call spr gg5802 %1 %2

call spr gg6101 %1 %2
call spr gg6102 %1 %2

call spr gg6201 %1 0

call spr gg1705 %1 0

call spr gg97801 %1 %2
call spr gg97802 %1 %2
call spr gg97803 %1 1
call spr gg97804 %1 1
call spr gg97805 %1 1
call spr gg97806 %1 1
call spr gg97808 %1 0

rem ** COLLECT the animations **
call col gg3601 
call col gg3602 
call col gg3603a
call col gg3603b
call col gg3603c
call col gg3603d
call col gg3605 
call col gg3605a 
call col gg3605b 
call col gg3605c 
call col gg3606 
call col gg3609 

call col gg5801 
call col gg5802 

call col gg6101 
call col gg6102 

call col gg6201 

call col gg1705 

call col gg97801 
call col gg97802 
call col gg97803 
call col gg97804 
call col gg97805 
call col gg97806 
call col gg97808 

call modany


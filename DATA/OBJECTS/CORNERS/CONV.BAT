@echo CORNERS ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr corners %1 %2

rem ** COLLECT the animations **
call col corners

@echo GOLIATH ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr gr97903 %1 %2
call spr gr97904 %1 %2
call spr gr97908 %1 %2
call spr gr97910 %1 %2
call spr gr97916 %1 %2
call spr gr97917 %1 %2
call spr gr97918 %1 2

rem ** COLLECT the animations **
call col gr97903
call col gr97904
call col gr97908
call col gr97910
call col gr97916
call col gr97917
call col gr97918

call modany2


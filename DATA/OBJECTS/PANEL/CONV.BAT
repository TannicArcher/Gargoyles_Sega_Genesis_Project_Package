@echo NUMERAL ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr numbersg %1 %2
call spr powrup01 %1 %2
call spr powrup02 %1 %2
call spr powrup03 %1 %2
call spr powrup04 %1 %2
call spr powrup05 %1 %2

rem ** COLLECT the animations **
call col numbersg
call col powrup01
call col powrup02
call col powrup03
call col powrup04
call col powrup05

call modany



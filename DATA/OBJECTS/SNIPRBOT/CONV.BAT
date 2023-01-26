@echo SNIPERBOT ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr gr90201 %1 %2
call spr gr90202a %1 %2
call spr gr90202b %1 %2
call spr gr90203a %1 %2
call spr gr90203b %1 %2
call spr gr90203c %1 %2
call spr gr90203d %1 %2
call spr gr90203e %1 %2
call spr gr90204 %1 %2
call spr gr90205 %1 %2
call spr gr90206 %1 %2
call spr gr90207 %1 %2
call spr gr90208 %1 %2
call spr gr90209 %1 %2

rem ** COLLECT the animations **
call col gr90201
call col gr90202a
call col gr90202b
call col gr90203a
call col gr90203b
call col gr90203c
call col gr90203d
call col gr90203e
call col gr90204
call col gr90205
call col gr90206
call col gr90207
call col gr90208
call col gr90209

call modany2


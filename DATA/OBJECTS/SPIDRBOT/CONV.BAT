@echo GOLIATH ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr gr90101 %1 %2
call spr gr90102 %1 %2
call spr gr90103 %1 %2
call spr gr90104 %1 %2
call spr gr90105 %1 %2
call spr gr90106 %1 %2
call spr gr90107 %1 %2
call spr gr90108 %1 %2
call spr gr90109 %1 %2
call spr gr90110 %1 %2
call spr gr90111 %1 %2
call spr gr90112 %1 %2
call spr gr90113 %1 %2
call spr gr90114 %1 %2
call spr gr90115 %1 %2
call spr gr90116 %1 %2
call spr gr90117 %1 %2
call spr gr90118 %1 %2

rem ** COLLECT the animations **
call col gr90101
call col gr90102
call col gr90103
call col gr90104
call col gr90105
call col gr90106
call col gr90107
call col gr90108
call col gr90109
call col gr90110
call col gr90111
call col gr90112
call col gr90113
call col gr90114
call col gr90115
call col gr90116
call col gr90117
call col gr90118

call modany2


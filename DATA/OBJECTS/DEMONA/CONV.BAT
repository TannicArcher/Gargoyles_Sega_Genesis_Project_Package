@echo GOLIATH ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr gd40101 %1 %2
call spr gd40102 %1 %2
call spr gd40103 %1 %2
call spr gd40104 %1 %2
call spr gd40105 %1 %2
call spr gd40106 %1 %2
call spr gd40107 %1 %2
call spr gd40108 %1 %2
call spr gd40109 %1 %2
call spr gd40110 %1 %2
call spr gd40111 %1 %2
call spr gd40112 %1 %2
call spr gd40113 %1 %2
call spr gd40114 %1 %2

call spr gd40301 %1 %2
call spr gd40302 %1 %2
call spr gd40303 %1 %2
call spr gd40304 %1 %2
call spr gd40305 %1 %2
call spr gd40306 %1 %2
call spr gd40307 %1 %2
call spr gd40308 %1 %2

call spr gd40100 %1 %2

rem ** COLLECT the animations **
call col gd40101
call col gd40102
call col gd40103
call col gd40104
call col gd40105
call col gd40106
call col gd40107
call col gd40108
call col gd40109
call col gd40110
call col gd40111
call col gd40112
call col gd40113
call col gd40114

call col gd40301
call col gd40302
call col gd40303
call col gd40304
call col gd40305
call col gd40306
call col gd40307
call col gd40308

call col gd40100

call modany2


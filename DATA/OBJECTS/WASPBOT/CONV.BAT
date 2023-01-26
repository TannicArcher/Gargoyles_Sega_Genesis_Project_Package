@echo GOLIATH ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr gr90301 %1 %2
call spr gr90303 %1 %2
call spr gr90304 %1 %2
call spr gr90305 %1 %2
call spr gr90306 %1 %2
call spr gr90307 %1 %2
call spr gr90308 %1 %2
call spr gr90309 %1 %2
call spr gr90310 %1 %2
call spr gr90311 %1 %2

rem ** COLLECT the animations **
call col gr90301
call col gr90303
call col gr90304
call col gr90305
call col gr90306
call col gr90307
call col gr90308
call col gr90309
call col gr90310
call col gr90311

call modany2


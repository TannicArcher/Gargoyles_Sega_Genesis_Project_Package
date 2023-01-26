@echo GOLIATH ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr gr90501 %1 %2
call spr gr90502 %1 %2
call spr gr90503 %1 %2
call spr gr90504 %1 %2
call spr gr90505 %1 %2
call spr gr90506 %1 %2
call spr gr90507 %1 %2
call spr gr90508 %1 %2
call spr gr90509 %1 %2
call spr gr90510 %1 %2
call spr gr90511 %1 %2
call spr gr90512 %1 %2
call spr gr90513 %1 %2

rem ** COLLECT the animations **
call col gr90501
call col gr90502
call col gr90503
call col gr90504
call col gr90505
call col gr90506
call col gr90507
call col gr90508
call col gr90509
call col gr90510
call col gr90511
call col gr90512
call col gr90513

call modany2


@echo GOLIATH ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr gr90601 %1 %2
call spr gr90602 %1 %2
call spr gr90603 %1 %2
call spr gr90604 %1 %2
call spr gr90605 %1 %2
call spr gr90606 %1 %2
call spr gr90607 %1 %2
call spr gr90608 %1 %2
call spr gr90609 %1 %2
call spr gr90610 %1 %2
call spr gr90611 %1 %2

rem ** COLLECT the animations **
call col gr90601
call col gr90602
call col gr90603
call col gr90604
call col gr90605
call col gr90606
call col gr90607
call col gr90608
call col gr90609
call col gr90610
call col gr90611

call modany2


@echo L1M1 ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr gg0801 %1 %2
call spr gg0802 %1 %2
call spr gg0902 %1 1
call spr gg0904 %1 1
call spr gg1401 %1 1
call spr gg1402 %1 3
call spr gg1403a %1 1
call spr gg1403b %1 1
call spr gg1403c %1 1
call spr gg1501 %1 3
call spr gg1601 %1 2
call spr gg1602 %1 2
call spr gg1603 %1 2
call spr gg1604 %1 2
call spr gg1606 %1 1
call spr gg1703 %1 %2
call spr gg1704 %1 %2
call spr gg1801 %1 %2
call spr gg1905 %1 1
call spr gg1905b %1 1
call spr gg4801 %1 %2
call spr gg4901 %1 %2
call spr gg8501 %1 %2
call spr gg8901 %1 1
call spr gg8902 %1 1
call spr gg8903 %1 1

rem ** COLLECT the animations **
call col gg0801 
call col gg0802 
call col gg0902 
call col gg0904 
call col gg1401 
call col gg1402 
call col gg1403a
call col gg1403b
call col gg1403c
call col gg1501 
call col gg1601 
call col gg1602 
call col gg1603 
call col gg1604 
call col gg1606 
call col gg1703 
call col gg1704 
call col gg1801 
call col gg1905 
call col gg4801 
call col gg4901 
call col gg8501 
call col gg8901 
call col gg8902 
call col gg8903 

call modany


@echo GOLIATH ANIMATION CONVERTION ...

rem ** CHOP the animations **
call spr ge1903a %1 1
call spr ge1903b %1 1
call spr gg1904 %1 1
call spr ge1905a %1 1
call spr ge1905b %1 1
call spr ge1905c %1 1
call spr ge1905d %1 1
call spr ge8701a %1 3
call spr ge8701b %1 3
call spr ge8701c %1 3
call spr ge8701d %1 3
call spr ge8701e %1 3
call spr ge8701f %1 3
call spr gg1901 %1 %2
call spr gg1902 %1 %2
call spr gg5802a %1 %2
call spr gg5802b %1 %2
call spr gg5802c %1 %2
call spr gg6101 %1 %2
call spr gg6102 %1 %2
call spr gg8405 %1 %2
call spr gg8406 %1 1
call spr gg8406b %1 1

rem ** COLLECT the animations **
call col ge1903a
call col ge1903b
call col gg1904
call col ge1905a
call col ge1905b
call col ge1905c
call col ge1905d
call col ge8701a
call col ge8701b
call col ge8701c
call col ge8701d
call col ge8701e
call col ge8701f
call col gg1901 
call col gg1902 
call col gg5802a
call col gg5802b
call col gg5802c
call col gg6101 
call col gg6102 
call col gg8405
call col gg8406
call col gg8406b

call modany


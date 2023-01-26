# Assemble Gargoyles

flg1=/oc+ /g /l /zd /z /i /w
flg2=/c /i /m /b

asm1=c:\psyq\asm68k $(flg1) gg_code.68k,gg_code.obj
asm2=c:\psyq\asm68k $(flg1) gg_data.68k,gg_data.obj
objfiles=gg_code.obj gg_data.obj
debugger=c:\psyq\dbug68k gg_code.sym

!if $(debug)==0	# ALT+F9 : make_prog
link=c:\psyq\psylink $(flg2) @gargoyle.lnk,t0:,gg_code.sym,gargoyle.map
!elseif $(debug)==1 # CTRL+F9 : make_debug_prog 
link=c:\psyq\psylink /d $(flg2) @gargoyle.lnk,t0:,gg_code.sym,gargoyle.map
!elseif $(debug)==2 # F12 : make_cpe   				
link=c:\psyq\psylink $(flg2) @gargoyle.lnk,gg_game.cpe,gg_code.sym,gargoyle.map
!elseif $(debug)==3 # F11 : make_all 
link=c:\psyq\psylink $(flg2) @gargoyle.lnk,t0:,gg_code.sym,gargoyle.map
!endif


!if $(debug)==0	# ALT+F9 : make_prog
dummy: 		$(objfiles)
		$(link)
!endif

!if $(debug)==1 # CTRL+F9 : make_debug_prog
dummy: 		$(objfiles)
		$(link)
		$(debugger)
!endif

!if $(debug)==2 # F12 : make_cpe
dummy: 		$(objfiles)
		$(link)
!endif

!if $(debug)==3 # F11 : make_all
dummy: 		$(objfiles)
		$(asm1)
		$(asm2)
		$(link)
!endif

gg_code.obj:	gg_code.68k globals.inc equates.inc macros.inc startup.68k main.68k shell.68k scroll.68k dma.68k \
		objects.68k oblogic1.68k oblogic2.68k oblogic3.68k levmech.68k vramaloc.68k detect.68k \
		3dstuff.68k tables.inc obdata.inc animdata.inc aidata.inc *.ai
		$(asm1)

gg_data.obj:	gg_data.68k levdata.68k sprtdata.68k
		$(asm2)

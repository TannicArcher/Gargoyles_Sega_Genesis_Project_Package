@echo off
call tconv2 dislogo.tum
call tconv2 font8x8.tum

call tconv titlpage.tum
call tconv continue.tum
call tconv intro.tum
call tconv l1begin.tum
call tconv l2begin.tum
call tconv l2end.tum
call tconv l3begin.tum
call tconv l5begin.tum
call tconv l7begin.tum
call tconv l7middle.tum
call tconv l7end.tum
call tconv youlose.tum
call tconv options.tum

call pak titpagea.map titpagea.mpk
call pak titpageb.map titpageb.mpk
call pak titlpage.chr titlpage.cpk
call pak titlpage.blk titlpage.bpk
call pak titlpage.flr titlpage.fpk

call pak dislogo.map dislogo.mpk
call pak dislogo.chr dislogo.cpk
call pak font8x8.chr font8x8.cpk

call pak introa.map introa.mpk
call pak introb.map introb.mpk
call pak intro.chr intro.cpk
call pak intro.blk intro.bpk
call pak intro.flr intro.fpk

call pak l1begina.map l1begina.mpk
call pak l1beginb.map l1beginb.mpk
call pak l1begin.chr l1begin.cpk
call pak l1begin.blk l1begin.bpk
call pak l1begin.flr l1begin.fpk
    
call pak l2begina.map l2begina.mpk
call pak l2beginb.map l2beginb.mpk
call pak l2begin.chr l2begin.cpk
call pak l2begin.blk l2begin.bpk
call pak l2begin.flr l2begin.fpk
call pak l2enda.map l2enda.mpk
call pak l2endb.map l2endb.mpk
call pak l2end.chr l2end.cpk
call pak l2end.blk l2end.bpk
call pak l2end.flr l2end.fpk

call pak l3begina.map l3begina.mpk
call pak l3beginb.map l3beginb.mpk
call pak l3begin.chr l3begin.cpk
call pak l3begin.blk l3begin.bpk
call pak l3begin.flr l3begin.fpk

call pak l5begina.map l5begina.mpk
call pak l5beginb.map l5beginb.mpk
call pak l5begin.chr l5begin.cpk
call pak l5begin.blk l5begin.bpk
call pak l5begin.flr l5begin.fpk

call pak l7begina.map l7begina.mpk
call pak l7beginb.map l7beginb.mpk
call pak l7begin.chr l7begin.cpk
call pak l7begin.blk l7begin.bpk
call pak l7begin.flr l7begin.fpk

call pak l7mida.map l7mida.mpk
call pak l7midb.map l7midb.mpk
call pak l7middle.chr l7middle.cpk
call pak l7middle.blk l7middle.bpk
call pak l7middle.flr l7middle.fpk

call pak l7enda.map l7enda.mpk
call pak l7endb.map l7endb.mpk
call pak l7end.chr l7end.cpk
call pak l7end.blk l7end.bpk
call pak l7end.flr l7end.fpk

call pak youlosea.map youlosea.mpk
call pak youloseb.map youloseb.mpk
call pak youlose.chr youlose.cpk
call pak youlose.blk youlose.bpk
call pak youlose.flr youlose.fpk

call pak continua.map continua.mpk
call pak continub.map continub.mpk
call pak continue.chr continue.cpk
call pak continue.blk continue.bpk
call pak continue.flr continue.fpk

call pak optionsa.map optionsa.mpk
call pak optionsb.map optionsb.mpk
call pak options.chr options.cpk
call pak options.blk options.bpk
call pak options.flr options.fpk


rem @echo on
rem call spr scratcha 1 0
rem call spr scratchb 1 0
rem call spr scratchc 1 0
rem call spr scratchd 1 0
rem call col scratcha
rem call col scratchb
rem call col scratchc
rem call col scratchd
rem call modany





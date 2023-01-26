# Example makefile for simple 68000 prog

# Assemble to target and create symbol file

assemble:
  asm68k /i /w /zd test,t0:,test

# Assemble to target but don't run

asmnorun:
  asm68k /i /d /w /zd test,t0:,test

# Enter debugger and load symbol file

debug:
  dbug68k test

# Evaluate expression using values from symbol file

evaluate:
  dbug68k /v$(exp) test



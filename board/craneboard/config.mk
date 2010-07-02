#
# (C) Copyright 2010 Mistral Solutions Pvt Ltd. <www.mistralsolutions.com>
# Umesh Krishnan <umeshk@mistralsolutions.com>
#
# Craneboard uses AM3517 (ARM-CortexA8) cpu
# see http://www.ti.com/ for more information
#
# Am3517 has 1 bank of 128MB Discrete SDRAM on CS0
# Physical Address:
# 8000'0000 (bank0)
#
# For use if you want X-Loader to relocate from SRAM to DDR
#TEXT_BASE = 0x80e80000
#
# For XIP in 64K of SRAM or debug (GP device has it all availabe)
# SRAM 40200000-4020FFFF base
# initial stack at 0x4020fffc used in s_init (below xloader).
# The run time stack is (above xloader, 2k below)
# If any globals exist there needs to be room for them also
TEXT_BASE = 0x40208800

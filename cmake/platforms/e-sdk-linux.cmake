set (CMAKE_SYSTEM_PROCESSOR "riscv"            CACHE STRING "")
set (CROSS_PREFIX           "riscv64-unknown-linux-gnu-" CACHE STRING "")
include (cross-linux-gcc)

# vim: expandtab:ts=2:sw=2:smartindent

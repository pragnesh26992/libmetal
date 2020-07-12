# Modify to match your needs.  These setttings can also be overridden at the
# command line.  (eg. cmake -DCMAKE_C_FLAGS="-O3")

set (CMAKE_SYSTEM_PROCESSOR "riscv"            CACHE STRING "")
set (MACHINE                "template"       CACHE STRING "")
set (CROSS_PREFIX           "riscv64-unknown-elf-" CACHE STRING "")

set (CMAKE_C_FLAGS          "-mcmodel=medany -march=rv64imac -mabi=lp64"               CACHE STRING "")

include (cross-generic-gcc)

# vim: expandtab:ts=2:sw=2:smartindent

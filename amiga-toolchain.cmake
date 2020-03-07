# AMIGAAAAAa
SET(CMAKE_SYSTEM_NAME Amiga)

SET(CMAKE_FIND_ROOT_PATH  ${AMIGA_TOOLCHAIN_PATH})
# specify the cross compiler
SET(CMAKE_C_COMPILER   "${AMIGA_TOOLCHAIN_PATH}/bin/m68k-amigaos-gcc")
SET(CMAKE_CXX_COMPILER "${AMIGA_TOOLCHAIN_PATH}/bin/m68k-amigaos-g++")

set(CMAKE_C_COMPILER_WORKS 1)
set(CMAKE_CXX_COMPILER_WORKS 1)
SET(CMAKE_C_FLAGS "-noixemul -m68020 -fomit-frame-pointer -noixemul" CACHE STRING "" FORCE)
SET(CMAKE_CXX_FLAGS "-noixemul -m68020 -fomit-frame-pointer -noixemul" CACHE STRING "" FORCE)

SET(UNIX false)
SET(AMIGA true)
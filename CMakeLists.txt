cmake_minimum_required(VERSION 3.9 FATAL_ERROR)

project(lego1)
enable_language(CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(LEGO1_SRC
    ${LEGO1_SRC}
    src/custom/debug.cpp
    src/custom/debug.h
    src/lego/legoanimationmanager.h
    src/lego/legobackgroundcolor.h
    src/lego/legobuildingmanager.h
    src/lego/legoentity.h
    src/lego/legogamestate.h
    src/lego/legoinputmanager.h
    src/lego/legomodelpresenter.h
    src/lego/legonavcontroller.h
    src/lego/legoomni.h
    src/lego/legopartpresenter.h
    src/lego/legopathboundary.h
    src/lego/legoroi.h
    src/lego/legosoundmanager.h
    src/lego/legovideomanager.h
    src/lego/legoworld.h
    src/mx/mxatomid.h
    src/mx/mxbackgroundaudiomanager.h
    src/mx/mxbitmap.h
    src/mx/mxcore.cpp
    src/mx/mxcore.h
    src/mx/mxcriticalsection.h
    src/mx/mxdirectdraw.h
    src/mx/mxdsaction.h
    src/mx/mxdsfile.h
    src/mx/mxdsobject.h
    src/mx/mxeventmanager.h
    src/mx/mxioinfo.h
    src/mx/mxmusicmanager.h
    src/mx/mxnotificationmanager.h
    src/mx/mxomnicreateflags.h
    src/mx/mxomnicreateparam.h
    src/mx/mxomni.h
    src/mx/mxpalette.h
    src/mx/mxparam.h
    src/mx/mxpresenter.h
    src/mx/mxrect32.h
    src/mx/mxscheduler.h
    src/mx/mxsoundmanager.h
    src/mx/mxstreamcontroller.h
    src/mx/mxstreamer.h
    src/mx/mxstring.h
    src/mx/mxticklemanager.h
    src/mx/mxtimer.h
    src/mx/mxtransitionmanager.h
    src/mx/mxvariable.h
    src/mx/mxvariabletable.h
    src/mx/mxvideomanager.h
    src/mx/mxvideoparamflags.h
    src/mx/mxvideoparam.h
    src/other/makesourcename.h
    src/other/nocd.h
    src/other/realtimeview.h
    src/other/viewmanager.h
    src/other/viewroi.h
)

set(LEGO1_TARGET "lego1")

add_library(
    ${LEGO1_TARGET}
    SHARED
    ${LEGO1_SRC}
)

target_compile_options(
    ${LEGO1_TARGET}
    PRIVATE
    $<$<CXX_COMPILER_ID:GNU>:-Werror -Wuninitialized -pedantic-errors -Wall -Wextra -Wconversion -Wsign-conversion>
)

target_include_directories(
    ${LEGO1_TARGET}
    PRIVATE
    src
)

set_target_properties(${LEGO1_TARGET} PROPERTIES LINKER_LANGUAGE CXX)

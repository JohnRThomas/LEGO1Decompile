cmake_minimum_required(VERSION 3.9 FATAL_ERROR)

project(lego1)
enable_language(CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(LEGO1_SRC
    ${LEGO1_SRC}
    src/legoanimationmanager.h
    src/legobackgroundcolor.h
    src/legobuildingmanager.h
    src/legoentity.h
    src/legogamestate.h
    src/legoinputmanager.h
    src/legomodelpresenter
    src/legonavcontroller.h
    src/legoomni.h
    src/legopartpresenter.h
    src/legopathboundary.h
    src/legoroi.h
    src/legosoundmanager.h
    src/legovideomanager.h
    src/legoworld.h
    src/makesourcename.h
    src/mxatomid.h
    src/mxbackgroundaudiomanager.h
    src/mxbitmap.h
    src/mxcore.h
    src/mxcore.cpp
    src/mxcriticalsection.h
    src/mxdirectdraw.h
    src/mxdsaction.h
    src/mxdsfile.h
    src/mxdsobject.h
    src/mxeventmanager.h
    src/mxioinfo.h
    src/mxmusicmanager.h
    src/mxnotificationmanager.h
    src/mxomnicreateflags.h
    src/mxomnicreateparam.h
    src/mxomni.h
    src/mxpalette.h
    src/mxpresenter.h
    src/mxrect32.h
    src/mxscheduler.h
    src/mxsoundmanager.h
    src/mxstreamcontroller.h
    src/mxstreamer.h
    src/mxstring.h
    src/mxticklemanager.h
    src/mxtimer.h
    src/mxtransitionmanager.h
    src/mxvariable.h
    src/mxvariabletable.h
    src/mxvideomanager.h
    src/mxvideoparamflags.h
    src/mxvideoparam.h
    src/nocd.h
    src/realtimeview.h
    src/viewmanager.h
    src/viewroi.h
)

set(LEGO1_TARGET "lego1")

add_library(${LEGO1_TARGET}
    ${LEGO1_SRC}
)

target_compile_options(
    ${LEGO1_TARGET}
    PRIVATE
    $<$<CXX_COMPILER_ID:GNU>:-Werror -Wuninitialized -pedantic-errors -Wall -Wextra -Wconversion -Wsign-conversion>
)

set_target_properties(${LEGO1_TARGET} PROPERTIES LINKER_LANGUAGE CXX)

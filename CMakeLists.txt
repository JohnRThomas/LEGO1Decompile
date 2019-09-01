cmake_minimum_required(VERSION 3.9 FATAL_ERROR)

project(lego1)
enable_language(CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(LEGO1_SRC
    ${LEGO1_SRC}
    src/main.cpp
    src/custom/debug.cpp
    src/custom/debug.h
    src/lego/legoanimationmanager.h
    src/lego/legoanimationmanager.cpp
    src/lego/legobackgroundcolor.h
    src/lego/legobuildingmanager.h
    src/lego/legobuildingmanager.cpp
    src/lego/legoentity.h
    src/lego/legogamestate.h
    src/lego/legogamestate.cpp
    src/lego/legoinputmanager.h
    src/lego/legoinputmanager.cpp
    src/lego/legomodelpresenter.h
    src/lego/legomodelpresenter.cpp
    src/lego/legonavcontroller.h
    src/lego/legoomni.h
    src/lego/legoomni.cpp
    src/lego/legopartpresenter.h
    src/lego/legopartpresenter.cpp
    src/lego/legopathboundary.h
    src/lego/legoroi.h
    src/lego/legoroi.cpp
    src/lego/legosoundmanager.h
    src/lego/legovideomanager.h
    src/lego/legovideomanager.cpp
    src/lego/legoworld.h
    src/lego/legoworldpresenter.h
    src/lego/legoworldpresenter.cpp
    src/mx/mxatomid.h
    src/mx/mxatomid.cpp
    src/mx/mxbackgroundaudiomanager.h
    src/mx/mxbackgroundaudiomanager.cpp
    src/mx/mxbitmap.h
    src/mx/mxbitmap.cpp
    src/mx/mxcore.h
    src/mx/mxcore.cpp
    src/mx/mxcriticalsection.h
    src/mx/mxdirectdraw.h
    src/mx/mxdirectdraw.cpp
    src/mx/mxdsaction.h
    src/mx/mxdsaction.cpp
    src/mx/mxdsfile.h
    src/mx/mxdsobject.h
    src/mx/mxeventmanager.h
    src/mx/mxioinfo.h
    src/mx/mxmusicmanager.h
    src/mx/mxnotificationmanager.h
    src/mx/mxomnicreateflags.h
    src/mx/mxomnicreateflags.cpp
    src/mx/mxomnicreateparam.h
    src/mx/mxomnicreateparam.cpp
    src/mx/mxomni.h
    src/mx/mxomni.cpp
    src/mx/mxpalette.h
    src/mx/mxparam.h
    src/mx/mxpresenter.h
    src/mx/mxrect32.h
    src/mx/mxscheduler.h
    src/mx/mxsoundmanager.h
    src/mx/mxstreamcontroller.h
    src/mx/mxstreamer.h
    src/mx/mxstreamer.cpp
    src/mx/mxstring.h
    src/mx/mxstring.cpp
    src/mx/mxticklemanager.h
    src/mx/mxticklemanager.cpp
    src/mx/mxtimer.h
    src/mx/mxtimer.cpp
    src/mx/mxtransitionmanager.h
    src/mx/mxtransitionmanager.cpp
    src/mx/mxvariable.h
    src/mx/mxvariabletable.h
    src/mx/mxvariabletable.cpp
    src/mx/mxvideomanager.h
    src/mx/mxvideoparamflags.h
    src/mx/mxvideoparamflags.cpp
    src/mx/mxvideoparam.h
    src/mx/mxvideoparam.cpp
    src/other/makesourcename.h
    src/other/nocd.h
    src/other/nocd.cpp
    src/other/realtimeview.h
    src/other/viewmanager.h
    src/other/viewmanager.cpp
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

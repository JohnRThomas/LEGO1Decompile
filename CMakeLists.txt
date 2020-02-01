cmake_minimum_required(VERSION 3.9 FATAL_ERROR)

project(lego1)
enable_language(CXX)

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
    src/lego/legobackgroundcolor.cpp
    src/lego/legobuildingmanager.h
    src/lego/legobuildingmanager.cpp
    src/lego/legoentity.h
    src/lego/legoentity.cpp
    src/lego/legogamestate.h
    src/lego/legogamestate.cpp
    src/lego/legoinputmanager.h
    src/lego/legoinputmanager.cpp
    src/lego/legomodelpresenter.h
    src/lego/legomodelpresenter.cpp
    src/lego/legonavcontroller.h
    src/lego/legonavcontroller.cpp
    src/lego/legoobjectfactory.h
    src/lego/legoobjectfactory.cpp
    src/lego/legoomni.h
    src/lego/legoomni.cpp
    src/lego/legopartpresenter.h
    src/lego/legopartpresenter.cpp
    src/lego/legopathboundary.h
    src/lego/legoroi.h
    src/lego/legoroi.cpp
    src/lego/legoscripts.h
    src/lego/legoscripts.cpp
    src/lego/legosoundmanager.h
    src/lego/legosoundmanager.cpp
    src/lego/legovideomanager.h
    src/lego/legovideomanager.cpp
    src/lego/legoworld.h
    src/lego/legoworld.cpp
    src/lego/legoworldpresenter.h
    src/lego/legoworldpresenter.cpp
    src/mx/mxatom.h
    src/mx/mxatom.cpp
    src/mx/mxatomid.h
    src/mx/mxatomid.cpp
    src/mx/mxatommanager.h
    src/mx/mxatommanager.cpp
    src/mx/mxbackgroundaudiomanager.h
    src/mx/mxbackgroundaudiomanager.cpp
    src/mx/mxbitmap.h
    src/mx/mxbitmap.cpp
    src/mx/mxcore.h
    src/mx/mxcore.cpp
    src/mx/mxcriticalsection.h
    src/mx/mxcriticalsection.cpp
    src/mx/mxdirectdraw.h
    src/mx/mxdirectdraw.cpp
    src/mx/mxdsaction.h
    src/mx/mxdsaction.cpp
    src/mx/mxdsfile.h
    src/mx/mxdsfile.cpp
    src/mx/mxdsobject.h
    src/mx/mxdsobject.cpp
    src/mx/mxeventmanager.h
    src/mx/mxioinfo.h
    src/mx/mxioinfo.cpp
    src/mx/mxmusicmanager.h
    src/mx/mxmidipresenter.h
    src/mx/mxmidipresenter.cpp
    src/mx/mxnotificationmanager.h
    src/mx/mxnotificationmanager.cpp
    src/mx/mxobjectfactory.h
    src/mx/mxobjectfactory.cpp
    src/mx/mxomnicreateflags.h
    src/mx/mxomnicreateflags.cpp
    src/mx/mxomnicreateparam.h
    src/mx/mxomnicreateparam.cpp
    src/mx/mxomni.h
    src/mx/mxomni.cpp
    src/mx/mxpalette.h
    src/mx/mxpalette.cpp
    src/mx/mxparam.h
    src/mx/mxpresenter.h
    src/mx/mxpresenter.cpp
    src/mx/mxrect32.h
    src/mx/mxrect32.cpp
    src/mx/mxresult.h
    src/mx/mxscheduler.h
    src/mx/mxscheduler.cpp
    src/mx/mxsoundmanager.h
    src/mx/mxsoundmanager.cpp
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
    src/mx/mxvariable.cpp
    src/mx/mxvariabletable.h
    src/mx/mxvariabletable.cpp
    src/mx/mxvideomanager.h
    src/mx/mxvideomanager.cpp
    src/mx/mxvideoparamflags.h
    src/mx/mxvideoparamflags.cpp
    src/mx/mxvideoparam.h
    src/mx/mxvideoparam.cpp
    src/other/makesourcename.h
    src/other/makesourcename.cpp
    src/other/nocd.h
    src/other/nocd.cpp
    src/other/realtimeview.h
    src/other/realtimeview.cpp
    src/other/viewmanager.h
    src/other/viewmanager.cpp
    src/other/viewroi.h
    src/unknown/mxunknownmanager4.h
    src/unknown/mxunknownmanager4.cpp
    src/unknown/mxunknownmanager5.h
    src/unknown/mxunknownmanager5.cpp
    src/unknown/mxunknownmanager6.h
    src/unknown/mxunknownmanager6.cpp
    src/unknown/legounknownmanager2.h
    src/unknown/legounknownmanager2.cpp
    src/unknown/legounknownmanager3.h
    src/unknown/legounknownmanager3.cpp
    src/unknown/legounknownmanager4.h
    src/unknown/legounknownmanager4.cpp
    src/unknown/legounknownmanager8.h
    src/unknown/legounknownmanager8.cpp
    src/lego1.def
)

set(LEGO1_TARGET "lego1")

add_library(
    ${LEGO1_TARGET}
    SHARED
    ${LEGO1_SRC}
)

#target_compile_options(${LEGO1_TARGET} PRIVATE /W4 /WX)
target_compile_options(${LEGO1_TARGET} PRIVATE /O2 /Ob1 /D"NDEBUG" /D"WIN32" /D"_WINDOWS" /D"STRICT")

target_include_directories(
    ${LEGO1_TARGET}
    PRIVATE
    src
)

set_target_properties(${LEGO1_TARGET} PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(${LEGO1_TARGET} winmm.lib ddraw.lib)

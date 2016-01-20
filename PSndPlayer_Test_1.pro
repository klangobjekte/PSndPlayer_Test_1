#-------------------------------------------------
#
# Project created by QtCreator 2016-01-20T18:49:32
#
#-------------------------------------------------

QT       += core
#QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QT       -= gui

TARGET = PSndPlayer_Test_1
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    testplayer.cpp

win32-msvc2013{
        DEFINES += _USING_V110_SDK71_
        INCLUDEPATH += . \
        "C:/QtProjects/PSndPlayer"
        LIBS += "C:/QtProjects/build-PSndPlayer-Desktop_Qt_5_4_2_MSVC2013_OpenGL_32bit-Debug/debug/PSndPlayer.lib"
        #LIBS += "C:/QtProjects/build-PSndPlayer-Desktop_Qt_5_4_2_MSVC2013_OpenGL_32bit-Release/release/PSndPlayer.lib"
}

win32 {
        #DEFINES += _CRT_SECURE_NO_WARNINGS
        INCLUDEPATH += "C:/Program Files/portaudio-r1891-build/include"
        INCLUDEPATH += "C:/Program Files/Mega-Nerd/libsndfile/include"
        #INCLUDEPATH += "C:/Program Files/ffmpeg-20131202-git-e3d7a39-win32-dev/include"

        LIBS += "C:/Program Files/Mega-Nerd/libsndfile/lib/libsndfile-1.lib"
        LIBS += "C:\Program Files\portaudio-r1891-build\lib\Win32\Release\portaudio_x86.lib"
        #LIBS += "C:/Program Files/ffmpeg-20131202-git-e3d7a39-win32-shared/bin/avformat-55.dll"
        #LIBS += "C:/Program Files/ffmpeg-20131202-git-e3d7a39-win32-shared/bin/avcodec-55.dll"
        #LIBS += "C:/Program Files/ffmpeg-20131202-git-e3d7a39-win32-shared/bin/avutil-52.dll"
        #LIBS += "C:/Program Files/mpg123-1.15.0-x86/libmpg123-0.dll"


}

DISTFILES += \
    deploy_msvc

HEADERS += \
    testplayer.h

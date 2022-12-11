#-------------------------------------------------
#
# Project created by QtCreator 2022-12-10T20:59:38
#
#-------------------------------------------------

QT       += core gui #包含的模块
# 大于Qt4版本 才包含widget模块
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sample_2_1  #引用程序名  生成的.exe程序名称
TEMPLATE = app # 模板类型 引用程序模板

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
# 定义编译选项。 QT_DEPRECATED_WARNINGS
# 表示当Qt的某些功能被标记为过时的，那么编译器会发出警告
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        widget.cpp

HEADERS += \
        widget.h

FORMS += \
        widget.ui

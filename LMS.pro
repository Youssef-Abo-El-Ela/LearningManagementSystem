QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addprofessor.cpp \
    addstudent.cpp \
    main.cpp \
    mainwindow.cpp \
    person.cpp \
    professor.cpp \
    student.cpp \
    subject.cpp

HEADERS += \
    addprofessor.h \
    addstudent.h \
    mainwindow.h \
    person.h \
    professor.h \
    student.h \
    subject.h

FORMS += \
    addprofessor.ui \
    addstudent.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

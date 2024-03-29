QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addclass.cpp \
    addprofessor.cpp \
    addprofessortoclass.cpp \
    addstudent.cpp \
    addstudenttoclass.cpp \
    edit.cpp \
    globals.cpp \
    main.cpp \
    mainwindow.cpp \
    person.cpp \
    professor.cpp \
    search.cpp \
    show.cpp \
    showclass.cpp \
    showclasses.cpp \
    showprofessors.cpp \
    showstudents.cpp \
    student.cpp \
    subject.cpp \
    welcome.cpp

HEADERS += \
    addclass.h \
    addprofessor.h \
    addprofessortoclass.h \
    addstudent.h \
    addstudenttoclass.h \
    edit.h \
    globals.h \
    mainwindow.h \
    person.h \
    professor.h \
    search.h \
    show.h \
    showclass.h \
    showclasses.h \
    showprofessors.h \
    showstudents.h \
    student.h \
    subject.h \
    welcome.h

FORMS += \
    addclass.ui \
    addprofessor.ui \
    addprofessortoclass.ui \
    addstudent.ui \
    addstudenttoclass.ui \
    edit.ui \
    mainwindow.ui \
    search.ui \
    show.ui \
    showclass.ui \
    showclasses.ui \
    showprofessors.ui \
    showstudents.ui \
    welcome.ui
    addstudent.ui \


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

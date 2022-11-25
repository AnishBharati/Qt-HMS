QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Patientsinfo.cpp \
    doctor.cpp \
    doctorlogin.cpp \
    emergency.cpp \
    main.cpp \
    login.cpp \
    nurseinfo.cpp \
    patientlogin.cpp \
    record.cpp \
    secdialog.cpp \
    staffinfo.cpp

HEADERS += \
    Patientsinfo.h \
    doctor.h \
    doctorlogin.h \
    emergency.h \
    login.h \
    nurseinfo.h \
    patientlogin.h \
    record.h \
    secdialog.h \
    staffinfo.h

FORMS += \
    Patientsinfo.ui \
    doctor.ui \
    doctorlogin.ui \
    emergency.ui \
    login.ui \
    nurseinfo.ui \
    patientlogin.ui \
    record.ui \
    secdialog.ui \
    staffinfo.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc

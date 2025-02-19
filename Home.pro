QT += core gui widgets

CONFIG += c++11

# Specify the sources and headers
SOURCES += \
    login.cpp \
    main.cpp \
    editpoem.cpp \
    landingpage.cpp \
    mainwindow.cpp \
    register.cpp \
    viewpoem.cpp \
    writepoem.cpp

HEADERS += \
    editpoem.h \
    landingpage.h \
    login.h \
    mainwindow.h \
    register.h \
    viewpoem.h \
    writepoem.h

# Include the generated UI files
FORMS += \
    editpoem.ui \
    landingpage.ui \
    login.ui \
    mainwindow.ui \
    register.ui \
    viewpoem.ui \
    writepoem.ui

# Include the necessary modules
INCLUDEPATH += .

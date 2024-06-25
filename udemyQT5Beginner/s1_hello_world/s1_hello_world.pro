QT = core

CONFIG += c++17 cmdline
## cpp 2017 standard

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# DEFINES += QT_DEPRECATED_WARNINGS
# raises warnings about features and functionality being used that is deprecated

# virtual folder, adds the main.cpp file via concatonation
SOURCES += \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

TEMPLATE = app

CONFIG += c++11

SOURCES += main.cpp \
    MathOperation.cpp \

RESOURCES +=

HEADERS += \
    MathOperation.h \

test { # the following files will be included for Unit test build
    message(Test build)

    QT += testlib #needed for QtTest
    SOURCES -= main.cpp

    HEADERS += \
        Test/TestMathOperation.h \
        Test/UnitTest.h \

    SOURCES += \
        Test/main.cpp \
        Test/TestMathOperation.cpp \
          Test/UnitTest.cpp \

} else {
    message(Normal build) #we will just show this message for Debug/Release build
}

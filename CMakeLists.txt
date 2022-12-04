cmake_minimum_required(VERSION 3.5)

project(Libray_Project VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets sql)

set(PROJECT_SOURCES
        main.cpp

        mainpage.h
        mainpage.cpp
        mainpage.ui

        landingpage.h
        landingpage.cpp
        landingpage.ui

        openingpage.h
        openingpage.cpp
        openingpage.ui

        aboutus.h
        aboutus.cpp
        aboutus.ui

        loginpage.h
        loginpage.cpp
        loginpage.ui

        seachpage.h
        seachpage.cpp
        seachpage.ui

        signup.h
        signup.cpp
        signup.ui

        returnbook.h
        returnbook.cpp
        returnbook.ui

        logout.h
        logout.cpp
        logout.ui

        borrowpage.h
        borrowpage.cpp
        borrowpage.ui

        database1.h
        database1.cpp

        contactpage.h
        contactpage.cpp
        contactpage.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Libray_Project
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Libray_Project APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Libray_Project SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Libray_Project
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Libray_Project PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Sql)

set_target_properties(Libray_Project PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS Libray_Project
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Libray_Project)
endif()

# Generated from cube.pro.

cmake_minimum_required(VERSION 3.14)
project(GSOC2021 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS Core)
find_package(Qt6 COMPONENTS Gui)
find_package(Qt6 COMPONENTS Quick)
find_package(Qt6 COMPONENTS Qml)
find_package(Qt6 COMPONENTS Quick3D)

qt_add_executable(gsoc
    gsoc2021.cpp triangle.cpp triangle.h
)
set_target_properties(gsoc PROPERTIES
    WIN32_EXECUTABLE TRUE
    MACOSX_BUNDLE TRUE
)
target_link_libraries(gsoc PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Qml
    Qt::Quick
    Qt::Quick3D
)

# Resources:
set(gsoc_resource_files
    "gsoc.qml")
qt6_add_resources(gsoc "gsoc" PREFIX "/gsoc" FILES ${gsoc_resource_files} )

set_target_properties(gsoc PROPERTIES
    QT_QML_MODULE_VERSION 1.0
    QT_QML_MODULE_URI Gsoc
)

qt6_qml_type_registration(gsoc)

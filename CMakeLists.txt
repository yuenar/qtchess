cmake_minimum_required(VERSION 3.16)
project(QtChess)

if(NOT DEFINED CMAKE_BUILD_PARALLEL_LEVEL)
    include(ProcessorCount)
    ProcessorCount(N)
    if(N GREATER 0)
        set(CMAKE_BUILD_PARALLEL_LEVEL ${N})
    endif()
endif()


# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find required Qt components (Qt5 or Qt6)
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Widgets Gui Multimedia Network)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Widgets Gui Multimedia Network)

# Automatically handle Qt's MOC, UIC, and RCC
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Set target name
set(TARGET_NAME QtChess)

# Source files
set(SOURCES
    main.cpp
    mainwindow.cpp
    chessboard.cpp
    chesshandler.cpp
    steplist.cpp
    gamesettings.cpp
    settingsdialog.cpp
    rc4.cpp
    zobrist.cpp
    movegenerator.cpp
    steptimerthread.cpp
    servernetwork.cpp
    clientnetwork.cpp
)

# Header files
set(HEADERS
    mainwindow.h
    chessboard.h
    chesshandler.h
    steplist.h
    commdef.h
    gamesettings.h
    settingsdialog.h
    rc4.h
    zobrist.h
    movegenerator.h
    steptimerthread.h
    servernetwork.h
    clientnetwork.h
    networkmsgdef.h
)

# UI files
set(FORMS
    mainwindow.ui
    settingsdialog.ui
)

# Resource files
set(RESOURCES
    qtchess.qrc
)

# Create executable
add_executable(${TARGET_NAME} ${SOURCES} ${HEADERS} ${FORMS} ${RESOURCES})

# Link Qt libraries (compatible with both Qt5 and Qt6)
target_link_libraries(${TARGET_NAME} 
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Gui
    Qt${QT_VERSION_MAJOR}::Multimedia
    Qt${QT_VERSION_MAJOR}::Network
)

# Optional: Set output directory
set_target_properties(${TARGET_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

# Display Qt version information
message(STATUS "Using Qt${QT_VERSION_MAJOR} version: ${Qt${QT_VERSION_MAJOR}_VERSION}")

# Optional: Copy Qt DLLs on Windows (for deployment)
if(WIN32)
    add_custom_command(TARGET ${TARGET_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:Qt${QT_VERSION_MAJOR}::Core>
        $<TARGET_FILE:Qt${QT_VERSION_MAJOR}::Widgets>
        $<TARGET_FILE:Qt${QT_VERSION_MAJOR}::Gui>
        $<TARGET_FILE:Qt${QT_VERSION_MAJOR}::Multimedia>
        $<TARGET_FILE:Qt${QT_VERSION_MAJOR}::Network>
        $<TARGET_FILE_DIR:${TARGET_NAME}>
    )
endif()

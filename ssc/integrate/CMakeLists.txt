# CMake project file for QUADPACK

cmake_minimum_required (VERSION 2.6)
project (integrate)

SET(CMAKE_C_FLAGS "")

INCLUDE_DIRECTORIES(inc)
INCLUDE_DIRECTORIES(${SSC_INCLUDE_DIRS})
INCLUDE_DIRECTORIES(SYSTEM ${Boost_INCLUDE_DIRS})

IF(CMAKE_SIZEOF_VOID_P EQUAL 8) # If on a 64 bit machine
    IF(UNIX AND NOT WIN32) # If on Linux
        SET(CMAKE_C_FLAGS "-fPIC")
    ENDIF()
ENDIF()

ADD_LIBRARY(${PROJECT_NAME}_object OBJECT
    TrapezoidalIntegration.cpp
    Simpson.cpp
    Integrator.cpp
    QuadPack.cpp
    GaussKronrod.cpp
    Rectangle.cpp
    Cumulate.cpp
    d1mach.c
    dqags.c
    dqagse.c
    dqelg.c
    dqk21.c
    dqpsrt.c
    dqawoe.c
    dqc25f.c
    dqcheb.c
    dqelg.c
    dqk15w.c
    dqpsrt.c
    dqwgtf.c
    dgtsl.c
    ClenshawCurtis.cpp
    ClenshawCurtisCosine.cpp
    ClenshawCurtisSine.cpp
    Filon.cpp
    filon.c
    Burcher.cpp
    )

ADD_SUBDIRECTORY(unit_tests)

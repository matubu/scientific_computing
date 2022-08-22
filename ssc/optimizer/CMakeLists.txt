cmake_minimum_required (VERSION 2.6)
project (optimizer)
set(SOURCES OptimizationProblem.cpp
            OptimizationResult.cpp)

include_directories(inc)
INCLUDE_DIRECTORIES(${SSC_INCLUDE_DIRS})

add_library(${PROJECT_NAME}_object OBJECT ${SOURCES})

add_subdirectory(unit_tests)

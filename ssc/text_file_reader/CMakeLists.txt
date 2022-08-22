cmake_minimum_required (VERSION 2.8.8)
project (text_file_reader)
set(SRC TextFileReader.cpp)

add_library(${PROJECT_NAME}_object OBJECT ${SRC})

include_directories(${SSC_INCLUDE_DIRS})

add_subdirectory(unit_tests)

cmake_minimum_required (VERSION 2.8.8)
project(yaml_parser)

set(SRC YamlParser.cpp
        parse_unit_value.cpp)

include_directories(${SSC_INCLUDE_DIRS})
include_directories(SYSTEM ${YAML_CPP_INCLUDE_DIRS})

set(${PROJECT_NAME}_INCLUDE_DIRS ${${PROJECT_NAME}_SOURCE_DIR}/inc CACHE PATH "Path to ${PROJECT_NAME}'s include directory")
add_library(${PROJECT_NAME}_object OBJECT ${SRC})

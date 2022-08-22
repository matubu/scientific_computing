# ------8<---[LINES TO MODIFY WHEN CHANGING MODULE]----->8-----
set(MODULE_UNDER_TEST solver)
project (${MODULE_UNDER_TEST}_tests)
FILE(GLOB SRC src/ODEintTests.cpp
              src/constant_step_stepper_architecture_tests.cpp
              src/adaptive_step_stepper_architecture_tests.cpp
              src/DiscreteSystemsTests.cpp
              src/SchedulerTests.cpp)
# ------8<---------------------------------------------->8-----

# Include directories
include_directories(SYSTEM inc)
include_directories(SYSTEM ${GTEST_INCLUDE_DIRS})
include_directories(SYSTEM ${GMOCK_INCLUDE_DIRS})
include_directories(SYSTEM ${Boost_INCLUDE_DIRS})
include_directories(${SSC_INCLUDE_DIRS})

# Linking libraries
add_library(${PROJECT_NAME} OBJECT ${SRC})

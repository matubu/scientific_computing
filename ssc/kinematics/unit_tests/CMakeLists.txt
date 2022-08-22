# ------8<---[LINES TO MODIFY WHEN CHANGING MODULE]----->8-----
set(MODULE_UNDER_TEST kinematics)
project (${MODULE_UNDER_TEST}_tests)
FILE(GLOB SRC src/KinematicsTests.cpp
              src/rotation_matrix_builders_Test.cpp
              src/TransformTest.cpp
              src/VelocityTest.cpp
              src/random_kinematics.cpp
              src/KinematicTreeTest.cpp
              src/WrenchTest.cpp
              src/transform_double_equal.cpp
              src/coriolis_and_centripetalTest.cpp
              )
# ------8<---------------------------------------------->8-----

# Include directories
include_directories(inc)
include_directories(${SSC_INCLUDE_DIRS})
include_directories(SYSTEM ${GTEST_INCLUDE_DIRS})
include_directories(SYSTEM ${Boost_INCLUDE_DIRS})

add_library (${PROJECT_NAME} OBJECT ${SRC})

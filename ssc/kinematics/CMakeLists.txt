CMAKE_MINIMUM_REQUIRED(VERSION 2.8.8)
PROJECT(kinematics)

SET(SRC Velocity.cpp
        rotation_matrix_builders.cpp
        EulerAngles.cpp
        Kinematics.cpp
        Point.cpp
        PointMatrix.cpp
        Transform.cpp
        KinematicTree.cpp
        Wrench.cpp
        UnsafeWrench.cpp
        coriolis_and_centripetal.cpp
        )

include_directories(${SSC_INCLUDE_DIRS})
INCLUDE_DIRECTORIES(SYSTEM ${Boost_INCLUDE_DIRS})
INCLUDE_DIRECTORIES(SYSTEM ${eigen_INCLUDE_DIRS})

ADD_LIBRARY(${PROJECT_NAME}_object OBJECT ${SRC})

ADD_SUBDIRECTORY(unit_tests)

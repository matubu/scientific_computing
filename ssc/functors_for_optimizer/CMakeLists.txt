cmake_minimum_required (VERSION 2.6)
project (functors_for_optimizer)
set(SOURCES State.cpp
            StateGenerator.cpp
            Node.cpp
            Null.cpp
            Parameter.cpp
            Nullary.cpp
            Sum.cpp
            Binary.cpp
            N_ary.cpp
            Multiply.cpp
            Pow.cpp
            Divide.cpp
            Difference.cpp
            Serialize.cpp
            Ln.cpp
            Unary.cpp
            Sin.cpp
            Cos.cpp
            FunctorAlgebra.cpp
            Constant.cpp
            PiecewiseConstantFunctor.cpp
            PiecewiseLinearFunctor.cpp
            SplineFunctor.cpp
            PiecewiseParabolicFunctor.cpp
            GradHes.cpp
            StateGetter.cpp
            Abs.cpp
            Sign.cpp
            SerializeReversePolish.cpp
            StateAndParameterCounter.cpp
            Sqrt.cpp
            IfPositive.cpp
            )

include_directories(inc)
include_directories(${SSC_INCLUDE_DIRS})

add_library(${PROJECT_NAME}_object OBJECT ${SOURCES})

set(${PROJECT_NAME}_INCLUDE_DIRS     ${${PROJECT_NAME}_SOURCE_DIR}/inc                                                                               CACHE PATH     "Path to ${PROJECT_NAME}'s include directory")
set(${PROJECT_NAME}_LIBRARIES        ${CMAKE_CURRENT_BINARY_DIR}/${CMAKE_SHARED_LIBRARY_PREFIX}${PROJECT_NAME}${CMAKE_SHARED_LIBRARY_SUFFIX}         CACHE FILEPATH "${PROJECT_NAME}'s shared library")
set(${PROJECT_NAME}_STATIC_LIBRARIES ${CMAKE_CURRENT_BINARY_DIR}/${CMAKE_STATIC_LIBRARY_PREFIX}${PROJECT_NAME}_static${CMAKE_STATIC_LIBRARY_SUFFIX}  CACHE FILEPATH "${PROJECT_NAME}'s static library")
set(${PROJECT_NAME}_FOUND            TRUE                                                                                                            CACHE BOOL     "Is ${PROJECT_NAME} available to other modules?")

add_subdirectory(unit_tests)

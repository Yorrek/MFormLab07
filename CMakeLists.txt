cmake_minimum_required(VERSION 3.6)
project(MFormLab07)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
    CubicBezier.cpp
    CubicBezier.hpp
    main.cpp
    Point.cpp
    Point.hpp)

add_executable(MFormLab07 ${SOURCE_FILES})
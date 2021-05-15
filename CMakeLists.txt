cmake_minimum_required(VERSION 3.16)

project(cubesolver CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS -no-pie)

add_executable(
        cubesimulator
        main.cpp
        cube.cpp
)

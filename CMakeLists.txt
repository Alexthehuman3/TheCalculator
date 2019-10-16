cmake_minimum_required(VERSION 3.14)
project(CLion2)

set(CMAKE_CXX_STANDARD 14)

add_executable(CLion2 main.cpp utilities.cpp utilities.h MathFunctions.cpp MathFunctions.h)
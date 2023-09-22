cmake_minimum_required(VERSION 3.26)
project(wage_calculator)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(wage_calculator
        main.cpp)

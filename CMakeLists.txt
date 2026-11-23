cmake_minimum_required(VERSION 3.20)
project(octiq_cmake_build_test CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(octiq-cmake-build-test src/main.cpp)

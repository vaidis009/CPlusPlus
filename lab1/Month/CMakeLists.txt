cmake_minimum_required(VERSION 3.6)
project(Month)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Month.cpp)
add_executable(Month ${SOURCE_FILES})
cmake_minimum_required(VERSION 3.6)
project(InputSameBackward)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Palindrome.cpp)
add_executable(InputSameBackward ${SOURCE_FILES})
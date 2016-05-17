cmake_minimum_required(VERSION 3.5)
project(Dyamic_Arrays)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Dyamic_Arrays ${SOURCE_FILES})
cmake_minimum_required(VERSION 3.5)
project(program_4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp list.h list_node.h  puzzle.h )
add_executable(program_4 ${SOURCE_FILES})
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(print)

# get all *.cpp files recursively
file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/*.cpp)

MESSAGE("LIB PATH:" ${PROJECT_SOURCE_DIR})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# two ways for mult .cpp file
# 1.
add_executable(print ${SRC_FILES})
# 2.
# add_executable(print main.cpp implement.cpp)


cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(md)

# 可以使用add definetion添加变量，然后在cpp文件中使用
add_definitions(-DDEBUG)
add_definitions(-DMD=1)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(md define.cpp)

# 可以使用targget_compile_definitions使用变量FOO
target_compile_definitions(md PRIVATE FOO)

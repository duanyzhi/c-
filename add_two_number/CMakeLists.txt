cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(add)

# to include a lib path you can:
# one:
# include_directories(BEFORE ${PROJECT_SOURCE_DIR}/src/)
# two:
# include_directories(/home/name/project/src)
# three:
set(include_path ${PROJECT_SOURCE_DIR}/src/)
include_directories(${include_path})

add_executable(add add.cpp)

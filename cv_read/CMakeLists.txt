cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(cv_read)

# to include a lib path you can:
# one:
# include_directories(BEFORE ${PROJECT_SOURCE_DIR}/src/)
# two:
# include_directories(/home/name/project/src)
# three:

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})



add_executable(cv_read main.cpp)

target_link_libraries(cv_read ${OpenCV_LIBS} /usr/lib/x86_64-linux-gnu/libopencv_highgui.so)

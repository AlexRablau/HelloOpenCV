# CMake version
cmake_minimum_required(VERSION 3.24)

# Settings
set(CMAKE_CXX_STANDARD 20)

# Project name
project(hello_opencv)

# Find libraries
find_package(fmt REQUIRED)
find_package(OpenCV REQUIRED)

# Add include directories
include_directories(${OpenCV_INCLUDE_DIRS})

# Add executable
add_executable(hello_opencv source/main.cxx)

# Link libraries
target_link_libraries(hello_opencv fmt::fmt)
target_link_libraries(hello_opencv ${OpenCV_LIBS} )
# Set minimum version of cmake
cmake_minimum_required(VERSION 3.22.1)

# set project name
project(Hello)

# Set Cpp Standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set C++ Specific flags
set(CMAKE_CXX_FLAGS "-Wall -Werror -O2 -march=native")

# Executable we want to build
add_executable(hello_world helloworld.cpp)
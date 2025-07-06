# set minimum version of cmake for building
cmake_minimum_required(VERSION 3.22.1)

#Set project name
project(Hello)

#add executable we want to build
add_executable(hello_world helloworld.cpp)
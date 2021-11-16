cmake_minimum_required(VERSION 3.1)

project(Hello LANGUAGES CXX)

# not sure if this is the best way to override the output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# first arg determines the generated file name
add_executable(hello hello.cpp)

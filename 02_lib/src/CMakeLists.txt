cmake_minimum_required(VERSION 3.1)

project(Compute LANGUAGES CXX)

# not sure if this is the best way to override the output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_library(fibonacci STATIC
  fibonacci/fibonacci.h
  fibonacci/fibonacci.cpp
)

# first arg determines the generated file name
add_executable(compute main.cpp)

target_link_libraries(compute fibonacci)


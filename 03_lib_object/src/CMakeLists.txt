cmake_minimum_required(VERSION 3.1)

project(Fibonacci LANGUAGES CXX)

# not sure if this is the best way to override the output directory
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/archive)

add_library(fibonacci-obj OBJECT
  fibonacci.h
  fibonacci.cpp
)

add_library(fibonacci-shared SHARED
  $<TARGET_OBJECTS:fibonacci-obj> 
)

add_library(fibonacci-static STATIC
  $<TARGET_OBJECTS:fibonacci-obj> 
)

# needs to set output names this way since I cannot use the same name with add_library
set_target_properties(fibonacci-shared PROPERTIES
  OUTPUT_NAME "fibonacci"
)

set_target_properties(fibonacci-static PROPERTIES
  OUTPUT_NAME "fibonacci"
)


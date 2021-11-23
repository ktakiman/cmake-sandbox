cmake_minimum_required(VERSION 3.12)

project(fibonacci_lib)

add_library(fibonacci SHARED)

message("CMAKE_SOURCE_DIR:          ${CMAKE_SOURCE_DIR}")
message("CMAKE_BINARY_DIR:          ${CMAKE_BINARY_DIR}")
message("CMAKE_CURRENT_SOURCE_DIR:  ${CMAKE_CURRENT_SOURCE_DIR}")
message("CMAKE_CURRENT_BINARY_DIR:  ${CMAKE_CURRENT_BINARY_DIR}")
message("PROJECT_SOURCE_DIR:        ${PROJECT_SOURCE_DIR}")
message("PROJECT_BINARY_DIR:        ${PROJECT_BINARY_DIR}")

target_include_directories(fibonacci
  PUBLIC  "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

target_sources(fibonacci
  PRIVATE
    src/fibonacci.cpp
  # PUBLIC
  #   "${CMAKE_CURRENT_SOURCE_DIR}/include/fibonacci.h"
)


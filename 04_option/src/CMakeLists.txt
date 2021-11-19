cmake_minimum_required(VERSION 3.1)

# module which provides 'cmake_dependent_option'
include(CMakeDependentOption)

project(Fibonacci LANGUAGES CXX)

# not sure if this is the best way to override the output directory
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/archive)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

option(USE_LIBRARY "build library" OFF)

cmake_dependent_option(
  MAKE_STATIC_LIBRARY "compile with static library" ON
  "USE_LIBRARY" ON
)

message("USE_LIBRARY?  ${USE_LIBRARY}")
message("STATIC?       ${MAKE_STATIC_LIBRARY}")

list(APPEND _lib_files
  fibonacci.h
  fibonacci.cpp
)

if (USE_LIBRARY)
  if (MAKE_STATIC_LIBRARY)
    add_library(fibonacci STATIC "${_lib_files}")
  else()
    add_library(fibonacci SHARED "${_lib_files}")
  endif()
  add_executable(compute main.cpp)
  target_link_libraries(compute fibonacci)
else()
  add_executable(compute main.cpp "${_lib_files}")
endif()


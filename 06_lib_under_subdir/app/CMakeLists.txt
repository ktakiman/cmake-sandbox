cmake_minimum_required(VERSION 3.12)

project(compute_exe)

add_executable(compute)

target_sources(compute PRIVATE src/main.cpp)

target_link_libraries(compute PRIVATE fibonacci)

# 'compute' executable sets RUNPATH for fibonacci.so with a relative path instead of a absolute path
set_target_properties(compute PROPERTIES BUILD_RPATH_USE_ORIGIN TRUE)

# this skips RUNPATH entirely, fibonacci.so will need to be in the directory, which system can find
# set(CMAKE_SKIP_RPATH TRUE)

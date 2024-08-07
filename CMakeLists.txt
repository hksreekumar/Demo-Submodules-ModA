MESSAGE("> Building Submodule A")

cmake_minimum_required(VERSION 3.10)
project(MySubmoduleProject)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

SET(SUBMODA_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Demo-Submodules-ModA/src")
include_directories(${SUBMODA_INCLUDE_DIR})

add_library(MySubmoduleProject STATIC src/function.h)
set_target_properties(MySubmoduleProject PROPERTIES LINKER_LANGUAGE CXX)
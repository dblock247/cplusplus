cmake_minimum_required(VERSION 3.8)
project(sandbox)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp)
add_executable(sandbox ${SOURCE_FILES})
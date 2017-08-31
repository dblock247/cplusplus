cmake_minimum_required(VERSION 3.8)
project(sandbox)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp)

#set(BOOST_ROOT /usr/local/Cellar/boost/1.65.0)
#find_package(Boost 1.65.0)
#
#if(NOT Boost_FOUND)
#    message(FATAL_ERROR "Could not find boost!")
#endif()

find_package(Boost)
IF (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIR})
endif()

add_executable(sandbox ${SOURCE_FILES})
target_link_libraries (sandbox ${Boost_LIBRARIES})


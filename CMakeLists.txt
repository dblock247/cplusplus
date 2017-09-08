cmake_minimum_required(VERSION 3.8)
project(sandbox)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp)
set(Boost_USE_MULTITHREAD ON)
set(Boost_ADDITIONAL_VERSIONS "1.65" "1.65.0")
find_package(Boost COMPONENTS system filesystem REQUIRED)

add_executable(sandbox ${SOURCE_FILES})

if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIR})
    target_link_libraries(sandbox ${Boost_LIBRARIES})
    # target_link_libraries(sandbox ${Boost_LIBRARIES} ${Boost_FILESYSTEM_LIBRARY} ${Boost_SYSTEM_LIBRARY})
endif()


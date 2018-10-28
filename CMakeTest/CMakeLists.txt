# set project information
project(tutorial)
cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 14)

# the version number
set (TEST_VERSION_MAJOR 0)
set (TEST_VERSION_MINOR 1)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
    "${PROJECT_SOURCE_DIR}/test.h.in"
    "${PROJECT_BINARY_DIR}/test.h"
)

# add the binary tree to the search path for include files
# so that we will find test.h
include_directories("${PROJECT_BINARY_DIR}")


# use customerize boost library
set(BOOST_ROOT /home/pi/boost/boost_1_60_0)
find_package(Boost COMPONENTS regex system REQUIRED)
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    
    MESSAGE( STATUS "Boost_INCLUDE_DIRS = ${Boost_INCLUDE_DIRS}.")
    MESSAGE( STATUS "Boost_LIBRARIES = ${Boost_LIBRARIES}.")
    MESSAGE( STATUS "Boost_LIB_VERSION = ${Boost_LIB_VERSION}.")

    add_executable(demo 
        ${PROJECT_SOURCE_DIR}/src/main.cpp)
    target_link_libraries (demo ${Boost_LIBRARIES})
endif()
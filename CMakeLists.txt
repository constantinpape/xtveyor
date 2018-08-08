cmake_minimum_required(VERSION 3.1)
project(xtveyor)

set(XTVEYOR_INCLUDE_DIR ${CURRENT_CMAKE_SOURCE_DIR}/include)

set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} CACHE PATH "")
list(APPEND CMAKE_MODULE_PATH "${CMAKE_PREFIX_PATH}/lib/cmake")

find_package(xtensor REQUIRED)
include_directories(${xtensor_INCLUDE_DIRS})

# find global headers
file(GLOB_RECURSE headers include/*.hpp)
file(GLOB_RECURSE headers ${CMAKE_INSTALL_PREFIX}/include/*.hpp)
include_directories(include)

add_subdirectory(src)

cmake_minimum_required(VERSION 3.1)
project(xtveyor)

set(XTVEYOR_INCLUDE_DIR ${CURRENT_CMAKE_SOURCE_DIR}/include)

find_package(xtensor REQUIRED)
target_include_directories(xtensor ${XTENSOR_INCLUDE_DIR})
add_subdirectory(src)

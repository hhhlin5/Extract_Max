cmake_minimum_required(VERSION 3.23)
project(extract_max)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)
include_directories(test-unit)

add_executable(extract_max
        src/extract_max.h
        test-unit/catch.hpp
        test-unit/test.cpp)

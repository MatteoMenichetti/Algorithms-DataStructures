cmake_minimum_required(VERSION 3.17)
project(numbers LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)

add_executable(AllTests ./tests/CommonTests.cpp ./src/order.c src/selectionSort.c lib/common.h
        tests/SelectionSort.cpp
        tests/InsertionSort.cpp
        src/insertionSort.c)

add_subdirectory(lib/google_test_lib)
include_directories(lib/google_test_lib/googletest/include)
include_directories(lib/google_test_lib/googlemock/include)

target_link_libraries(AllTests gtest gtest_main)
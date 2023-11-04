cmake_minimum_required(VERSION 3.17)
project(numbers LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)

add_executable(CommonTest ./tests/CommonTests.cpp src/control.c)

add_executable(InsertionSortTest ./tests/InsertionSort.cpp
        ./src/insertionSort.c ./src/control.c ./lib/common.h)

add_executable(insertionSort ./src/insertionSort.c ./lib/common.h ./src/control.c )

add_executable(SelectionSortTest ./tests/SelectionSort.cpp
        ./src/selectionSort.c src/control.c ./lib/common.h)
add_executable(selectionSort ./src/selectionSort.c ./lib/common.h src/control.c )

add_executable(QuickSortTests ./tests/QuickSortTests.cpp ./lib/common.h ./src/control.c ./src/quickSort.c
        lib/quickSort.h)
add_executable(quickSort ./lib/common.h ./src/control.c ./src/quickSort.c
        lib/quickSort.h)

add_subdirectory(lib/google_test_lib)
include_directories(lib/google_test_lib/googletest/include)
include_directories(lib/google_test_lib/googlemock/include)

target_link_libraries(CommonTest gtest gtest_main)
target_link_libraries(InsertionSortTest gtest gtest_main)
target_link_libraries(SelectionSortTest gtest gtest_main)
target_link_libraries(QuickSortTests gtest gtest_main)
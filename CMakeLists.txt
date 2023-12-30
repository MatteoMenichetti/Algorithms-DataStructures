cmake_minimum_required(VERSION 3.17)
project(numbers LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)

add_executable(CommonTest tests/sorting/CommonTests.cpp src/sorting/control.c src/sorting/swap.c)

add_executable(InsertionSortTest tests/sorting/InsertionSort.cpp
        src/sorting/insertion_sort.c ./src/sorting/control.c ./lib/common.h
        src/sorting/swap.c)

add_executable(SelectionSortTest tests/sorting/SelectionSort.cpp
        src/sorting/selection_sort.c src/sorting/control.c ./lib/common.h
        src/sorting/swap.c)

add_executable(QuickSortRecursiveTests tests/sorting/QuickSortTests.cpp ./lib/common.h ./src/sorting/control.c src/sorting/quick_sort_recursive.c src/sorting/swap.c
        lib/quick_sort.h)

add_executable(HeapTest ./src/dataStructure/heap.c ./lib/heap.h ./tests/dataStructure/HeapTest.cpp)

add_subdirectory(lib/google_test_lib)
include_directories(lib/google_test_lib/googletest/include)
include_directories(lib/google_test_lib/googlemock/include)

target_link_libraries(CommonTest gtest gtest_main)
target_link_libraries(InsertionSortTest gtest gtest_main)
target_link_libraries(SelectionSortTest gtest gtest_main)
target_link_libraries(QuickSortRecursiveTests gtest gtest_main)
target_link_libraries(HeapTest gtest gtest_main)

enable_testing()

add_test(HeapTest HeapTest)

add_test(QuickSortRecursiveTests QuickSortTests)

add_test(CommonTest CommonTest)

add_test(SelectionSortTests SelectionSortTest)

add_test(InsertionSortTest InsertionSortTest)
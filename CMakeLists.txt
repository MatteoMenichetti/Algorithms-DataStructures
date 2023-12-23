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

add_executable(QuickSortTests tests/sorting/QuickSortTests.cpp ./lib/common.h ./src/sorting/control.c src/sorting/quick_sort.c
        lib/quick_sort.h)

add_executable(DataStructureTest ./src/dataStructure/heap.c tests/dataStructure/HeapTest.cpp tests/dataStructure/main.cpp)

add_subdirectory(lib/google_test_lib)
include_directories(lib/google_test_lib/googletest/include)
include_directories(lib/google_test_lib/googlemock/include)

target_link_libraries(CommonTest gtest gtest_main)
target_link_libraries(InsertionSortTest gtest gtest_main)
target_link_libraries(SelectionSortTest gtest gtest_main)
target_link_libraries(QuickSortTests gtest gtest_main)
target_link_libraries(DataStructureTest gtest gtest_main)

enable_testing()

add_test(DataStructureTest DataStructureTest)

add_test(QuickSortTests QuickSortTests)

add_test(CommonTest CommonTest)

add_test(SelectionSortTests SelectionSortTest)

add_test(InsertionSortTest InsertionSortTest)
#include <gtest/gtest.h>
#include "../src/insertionSort.c"

TEST(InsertionSort, sort) {
    int array[10] = {9, 8, 6, 5, 7, 4, 3, 1, 2, 0}, arraySorted[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, length =
            sizeof(array) / sizeof(array[0]);
    sort(array, length);
    for (int i: array)
        ASSERT_EQ(array[i], arraySorted[i]);
}
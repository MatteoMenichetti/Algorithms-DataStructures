#include <gtest/gtest.h>

extern "C" {
#include "../lib/common.h"
}

TEST(SelectionSort, sort) {
    int array[4] = {1, 2, 3, 0};
    sort(array, 4);
    for (int i = 0; i < 4; i++)
        EXPECT_EQ(array[i], i);
}

TEST(SelectionSort, sort1) {
    int array[4] = {0, 1, 2, 3};
    sort(array, 4);
    for (int i = 0; i < 4; i++)
        EXPECT_EQ(array[i], i);
}

TEST(SelectionSort, sort2) {
    int array[4] = {3, 2, 1, 0};
    sort(array, 4);
    for (int i = 0; i < 4; i++)
        EXPECT_EQ(array[i], i);
}

TEST(SelectionSort, sort3) {
    int array[4] = {3, 2, 1, 2}, arraySorted[4] = {1, 2, 2, 3};
    sort(array, 4);
    for (int i = 0; i < 4; i++)
        EXPECT_EQ(array[i], arraySorted[i]);
}

TEST(SelectionSort, sort4) {
    int array[4] = {-1, 1, 0, 2}, arraySorted[4] = {-1, 0, 1, 2};
    sort(array, 4);
    for (int i = 0; i < 4; i++)
        EXPECT_EQ(array[i], arraySorted[i]);
}

TEST(SelectionSort, swap) {
    int array[2] = {0, 1};
    swap(array, 0, 1);
    ASSERT_EQ(array[0], 1);
    ASSERT_EQ(array[1], 0);
}
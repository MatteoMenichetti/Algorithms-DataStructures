#include <gtest/gtest.h>

extern "C" {
#include "../../lib/common.h"
}

TEST(InsertionSort, sort) {
    int array[4] = {1, 2, 3, 0};
    sort(array, 4);
    for (int i = 0; i < 4; i++)
        EXPECT_EQ(array[i], i);
}

TEST(InsertionSort, sort1) {
    int array[4] = {0, 1, 2, 3};
    sort(array, 4);
    for (int i = 0; i < 4; i++)
        EXPECT_EQ(array[i], i);
}

TEST(InsertionSort, sort2) {
    int array[4] = {3, 2, 1, 0};
    sort(array, 4);
    for (int i = 0; i < 4; i++)
        EXPECT_EQ(array[i], i);
}

TEST(InsertionSort, sort3) {
    int array[4] = {3, 2, 1, 2}, arraySorted[4] = {1, 2, 2, 3};
    sort(array, 4);
    for (int i = 0; i < 4; i++)
        EXPECT_EQ(array[i], arraySorted[i]);
}

TEST(InsertionSort, sort4) {
    int array[4] = {-1, 1, 0, 2}, arraySorted[4] = {-1, 0, 1, 2};
    sort(array, 4);
    for (int i = 0; i < 4; i++)
        EXPECT_EQ(array[i], arraySorted[i]);
}

TEST(InsertionSort, swap) {
    int array[3] = {1, 2, 0};
    swap(array, 0, 2);
    for (int i = 0; i < 3; i++)
        ASSERT_EQ(array[i], i);
}
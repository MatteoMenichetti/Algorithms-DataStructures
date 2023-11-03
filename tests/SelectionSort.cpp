#include <gtest/gtest.h>

extern "C" {
#include "../lib/common.h"
}

TEST(InsertionSort, sort) {
    int array[4] = {1, 2, 3, 0};
    sort(array, 4);
    for (int i = 0; i < 4; i++)
        EXPECT_EQ(array[i], i);
}

TEST(InsertionSort, sort1) {
    int array[4]={0,1,2,3};
    sort(array, 4);
    for (int i = 0; i < 4; i++)
        EXPECT_EQ(array[i], i);
}

TEST(InsertionSort, sort2) {
    int array[4]={3,2,1,0};
    sort(array, 4);
    for (int i = 0; i < 4; i++)
        EXPECT_EQ(array[i], i);
}

TEST(SelectionSort, swap){
    int array[2]={0, 1};
    swap(array, 0, 1);
    ASSERT_EQ(array[0], 1);
    ASSERT_EQ(array[1], 0);
}
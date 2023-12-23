#include <gtest/gtest.h>
#include "../../src/sorting/control.c"
#include "../../src/sorting/swap.c"

int natural[10] = {9, 8, 6, 5, 7, 4, 3, 1, 2, 0};
TEST(CommonTest, CorrectSize) {
    int o = control(natural, 10);

    ASSERT_EQ(o, EXIT_SUCCESS);
}

TEST(CommonTest, SizeMinorEqual2El) {
    int o = control(natural, -1);

    ASSERT_EQ(o, EXIT_FAILURE);

    o = control(natural, 1);
    ASSERT_EQ(o, EXIT_FAILURE);
}

TEST(CommonTest, NULLArray) {
    ASSERT_EQ(control(NULL, 1), EXIT_FAILURE);
}

TEST(CommonTest, swap){
    int array[3] = {0, 2, 1};
    swap(array, 1, 2);
    for (int i = 0; i < 3; i++)
        ASSERT_EQ(array[i], i);
}
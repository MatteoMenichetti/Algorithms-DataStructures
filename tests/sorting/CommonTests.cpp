#include <gtest/gtest.h>
#include "../../src/sorting/control.c"

int natural[10] = {9, 8, 6, 5, 7, 4, 3, 1, 2, 0};
TEST(CommonTest, CorrectSize) {
    int o = control(natural, 10);

    EXPECT_EQ(o, EXIT_SUCCESS);
}

TEST(CommonTest, SizeMinorEqual2El) {
    int o = control(natural, -1);

    EXPECT_EQ(o, EXIT_FAILURE);

    o = control(natural, 1);
    EXPECT_EQ(o, EXIT_FAILURE);
}

TEST(CommonTest, NULLArray) {
    ASSERT_EQ(control(NULL, 1), EXIT_FAILURE);
}
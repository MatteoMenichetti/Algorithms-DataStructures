#include <gtest/gtest.h>

#include "../src/order.c"

TEST(CommonTest, SorrectSize){
    int natural [10] = {9,8,6,5,7,4,3,1,2,0}, o = order(natural, 10);

    EXPECT_EQ(o, EXIT_SUCCESS);
}

TEST(CommonTest, SizeMinorEqual0El){
    int natural [10] = {9,8,6,5,7,4,3,1,2,0};
    int o = order(natural, -1);

    EXPECT_EQ(o, EXIT_FAILURE);

    o = order(natural, 0);
    EXPECT_EQ(o, EXIT_FAILURE);
}

TEST(CommonTest, NULLArray){
    ASSERT_EQ(order(NULL, 1), EXIT_FAILURE);
}
#include <gtest/gtest.h>

#include "../src/order.c"

TEST(CommonTest, correctOrder){
    int natural [10] = {9,8,6,5,7,4,3,1,2,0}, o = order(natural, 10);

    EXPECT_EQ(o, EXIT_SUCCESS);
}

TEST(CommonTest, uncorrectOrder){
    int natural [10] = {9,8,6,5,7,4,3,1,2,0};
    int o = order(natural, -11);

    EXPECT_EQ(o, EXIT_FAILURE);
}
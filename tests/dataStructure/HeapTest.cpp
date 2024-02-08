#include <gtest/gtest.h>

extern "C" {
#include "../../lib/heap.h"
}

TEST(HeapTest, constructNminoreq3) {
    ASSERT_TRUE(construct(NULL, 2, 2) == NULL);
}

TEST(HeapTest, arrayIsNull) {
    ASSERT_TRUE(construct(NULL, 4, 4) == NULL);
}
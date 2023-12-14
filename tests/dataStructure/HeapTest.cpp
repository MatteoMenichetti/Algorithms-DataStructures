#include <gtest/gtest.h>
#include "../../src/dataStructure/heap.c"

TEST(HeapTest, up_head){
    heap * heap = construct(4);
    insert(heap, 2);

    EXPECT_EQ(heap->array[1], 2);
}
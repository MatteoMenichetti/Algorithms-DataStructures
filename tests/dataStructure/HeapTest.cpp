#include <gtest/gtest.h>

extern "C" {
#include "../../lib/heap.h"
}

TEST(HeapTest, constructNLE3) {
    int a[1] = {1};
    ASSERT_TRUE(construct(a, 2, 2) == nullptr);
}

TEST(HeapTest, constructArrayIsNull) {
    ASSERT_TRUE(construct(NULL, 4, 4) == nullptr);
}

TEST(HeapTest, constructnLessThan1) {
    int a[1] = {1};
    ASSERT_TRUE(construct(a, 0, 4) == nullptr);
}

TEST(HeapTest, constructnGN) {
    int a[] = {1};
    ASSERT_TRUE(construct(a, 5, 4) == nullptr);
}

TEST(HeapTest, insertFullHeap){
    int a[4]={1,1,1,1};
    heap * heap = construct(a, 4,4);

    ASSERT_EQ(insert(heap,2), EXIT_FAILURE);

}

TEST(HeapTest, construct) {
    int a[4] = {0, 1, 2, 3}, final[] = {0, 3, 1, 2};

    heap *heap = construct(a, 4, 4);

    for (int i = 0; i < 4; i++)a[i] = heap->array[i];

    for (int i = 0; i < 4; i++) {
        ASSERT_EQ(heap->array[i], final[i]);
    }

}

TEST(HeapTest, constructAllEqual) {

    int a[6] = {0, 1, 1, 1, 1, 1};

    heap *heap = construct(a, 6, 6);

    for (int i = 1; i < 6; i++)ASSERT_EQ(heap->array[i], 1);

}

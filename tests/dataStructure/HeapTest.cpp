#include <gtest/gtest.h>
#include "../../src/dataStructure/heap.c"

TEST(HeapTest, insert){
    heap * heap = construct(1);

    insert(heap, 2);

    ASSERT_EQ(heap->array[1], 2);

    free(heap);
}

//36 100 17 19

TEST(HeapTest, insert1){
    heap * heap = construct(4);
    int array[] = { 19, 36, 17, 100},sortedArray[] = {100, 36, 17, 19};

    for(int i : array)
        insert(heap, i);

    for (int i = 0; i<4; i++)
        ASSERT_EQ(heap->array[i], array[i]);
}

TEST(HeapTest, remove){
    heap * heap = construct(4);
    int array[] = { 100, 19, 36, 17}, sortedArray[] = {36, 19, 17};


}
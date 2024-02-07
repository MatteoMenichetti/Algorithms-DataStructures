#include <stdlib.h>
#include "../../lib/heap.h"

heap *construct(int *array, int n) {
    if (n < 3)
        return NULL;

    heap *head = (struct heap *) malloc(sizeof(heap));

    head->array = array;
    head->n = n;
    head->i = 0;
    return head;
}

// [6, 4, 7, 3, 2, 1]

void up_heap(int *array, int j) {
    for (int i = j / 2; j > 0; j /= 2) {
        if (array[j] > array[i]) {
            int t = array[j];
            array[j] = array[i];
            array[i] = t;
        }
    }
}

void down_heap(int *array, int i) {

}

int insert(heap *heap, int el) {
    if (heap == NULL)
        return EXIT_FAILURE;

    if (heap->i == heap->n)
        return EXIT_FAILURE;

    heap->array[heap->i + 1] = el;
    heap->i++;

    up_heap(heap->array, el);

    return EXIT_SUCCESS;
}

int removeHeap(heap *) {
    return EXIT_SUCCESS;
}
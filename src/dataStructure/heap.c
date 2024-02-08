#include <stdlib.h>
#include "../../lib/heap.h"

heap *construct(int *array, int n, int N) {
    if (n < 0 && N < 0) return NULL;

    if (N < 3) return NULL;

    if (n > N)return NULL;

    if (array == NULL) return NULL;

    heap *head = (struct heap *) malloc(sizeof(heap));

    head->array = (int *) calloc(N, sizeof(int));
    head->n = n;
    head->N = N;

    for (int i = 1; i < n; i++) {
        insert(head, array[i]);
    }

    return head;
}

// [6, 4, 7, 3, 2, 1]

void up_heap(int *array, int i) {
    while (i > 1) {
        for (int j = i / 2; j > 0; j = j / 2) {
            if (array[j] < array[i]) {
                int t = array[i];
                array[i] = array[j];
                array[j] = t;
            }
        }
        i--;
    }
}

void down_heap(int *array, int i, int n) {
    while(i>0){
        for(int j = i*2; j < n; j=j*2)
            break;
    }
}

int insert(heap *heap, int el) {
    if (heap == NULL)
        return EXIT_FAILURE;

    if (heap->n < heap->N) {
        heap->n++;
        heap->array[heap->n] = el;
        up_heap(heap->array, heap->n);
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}

int removeHeap(heap *heap) {
    return EXIT_SUCCESS;
}
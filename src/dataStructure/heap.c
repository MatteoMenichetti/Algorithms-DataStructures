#include <stdlib.h>

typedef struct heap {
    int *array;
    int n;
    int effective;
} heap;

heap *construct(int n) {
    if (n <= 3)
        return NULL;

    heap *head = (struct heap *) malloc(sizeof(heap));

    head->array = (int *) calloc(n, sizeof(int));
    head->n = n;
    head->effective = 0;
    return head;
}

// [6, 4, 7, 3, 2, 1]

void up_heap(int array[], int j) {
    for(int i = j/2 ; j>0; j/=2){
        if(array[j]>array[i]){
            int t = array[j];
            array[j]=array[i];
            array[i]=t;
        }
    }
}

int insert(heap *heap, int n) {
    if (heap == NULL)
        return -1;
    if (heap->effective == heap->n)
        return -1;
    heap->array[heap->effective + 1] = n;
    heap->effective++;

    up_heap(heap->array, n);

    return 1;
}
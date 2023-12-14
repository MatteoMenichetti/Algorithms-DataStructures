#include <stdlib.h>

typedef struct heap{
    int *array;
    int n;
    int effective;
} heap;

heap * construct(int n){
    if(n<=3)
        return NULL;

    heap* heap = malloc(sizeof(heap));

    heap->array = calloc(n, sizeof(int));
    heap->n = n;
    heap->effective = 0;
    return heap;
}

void up_heap(heap* heap){

}

int insert(heap * heap, int n){
    if(heap == NULL)return -1;
    if(heap->effective==heap->n)
        return -1;
    heap->array[heap->effective] = n;
    heap->effective++;

    up_heap(heap);

    return 1;
}
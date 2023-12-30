#include <stdlib.h>
#include "../../lib/heap.h"

heap *construct(int n) {
    if (n < 3)
        return NULL;

    heap *head = (struct heap *) malloc(sizeof(heap));

    head->array = (int *) calloc(n, sizeof(int));
    head->n = n;
    head->i = 0;
    return head;
}

// [6, 4, 7, 3, 2, 1]

void up_heap(int *array, int j) {
    for(int i = j/2 ; j>0; j/=2){
        if(array[j]>array[i]){
            int t = array[j];
            array[j]=array[i];
            array[i]=t;
        }
    }
}

void down_heap(int *array, int i){

}

int insert(heap *heap, int n) {
    if (heap == NULL)
        return EXIT_FAILURE;
    
    if (heap->i == heap->n)
        return EXIT_FAILURE;

    heap->array[heap->i + 1] = n;
    heap->i++;

    up_heap(heap->array, n);

    return EXIT_SUCCESS;
}

int remove(heap * heap){
    return EXIT_SUCCESS;
}
typedef struct heap {
    int *array;
    int n;
    int i;
} heap;

heap *construct(int);

void up_heap(int *, int);

void down_heap(int *, int);

int insert(heap*, int);

int removeHeap(heap *);
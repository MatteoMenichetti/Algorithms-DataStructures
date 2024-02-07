typedef struct heap {
    int *array;
    int n;
    int N;
} heap;

heap *construct(int *, int, int);

void up_heap(int *, int);

void down_heap(int *, int);

int insert(heap *, int);

int removeHeap(heap *);
#include "../../lib/quick_sort.h"


int sort(int *array, int length) {
    if (control(array, length) != EXIT_SUCCESS) return EXIT_FAILURE;

    quick_sort(array, 0, length - 1);

    return EXIT_SUCCESS;
}

void quick_sort(int *array, int l, int r) {
    if (l < r) {
        int i = partition(array, l, r);
        quick_sort(array, i + 1, r);
        quick_sort(array, l, i - 1);
    }
}

// -1, 1, 0, 2

int partition(int *array, int l, int r) {
    int i = l, j = r - 1;
    while (1) {
        while (array[i] < array[r] && i < r)
            i++;
        while (array[j] > array[r] && j > l) {
            j--;
        }
        if (i >= j)break;
        swap(array, i, j);
    }
    swap(array, i, r);
    return i;
}
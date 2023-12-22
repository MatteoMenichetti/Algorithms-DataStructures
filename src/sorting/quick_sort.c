#include "../../lib/quick_sort.h"


int sort(int *array, int length) {
    if (control(array, length) != EXIT_SUCCESS) return EXIT_FAILURE;

    quick_sort(array, 0, length - 1);

    return EXIT_SUCCESS;
}

void quick_sort(int *array, int l, int r) {
    if (l < r) {
        int i = partition(array, l, r);
        if (i == r) return;
        quick_sort(array, i + 1, r);
        quick_sort(array, l, i - 1);
    }
}

// 3, 2, 1, 0

int partition(int *array, int l, int r) {
    int i = l, j = r - 1;
    for (;;) {
        while (array[j] > array[r]) {
            if (i > j)break;
            j--;
        }
        while (array[i] < array[r]) {
            if (i > j)break;
            i++;
        }
        if (array[i] == array[j])i++;
        if (i > j) {
            swap(array, i, r);
            break;
        }
        swap(array, i, j);
    }
    return i;
}

void swap(int *array, int min, int i) {
    int t = array[min];
    array[min] = array[i];
    array[i] = t;
}
#include "../lib/common.h"

void swap(int *array, int start, int limit) {
    int swap = array[limit];
    for (int i = limit; i > start; i--) {
        array[i] = array[i-1];
    }
    array[start] = swap;
}

int sort(int *array, int length) {
    if (control(array, length) != EXIT_SUCCESS)
        return EXIT_FAILURE;

    int min = -1;

    for (int i = 1; i < length; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (array[i] < array[j])
                min = j;
        }
        if (min >= 0) {
            swap(array, min, i);
            min = -1;
        }
    }
    return EXIT_SUCCESS;
}



#include "../lib/common.h"

int control(int *array, int length) {
    if (length <= 2) {
        printf("order: length of array <= 2\n");
        return EXIT_FAILURE;
    }

    if (array == NULL) {
        printf("order: array argument passed is NULL\n");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
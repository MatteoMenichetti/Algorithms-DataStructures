#include "../../lib/common.h"

int sort(int array[], int length) {
    if (control(array, length) != EXIT_SUCCESS)
        return EXIT_FAILURE;

    for (int i = 1; i < length; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (array[j + 1] < array[j]) {
                swap(array, j, j + 1);
            }
        }
    }
    return EXIT_SUCCESS;
}
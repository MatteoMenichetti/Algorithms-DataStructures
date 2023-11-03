#include "../lib/common.h"

int order(int * array, int length){
    if(length <= 0){
        printf("order: length <= 0\n");
        return EXIT_FAILURE;
    }

    if(array == NULL) {
        printf("order: array is NULL\n");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
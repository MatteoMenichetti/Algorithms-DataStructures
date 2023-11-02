#include "../lib/common.h"

int order(int * array, int length){
    if(length<=0){
        printf("selectionSort: length<=0");
        return EXIT_FAILURE;
    }
    if(array==NULL) {
        perror("selectionSort: array is NULL");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
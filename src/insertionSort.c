#include "../lib/common.h"

void swap(int *array, int i, int j) {

}

int sort(int *array, int length) {
    if (control(array, length) != EXIT_SUCCESS)
        return EXIT_FAILURE;

    for(int i = 1; i<length; i++){
        for(int j=i-1; j>0; j++){
            if (array[j]<array[i]){
                swap(array, i, j);
            }
        }
    }

    return EXIT_SUCCESS;
}



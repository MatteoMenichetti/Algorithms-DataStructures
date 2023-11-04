#include "../lib/quickSort.h"

int sort(int *array, int length) {
    if (control(array, length) != EXIT_SUCCESS) return EXIT_FAILURE;

    return EXIT_SUCCESS;
}

void swap(int *array, int min, int i) {
    int t = array[min];
    array[min] = array[i];
    array[i] = t;
}

int selectPivot(int *array){
    return 0;
}

/*
int main (){
    int array[4] = {0, 1, 2, 3}, length= sizeof(array)/ sizeof(array[0]);
    sort(array, length);
    return 0;
}
 */
#include "../lib/common.h"

int selectionSort(int * array, int length){

    order(array, length);

    return sort(array, length);
}

int sort(int *array, int length){
    int min;

    for(int i = 0; i < length-2; i++){
        min = i;
        for(int j=i+1; j < length; j++){
            if (array[j]<array[min])
                min=j;
        }
        if(min != i){
            int t = array[min];
            array[min]=array[i];
            array[i]=t;
        }
    }
    return EXIT_SUCCESS;
}
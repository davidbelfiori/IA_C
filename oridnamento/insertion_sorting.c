//
// Created by David on 20/11/2023.
//
#include <stdio.h>

void insertion_sort(int *array, int size) {
    for (int i = 1; i < size; i++) {
        int temp = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > temp) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;
    }
}

int main() {
    int array[] = {5, 2, 4, 1, 3};
    int size = sizeof(array) / sizeof(array[0]);

    insertion_sort(array, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
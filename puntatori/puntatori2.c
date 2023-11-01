//
// Created by David Julian on 30/10/2023.
//
// scrivi e commenta un esempio facile sui puntatori in c

#include "stdio.h"
#include "stdlib.h"

int main(int argc, char **argv) {
    int *a;
    int n;
    n = 8;
    a=&n;

    //*a da in output il valore di n perche *a punta a n e quindi *a è uguale a n
    printf("%d %d \n", n, *a);
}

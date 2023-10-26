//
// Created by David Julian Belfiori on 26/10/23.
//
#include "stdio.h"

int main(int argc, char **argv) {
   int *a, b;
   //a=&b; // a punta a b il simbolo & indica l'indirizzo di b
   b=10;
    printf("%d %p \n", b, a);
    printf(" %d %d",b,*a);
}

// output: 10 0x7ff7afff08f4 dove 10 è il valore di b e 0x7ff7afff08f4 è l'indirizzo di a
//  secondo output  10 10 dove 10 è il valore di b e 10 è il valore di a
//
// Created by David Julian on 30/10/2023.
//

#include <stdio.h>
#include <stdlib.h>

// utlizzio di puntatori per scambiare due variabili e le dichiaro unsigned perche non possono essere negative
void swap(unsigned int *a,unsigned int *b){
    unsigned temp;
    temp=*a; //temp prende il valore di a che a sua volta prende il valore di m e quindi temp prende il valore di m proveniente dalla funzione MCD
    *a=*b;
    *b=temp;
}

//le dichiaro unsigned perche non possono essere negative
unsigned int MCD(unsigned m,unsigned n){
    if (m==0 || n==0){
        printf("errore");
        exit(1);
    }
    while (m!=n){
        if (m<n){
            swap(&m,&n);
        }
        m=m-n;
    }
    return m;
}



int main(int argc, char **argv){
    unsigned int k = MCD(12, 18);
    printf("%d",k);
}
//
// Created by David Julian Belfiori on 26/10/23.
//

/*
 * che cos'è malloc?
 * malloc è una funzione che serve per allocare memoria dinamicamente e cioè in fase di esecuzione del programma
 */
#include "stdio.h"
#include "stdlib.h"
int main(int argc, char **argv) {
    int *a,n;
    n=8;
    a=(int *) malloc(n*sizeof(int));



//quando fallisce malloc restituisce NULL
    if(a==NULL){
        printf("errore");
        exit(1);
    }else{

        for (int i = 0; i < n; ++i)
            a[i]=i;
        printf("%d %d",*(a+4),a[4]); // output: 4 4 dove 4 è il valore di a[4] e *(a+4) ci porta all'indirizzo di a[4] e ne stampa il valore
        free(a); //il comando free libera la memoria allocata da malloc e cio serve per evitare memory leak (perdita di memoria) e questo ci danneggia il programma
    }
    //abbiamo fatto l'if per controllare che malloc non restituisca NULL , se restituisce NULL vuol dire che non c'è abbastanza memoria per allocare n*sizeof(int) byte
    //è una good practice controllare sempre che malloc non restituisca NULL

    /* un esempio di memory leak è quando si fa un ciclo for e si fa un malloc dentro il ciclo for, in questo caso malloc viene chiamato
     * n volte e quindi si allocano n*sizeof(int) byte n volte
     * e quindi si ha una perdita di memoria
     */
}
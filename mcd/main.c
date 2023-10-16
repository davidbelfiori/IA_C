//
// Created by David Julian Belfiori on 16/10/23.
//
#include <stdio.h>
#include "mcd.h"
//Per Convenzione
//le "" per delimitare i nomi degli include file preparari da noi ,
// mentre si usa <> per delimitare i nomi degli include file che sono forniti dal sistema o dal complatore


int main() {
    int numero1, numero2;

    printf("Inserisci due numeri interi: ");
    scanf("%d %d", &numero1, &numero2);

    int risultato = trovaMCD(numero1, numero2); // Chiama la funzione dalla libreria

    printf("Il Massimo Comune Divisore di %d e %d è %d\n", numero1, numero2, risultato);

    return 0;
}

//
// Created by David Julian Belfiori on 16/10/23.
//
#include <stdio.h>

int main() {
    int scelta;

    printf("Inserisci un numero da 1 a 3: ");
    scanf("%d", &scelta);

    switch (scelta) {
        case 1:
            printf("Hai scelto il numero 1.\n");
            break;
        case 2:
            printf("Hai scelto il numero 2.\n");
            break;
        case 3:
            printf("Hai scelto il numero 3.\n");
            break;
        default:
            //dove andra quando non avra scelta, cio è utile per il debu
            printf("Il numero inserito non è valido.\n");
    }

    return 0;
}

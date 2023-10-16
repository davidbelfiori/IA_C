//
// Created by David Julian Belfiori on 16/10/23.
//
#include <stdio.h>

#include "mcd.h"
// Dichiarazione della funzione per calcolare il MCD


// Definizione della funzione per calcolare il MCD
int trovaMCD(int num1, int num2) {
    while (num1 != num2) {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }
    return num1;
}

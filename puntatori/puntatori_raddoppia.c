//
// Created by David Julian on 30/10/2023.
//
#include <stdio.h>
#include <stdlib.h>

void raddoppia(int *p){
    *p=(*p)*2;
    printf("%d \n",*p);
}
void dimezza(int *p){
    *p=(*p)/2;
    printf("%d \n",*p);
}

int main(int argc, char **argv){
    int y=10;
    int *p;
    p=&y;  //p=indirizzo di y e quindi *p=y
    raddoppia(p);
    dimezza(p);
}
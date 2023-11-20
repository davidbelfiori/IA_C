//
// Created by David on 22/11/2023.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
    struct node *parent;
    struct node *left;
    struct node *right;
    int key;
    int value;
}nodo;

nodo *creaNodo(int chiave, int valore){
    nodo *nuovo= malloc(sizeof(nodo));
    nuovo->key=chiave;
    nuovo->parent=NULL;
    nuovo->value=valore;
    nuovo->left=NULL;
    nuovo->right=NULL;
    return nuovo;
}

nodo *inserisciNodo(nodo *albero,int chiave,int valore){
    if(albero==NULL){
        return creaNodo(chiave,valore);
    }else if(chiave<albero->key) {
        albero->left = (struct node *) inserisciNodo((nodo *) albero->left, chiave, valore);
    }else{
        albero->right = (struct node *) inserisciNodo((nodo *) albero->right, chiave, valore);
    }
    albero->parent=NULL;
    return albero;
}


void stampa_albero(nodo *albero){
    if (albero !=NULL){
        stampa_albero((nodo *) albero->right);
        printf("chiave: %d,valore: %d,padre: %p,sinistro: %p,destro: %p\n",albero->key,albero->value,albero->parent,albero->left,albero->right);
        stampa_albero((nodo *) albero->left);
    }
}

int main(){
    nodo *albero=NULL;
    albero=inserisciNodo(albero,5,5);
    albero=inserisciNodo(albero,3,3);
    albero=inserisciNodo(albero,7,7);
    albero=inserisciNodo(albero,2,2);
    albero=inserisciNodo(albero,4,4);
    albero=inserisciNodo(albero,6,6);
    albero=inserisciNodo(albero,8,8);
    stampa_albero(albero);
    return 0;
}
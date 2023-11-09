//
// Created by David Julian on 08/11/2023.
//
#include <stdio.h>
#include "stdlib.h"
#include <stdbool.h>
#include <assert.h>

typedef struct nodo{
    int data;
    struct node *next;
}Nodo;

typedef struct lista{
    Nodo *testa;
}Lista;

Nodo *head(Lista *lista){
    if (lista==NULL){
        return NULL;
    } else{
        return lista->testa;
    }
}

bool empty(Lista *lista){
    return head(lista)==NULL;
}

Nodo *tail(Lista *lista){
    // current è inizialmente il primo
    Nodo *current=head(lista);
    while (current!=NULL){
        if (current->next==NULL){
            return current;
        } else{
            current = (Nodo *) current->next;
        }
    }
    return NULL;
}

Nodo *insertTesta(Lista *lista,int data){
    Nodo *newNodo=(Nodo *)malloc(sizeof(Nodo));
   // assert(head(lista)!=NULL);
    newNodo->data=data;
    newNodo->next= (struct node *) head(lista);
    lista->testa=newNodo;
    return newNodo;
}

Nodo *printList(Lista *lista){
    while (lista->testa!=NULL){
        printf("%d",lista->testa->data);
        lista->testa= (Nodo *) lista->testa->next;
    }

    return NULL;
}

Nodo *insertCoda(Lista *lista,int data){
    Nodo  *last= tail(lista);

    Nodo *newNodo=(Nodo *)malloc(sizeof(Nodo));
    if (newNodo == NULL) {
        // Gestione dell'errore di allocazione di memoria
        exit(1);
    }
    newNodo->data=data;
    newNodo->next=NULL;

    if (last == NULL) {
        // Se la lista è vuota, il nuovo nodo diventa la testa
        lista->testa = newNodo;
    } else {
        // Altrimenti, aggiorna il puntatore next dell'ultimo nodo
        last->next = newNodo;
    }
    return newNodo;
}

Nodo *createList(){
    Lista *lista=(Lista *)malloc(sizeof(Lista));
    lista->testa=NULL;
    return (Nodo *) lista;
}

int main(){
    Lista *lista= (Lista *) createList();
    insertTesta(lista,1);
    insertTesta(lista,2);
    insertTesta(lista,3);
    insertTesta(lista,4);
    printList(lista);

    insertCoda(lista,6);
    printList(lista);
    return 0;
}
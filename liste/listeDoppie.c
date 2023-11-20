//
// Created by David Julian on 12/11/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}Node;

typedef struct List{
    Node *head;
    Node *tail;
}List;

Node *createList(){
    List *list=(List *) malloc(sizeof(List));
    list->head=NULL;
    list->tail=NULL;
    return (Node *) list;

}

Node *head(List *lista){
    if (lista==NULL){
        return NULL;
    } else{
        return lista->head;
    }
}

Node *tail(List *lista){
    if (lista==NULL){
        return NULL;
    } else{
        return lista->tail;
    }
}

Node *inserthead(List *lista,int data){
    Node *newNode=(Node *) malloc(sizeof(Node));
    if (newNode==NULL){
        printf("Errore nell'allocazione di memoria\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    if(head(lista)==NULL){
        lista->head= newNode;
        return lista->head;
    }
    lista->head->prev=newNode;
    newNode -> next =lista->head;
    lista->head = newNode;
    return lista->head;

}

Node *printList(List *lista){
    Node *current= (Node *) lista;
    while (current!=NULL){
        printf("%d",current->data);
       current= (Node *) current->next;
    }

    return NULL;
}

int main(){
    List *list= (List *) createList();
    inserthead(list,5);
    inserthead(list,6);

    printList(list);
}
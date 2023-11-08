// Includiamo le librerie necessarie
#include "stdio.h"
#include <stdbool.h>
#include <stdlib.h>

// Definiamo la struttura di un nodo
typedef struct node {
    int item;            // Elemento della lista
    struct node *next;   // Puntatore al prossimo nodo
} Node;

// Definiamo la struttura della lista
typedef struct list {
    Node *head;          // Puntatore alla testa della lista
} List;

// Restituisce il puntatore alla testa della lista
Node *head(List *mylist) {
    if (mylist == NULL) {
        return (NULL);
    } else {
        return (mylist->head);
    }
}

// Verifica se la lista è vuota
bool empty(List *mylist) {
    return (head(mylist) == NULL);
}

// Restituisce il puntatore al prossimo nodo
Node *next(Node *mynode) {
    if (mynode == NULL) {
        return (NULL);
    } else {
        return (mynode->next);
    }
}

// Restituisce il puntatore al nodo precedente dato il puntatore alla testa della lista
Node *prev(Node *head, Node *mynode) {
    Node *current = head;

    while (current != NULL) {
        if (current->next == mynode) {
            return (current);
        }
        current = current->next;
    }
    return NULL;
}

// Restituisce il puntatore all'ultimo nodo della lista
Node *tail(List *mylist) {
    Node *current = head(mylist);
    while (current != NULL) {
        if (current->next == NULL) {
            return current;
        } else {
            current = current->next;
        }
    }
    return NULL;
}

int remove(List *mylist,Node *mynode){
    int value;
    Node *Prev, *head;
    head=head(mylist);
    //se il nodo ch sto cancellando è proprio quello si testa
    if (head== mynode){
        head=mynode->next;
    }else{
        Prev=prev(head,mynode);
        if (prev != NULL){
            prev->next=mynode->next;
        } else{
            fprintf(stderr,"node not fond\n");
            return -1;
        }


    }

    value=mynode->item;
    free(mynode);
    return value;
}
Node *insert(List *mylist,Node *pos,int item){
    Node *new,*Head;
    if(mylist==NULL){
        return NULL;
    } else{
        Head=head(mylist);
        new= (Node *) malloc(sizeof(Node));
        new->item=item;
        new->next=pos->next;
        pos->next=new;
    }
    if(head==NULL){
        assert(pos==NULL);
        new->next=head;
        mylist->head=new;
    } else{
        new->next=pos->next;
        pos->next=new;
    }
    return (new);
}
// Funzione principale
int main() {
    return 0;
}

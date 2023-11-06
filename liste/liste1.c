//
// Created by David Julian Belfiori on 06/11/23.
//
#include "stdio.h"
#include <stdbool.h>

typedef struct node{
    int item; //elemento della lista
    struct node *next;  //dove sta il prossimo

}Node;

typedef struct list{
    Node *head;
}List;



Node *head(List *mylist) {
    if (mylist == NULL) {
        return (NULL);
    } else {
        return (mylist->head);
    }
}

bool empty(List *mylist){
    return (head(mylist)==NULL);
}

Node *next(Node *mynode) {
    if (mynode == NULL) {
        return (NULL);
    } else {
        return (mynode->next);
    }
}

Node *prev(Node *head, Node *mynode){
    Node *current=head;

    while (current!=NULL){
        if (current->next==mynode){
            return (current);
        }
    }
    return NULL;
}

Node *tail(List *mylist){
    Node *current= head(mylist);
    while (current!=NULL){
        if ((current ->next)==NULL){
            return current;
        } else{
            current = current->next;
        }
    }
    return NULL;
}

int main(){
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>


typedef struct node{
    struct node *prev;
    int data;
    struct node *next;
}Node;

typedef struct list{
    Node *tail;
    Node *head;
}List;

Node *createList(){
    List *list=(List *) malloc(sizeof(List));
    return (Node *) list;
}

Node *head(List *lista){
    if (lista==NULL){
        return NULL;
    } else{
        return lista->head;
    }
}

/*Node *tail(List *lista){
    if (lista==NULL){
        return NULL;
    } else{
        return lista->tail;
    }
}*/

Node *tail(Node *head){
    Node *current = head;
    while ( current != NULL){
        if (current ->next == NULL){
            return (current);
        }
        current = current -> next;
    }
    return NULL;
}

Node *insertListHead(Node *head,int data){
    Node *newNode=(Node *) malloc(sizeof(Node));
    newNode->data = data;
    if(head==NULL){
        head= newNode;
        return head;
    }
    head->prev=newNode;
    newNode -> next =head;
    head = newNode;

}

Node *next(Node *mynode) {
    if (mynode == NULL) {
        return (NULL);
    } else {
        return (mynode->next);
    }
}

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


/*
Node *insertTesta(List *mylist,int data){
    Node *newnode=(Node *) malloc(sizeof(Node));
    if (newnode == NULL) {
        // Gestione dell'errore di allocazione di memoria
        exit(1);
    }
    newnode->data=data;
    if (head(mylist)!=NULL){
        head(mylist)->prev=newnode;
    }
    mylist->head=newnode;
    return newnode;
}
*/




Node *printList(List *lista){
    while (lista->head!=NULL){
        printf("%d",lista->head->data);
        lista->head= (Node *) lista->head->next;
    }

    return NULL;
}

int main(){
    List *list= (List *) createList();
    insertTesta(list,1);
    insertTesta(list,2);
    insertTesta(list,3);
    printList(list);
}
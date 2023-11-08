//
// Created by David Julian Belfiori on 07/11/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef  struct node1{
    int data;
    struct node1* next;
}Node1;

void stampa(Node1* head){
    Node1* current=head;
    while (current!=NULL){
        printf("%p: ",current);
        printf("%d\n",current->data);
        current=current->next;
    }
}

bool empty(Node1* head){
    return((head->next)==NULL);
}



int main(){
    Node1* head= NULL;
    Node1* newElem=NULL;

    for (int i = 0; i < 20; ++i) {
        newElem= malloc(sizeof(Node1));
        newElem->data=i;
        newElem->next=head;
        head=newElem;
    }
    stampa(head);
    printf("%d",empty(head));
    return 0;
}

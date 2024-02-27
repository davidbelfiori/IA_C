/*Si consideri una lista con puntatori singoli, con i nodi della lista che contengono dei dati arbitrari. Si
scriva una procedura C che data una lista ed un intero i scambi tra loro i nodi nelle posizioni i ed i + 1,
se esistono.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
	int val;
	struct nodo *next;

}Node;



Node *addToHead(int value, Node* head) {
    Node* newNode = malloc(sizeof(Node)); // allocazione spazio
    newNode->val = value;
    newNode->next = head;
    return newNode;
}

void printList(Node *head){

	while(head!=NULL){
		printf("%d->",head->val);
		head = head->next;

	}
	printf("NULL \n");
}

Node *swap(int value,Node *head){
	Node *temp , *curr = head;
	while (curr->val = value && curr == NULL){
		curr=curr->next;

	}
	if(curr->next == NULL){
		printf("operazioe non concessa");
		return 0;
	}

	temp=curr->next;
	curr->next=curr->next->next;
	temp->next=temp->next->next;


}

int main(int argc, char const *argv[])
{
	Node *List = NULL;
	List=addToHead(3,List);
	List=addToHead(2,List);
	List=addToHead(1,List);

	printList(List);
	List=swap(2,List);
	printList(List);
	return 0;
}
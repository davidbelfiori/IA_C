/*Si scriva una procedura in C che data in ingresso due liste con puntatori singoli con un campo dati
(arbitrario), ordinate in modo crescente, restituisca in uscita una singola lista che fonda le due in ingresso
e sia ordinata in modo crescente; la nuova lista deve essere una copia, ossia le liste originarie non devono
essere alterate.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct liste_merge
{
	int item;
	struct nodo *nextM
}Node;

typedef struct list_head{
	Node *head;

}List;

Node newNode(int item){
	Node *newNode = malloc(sizeof(Node));
	newNode->next = NULL;
	newNode->item = item;
}

int main(int argc, char const *argv[])
{
	
	return 0;
}
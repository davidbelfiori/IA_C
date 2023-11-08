// Includiamo le librerie necessarie
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>  // La libreria "assert" è inclusa per gestire assert()
#include <string.h>
#include <stdbool.h>


// Definiamo una struttura "person" per rappresentare le informazioni su una persona
struct person {
    char *name;   // Nome della persona (stringa)
    int age;      // Età della persona (intero)
    float height; // Altezza della persona (virgola mobile)
    float weight; // Peso della persona (virgola mobile)
};

// Funzione per creare una nuova struttura "person" e inizializzarla con i dati specificati
struct person *person_create(char *name, int age, float height, float weight) {
    // Alloca memoria per la struttura "person"
    struct person *who = malloc(sizeof(struct person));

    // Verifica se l'allocazione di memoria ha avuto successo
    assert(who != NULL);

    // Alloca memoria per il campo "name" e copia il nome specificato
    who->name = strdup(name);

    // Inizializza i campi della struttura con i dati specificati
    who->age = age;
    who->height = height;
    who->weight = weight;

    return who; // Restituisce il puntatore alla struttura "person" appena creata
}

// Funzione per liberare la memoria allocata per una struttura "person"
void person_destroy(struct person *who) {
    // Verifica che il puntatore "who" non sia nullo
    assert(who != NULL);

    // Libera la memoria allocata per il campo "name" (la stringa)
    free(who->name);

    // Libera la memoria allocata per la struttura "person" stessa
    free(who);
}

// Funzione per stampare le informazioni di una persona
void person_print(struct person *who) {
    printf("Name: %s\n", who->name);
    printf("\tAge: %d\n", who->age);
    printf("\tHeight: %f\n", who->height);
    printf("\tWeight: %f\n", who->weight);
}

bool search_person(struct person *who, char *name){
   return (strdup(name)==who->name);
}

int main(int argc, char **argv) {
    // Creiamo due istanze della struttura "person" utilizzando la funzione "person_create"
    struct person *joe = person_create("Joe Alex", 32, 1.80, 64);
    struct person *frank = person_create("Frank Blank", 20, 1.90, 72);

    // Stampiamo le informazioni sulle persone
    printf("Joe is at memory location %p:\n", joe);
    person_print(joe);
    printf("Frank is at memory location %p:\n", frank);
    person_print(frank);

    // Modifichiamo alcune informazioni su Joe e Frank
   /*joe->age += 20;
    joe->height -= 2;
    joe->weight += 40;

    frank->age += 20;
    frank->weight += 20;

    // Stampiamo le informazioni aggiornate
    person_print(joe);
    person_print(frank);

    // Liberiamo la memoria allocata per Joe e Frank
    person_destroy(joe);
    person_destroy(frank);
*/
    printf("%d",search_person(joe,"Joe Alex"));
    return 0;
}

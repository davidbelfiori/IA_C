//
// Created by David Julian Belfiori on 02/11/23.
//
/*
 * Scrivere un programma in C che gestisca una lista di libri.
 * Il programma dovrebbe consentire all'utente di eseguire le seguenti operazioni:

Inserire un nuovo libro nella lista.
Visualizzare l'elenco completo dei libri presenti nella lista.
Trovare e visualizzare tutti i libri scritti da un autore specifico.
Calcolare e visualizzare il prezzo medio dei libri presenti nella lista.
Uscire dal programma.
 */

#include <stdio.h>
#include <stdlib.h>

struct Libro {
    char titolo[100];
    char autore[50];
    int anno_pubblicazione;
    float prezzo;
};

void inserisciLibro(struct Libro *libri,int *numLibri){

    if(*numLibri<10){
        struct Libro nuovoLibro;
        printf("titolo:\n");
        scanf("%%[^\n]",nuovoLibro.titolo);
        printf("autore");
        scanf("%[^\n]",nuovoLibro.autore);
        printf("anno di pubblicazione");
        scanf("%d",&nuovoLibro.anno_pubblicazione);
        printf("Inserisci il prezzo: ");
        scanf("%f", &nuovoLibro.prezzo);

        libri[*numLibri] = nuovoLibro;
        (*numLibri)++;
        printf("Libro aggiunto con successo!\n");
    } else {
        printf("La lista dei libri è piena. Impossibile aggiungere altri libri.\n");
    }


    }

void visualizzaLibri(struct Libro *libri, int numLibri) {
    if (numLibri > 0) {
        printf("Elenco dei libri:\n");
        for (int i = 0; i < numLibri; i++) {
            printf("Libro %d:\n", i + 1);
            printf("Titolo: %s\n", libri[i].titolo);
            printf("Autore: %s\n", libri[i].autore);
            printf("Anno di pubblicazione: %d\n", libri[i].anno_pubblicazione);
            printf("Prezzo: %.2f\n", libri[i].prezzo);
            printf("\n");
        }
    } else {
        printf("Nessun libro presente nella lista.\n");
    }
}


int main(){
    struct Libro libri[10];
    int numLibri=0;
    int scelta;

    do{
        printf("inserisci libro \n");
        printf("visualizza elenco \n");
        printf("trova libro dall'autore \n");
        printf("calcola il prezzo medio dei libri \n" );
        printf("esci \n");
        scanf("%d",&scelta);
        switch (scelta) {
            case 1:
                inserisciLibro(libri,&numLibri);
            case 5:
                break;
            default:
                printf("errore:operazione non valida");

        }

    } while (scelta!=5);

}


#include <stdio.h>
#include <cstring>

// Dichiarazione di una struttura
struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    // Dichiarazione di una variabile di tipo struct Student
    struct Student student1;

    // Accesso ai membri della struttura e assegnazione di valori
    strcpy(student1.name, "Alice");
    student1.age = 20;
    student1.gpa = 3.5;

    struct Student student2;
    strcpy(student2.name, "Bob");
    student2.age = 22;
    student2.gpa = 3.2;




    // Stampa dei membri della struttura
    printf("Nome: %s\n", student1.name);
    printf("Eta: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);

    printf("\nStudente 2:\n");
    printf("Nome: %s\n", student2.name);
    printf("Eta: %d\n", student2.age);
    printf("GPA: %.2f\n", student2.gpa);
    return 0;
}

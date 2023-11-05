//
// Created by David Julian on 04/11/2023.
//

#include <stdio.h>
#define MAX_SIZE 100
#include <stdbool.h>

typedef struct {
    int data[MAX_SIZE];
    int length;
} Sequence;

Sequence createSequence() {
    Sequence seq;
    seq.length = 0;
    return seq;
}

bool isEmpty(Sequence seq) {
    return seq.length == 0;
}

bool finisched(int p,Sequence seq){
    if (p==0){
        return true;
    } else{
        if (seq.data[p-1]==seq.data[p]){
            return true;
        } else{
            return false;
        }
    }

}
int head(Sequence seq) {
    if (isEmpty(seq)) {
        printf("Error: empty sequence\n");
        return -1;
    } else {
        return seq.data[0];
    }
}

int tail(Sequence seq) {
    if (isEmpty(seq)) {
        printf("Error: empty sequence\n");
        return -1;
    } else {
        return seq.data[seq.length - 1];
    }
}

int next(Sequence seq , int p){
    if (finisched(p,seq)){
        printf("Error: empty sequence\n");
        return -1;
    } else{
        return seq.data[p+1];
    }
}

int prev (Sequence seq, int p){
    if (finisched(p,seq)){
        printf("Error: empty sequence\n");
        return -1;
    } else{
        return seq.data[p-1];
    }
}

void removeElement (int p, Sequence *seq){
    if (isEmpty(*seq)){
        printf("Error: empty sequence\n");
    } else{
        for (int i=p;i<seq->length;i++){
            seq->data[i]=seq->data[i+1];
        }
        seq->length--;
    }
}

void insert(int p, int x, Sequence *seq){
    if (seq->length==MAX_SIZE){
        printf("errore sequenza piena");
    }else{
        for (int i=seq->length;i>p;i--){
            seq->data[i]=seq->data[i-1];
        }
        seq->data[p]=x;
        seq->length++;
    }
}

void printSequence(Sequence seq) {
    printf("Sequenza: ");
    for (int i = 0; i < seq.length; i++) {
        printf("%d ", seq.data[i]);
    }
    printf("\n");
}

int main(){
  Sequence seq = createSequence();
  insert(0, 1, &seq);
  insert(1, 2, &seq);
  insert(2, 3, &seq);
  insert(3, 4, &seq);
  insert(4, 5, &seq);

  printSequence(seq);
  printf("head: %d\n", head(seq));
  printf("tail: %d\n", tail(seq));
  printf("next: %d\n", next(seq, 2));
  printf("prev: %d\n", prev(seq, 2));
  removeElement(2, &seq);
  printSequence(seq);
  printf("finished: %d\n", finisched(5,seq));
}
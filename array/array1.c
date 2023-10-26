//
// Created by David Julian Belfiori on 26/10/23.
//
#include <stdio.h>
void fillArray(int *a, int size){

    int i,j;
    for(i=0;i<size;i++){
        a[i]=i;
    }

}
int main(int argc, const char * argv[]) {
    int a[10];
    fillArray(a, 10);
    int i;
    for(i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
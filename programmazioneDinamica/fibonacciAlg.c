
//fibonacci con programmazione dinamica
#include <stdio.h>
#include <stdlib.h>

//complessità O(2^n) perchè ogni volta che chiamo la funzione fibonacci,
// chiamo altre due funzioni fibonacci e così via
int fibonacci(int n){
    if (n==0 || n==1){
        return 1;
}else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
// complessità O(n) perchè ogni volta che chiamo la funzione fibonacci, lineare in tempo e in memoria
int fibonacci2(int n){
    int *array=malloc(sizeof(int)*(n+1));
    array[0]=1;
    array[1]=1;
    for(int i=2;i<=n;i++){
        array[i]=array[i-1]+array[i-2];
    }
    return array[n];
}

// complessità O(n) lineare in tempo e costante in memoria
int fibonacci3(int n){
    int a=1;
    int b=1;
    int c =1 ;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}


//
// Created by David on 11/12/2023.
//
#include <stdio.h>
//tempo di esecuzione O(2^n)
int coefficenteBinomiale(int n, int k){
    if(k==0 || k==n){
        return 1;
    }else{
        return coefficenteBinomiale(n-1,k-1)+coefficenteBinomiale(n-1,k);
    }
}

//tempo di esecuzione O(n*k)
int tartaglia(int n, int k){
    int matrice[n][k];
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            if(j==0 || j==i){
                matrice[i][j]=1;
            }else{
                matrice[i][j]=matrice[i-1][j-1]+matrice[i-1][j];
            }
        }
    }
    return matrice[n-1][k-1];
}

int main(){
    int n,k;
    printf("Inserisci n: ");
    scanf("%d",&n);
    printf("Inserisci k: ");
    scanf("%d",&k);
    printf("Il coefficente binomiale di %d su %d è: %d",n,k,coefficenteBinomiale(n,k));
    return 0;
}
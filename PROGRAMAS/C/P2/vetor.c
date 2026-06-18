#include <stdio.h>
#include <limits.h>

int main() {
    long int n;
    int i = 0;
    int min1 = INT_MAX, min2 = INT_MAX;
    scanf("%ld", &n);
    int vet[n];
    if(n<=100000)
    for(i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }
    int menor = vet[0];
    for(int i=1; i<n; i++){
    if(vet[i]<menor){
        menor=vet[i];
    }
}

    for(i=0; i<n; i++){
    if(vet[i]>menor)
    {
        if(vet[i]<min1){
         min2 = min1;
         min1 = vet[i];

        }else if(vet[i]<min2 && vet[i] != min1){
         min2 = vet[i];
     }
    }
   }
    if(min1 != INT_MAX && min2 != INT_MAX) {
        printf("%d\n%d\n", min1, min2);
    }
    return 0;
}
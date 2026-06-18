#include <stdio.h>
#include <limits.h>
int main()
{
int n, i, j, k;
j=0;
k=0;
scanf("%d", &n);
int impares[n];
int pares[n];
int vet[n];
for(i=0; i<n; i++){
scanf("%d", &vet[i]);
impares[i]=INT_MAX;
pares[i]=INT_MAX;
}
for(i=0; i<n; i++)
{
if(vet[i]%2==0){
pares[j]= i;
j++;
}
if(vet[i]%2!=0){
impares[k] = i;
k++;
}
}
for(i=0; i<n; i++){
    if(pares[i] < INT_MAX){
    printf("%d ", pares[i]);
}
}
printf("\n");
for(i=0; i<n; i++){
    if(impares[i] < INT_MAX){
    printf("%d ", impares[i]);
}
}
    return 0;
}
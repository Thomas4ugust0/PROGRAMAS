#include <stdio.h>
#include <limits.h>
int main(){
int n, a=0, b=0;
scanf("%d", &n);
int vet[n];
int pares[n];
int impares[n];
for(int i=0; i<n; i++){
scanf("%d", &vet[i]);
}

for(int i =0; i<n; i++){
if(vet[i]%2 != 0){
impares[a]=vet[i];
a++;
}else{
pares[b]=vet[i];
b++;
}
}
for(int i=0; i < b; i++){
printf("%d ", pares[i]);
}
printf("\n");
for(int i=0; i < a; i++){
printf("%d ", impares[i]);
}
    return 0;
}
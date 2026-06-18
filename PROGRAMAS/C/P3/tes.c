#include <stdio.h>
#include <limits.h>
int main(){
int n,a=0, min1, min2, min3;
scanf("%d", &n);
int vet[n];

for(int  i =0; i<n; i++){
scanf("%d", &a);
vet[i] = a;
}
min1 = INT_MAX;
min2 = INT_MAX;
min3 = INT_MAX;

for(int  i =0; i<n; i++){

if(vet[i]<min1){
min3 = min2;
min2 = min1;
min1 = vet[i];
}else if(vet[i]<min2 && vet[i] != min1){
min3 = min2; 
min2 = vet[i];
}else if(vet[i] <min3 && vet[i] != min1 && vet[i] != min2){
min3 = vet[i];
}
}
printf("%d\n %d\n", min2, min3);


    return 0;
}
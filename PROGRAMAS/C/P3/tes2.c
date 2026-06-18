#include <stdio.h>
#include <limits.h>


int main(){
int n, a, b;
scanf("%d", &n);
int vet[n];
a = INT_MAX;

for(int i=0; i<n; i++){
scanf("%d", &vet[i]);
if(vet[i]<a){
b = i;
a = vet[i];
}

}
printf("%d", b);


    return 0;
}
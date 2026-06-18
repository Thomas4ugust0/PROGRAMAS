#include <stdio.h>
int main()
{
int n, i, k;
long long int a, m;
a=0;
k=0;
scanf("%d", &n);
long long int vet[n], vet2[n];

for(i=0; i<n; i++){
scanf("%lli", &vet[i]);
}
for(i=0; i<n; i++){
a = vet[i] + a;
}
m = a/n;
for(i=0; i<n; i++){
if(vet[i] > m){
vet2[k] = vet[i];
k++;
}
}
if(k>0){
for(i=0; i<k; i++){
printf("%lli ", vet2[i]);
}
}else{
printf("0\n");
}
return 0;
}
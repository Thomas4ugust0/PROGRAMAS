#include <stdio.h>
int main()
{
int n, i, a;
a=0;
scanf("%d", &n);
int vet[n];
int vet2[n];
for(i=0; i<n; i++){
scanf("%d", &vet[i]);
}
for(i=0; i<n; i++){
scanf("%d", &vet2[i]);
}
for(i=0; i<n; i++){

if(vet[i] == vet2[i]){
a=a;
}
else{
a=1;
}
}
if(a==0){
printf("sim");
}else{
printf("nao");
}
    return 0;
}
#include <stdio.h>
int main()
{
int a, n, i, j, k;
j=0;
k=0;
scanf("%d", &n);
int vet[n];
for(i=0; i<n; i++){
scanf("%d", &vet[i]);
}
scanf("%d", &a);

for(i=0; i<n; i++)

{
if(vet[i]==a){
k++;
}
if(vet[i]!=a){
k=k;
}
}
if(k==0){
printf("nao pertence\n");
}else{
printf("pertence\n");
}
    return 0;
}
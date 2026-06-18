#include <stdio.h>
int main()
{
int i = 0, saida = 0;
long int n;
scanf("%ld", &n);
int vet[n];
for(int i=0; i<n; i++)
{
scanf("%d", &vet[i]);
}

int menor = vet[0];
for(i = 1; i<n; i++)
{
if(vet[i]<menor){
menor = vet[i];
}
}
for(i=0; i<n; i++){
if(vet[i]==menor){
saida = i;
}

}
printf("%d", saida);

 return 0;
}
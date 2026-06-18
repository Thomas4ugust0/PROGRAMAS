#include <stdio.h>
int main()
{
int n, i;
scanf("%d", &n);
int vet[n];
int vet2[n];
int res[n];
for(i=0; i<n; i++){
scanf("%d", &vet[i]);
res[i]=0;
}
for(i=0; i<n; i++){
scanf("%d", &vet2[i]);
}

for(i=0; i<n; i++)
{
res[i] = (vet[i] + vet2[i]);
}
for(i=0; i<n; i++)
{
printf("%d ", res[i]);
}
    return 0;
}
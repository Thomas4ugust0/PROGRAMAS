#include <stdio.h>
int main()
{
int a, b, c;
a=0, b=0;
scanf("%d", &c);
int matriz[c][c];


for(a=0; a<c; a++){
    for(b=0; b<c; b++){
    matriz[a][b] = c*a+b;
printf("%d ", matriz[a][b]);
}

printf("\n");
}


    return 0;
}
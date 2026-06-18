#include <stdio.h>

int contarEstrelas(int qtd, int abertura){
long long int a;
int b=0;
for(int i=0; i<qtd; i++){
scanf("%lld", &a);
if(abertura*a >= 40000000)
b++;
}
return b;
}

/*
int main(){
printf("%d", contarEstrelas(9,2967));
return 0;
}
*/
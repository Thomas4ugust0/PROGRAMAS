#include <stdio.h>
int pot(int base,int exp){
int res = 1;
    for(int i=0; i<exp; i++){
        res = base * res;
}
return res;
}

int encaixa(int a, int b){
int i=0, c;
c = b;
while(c>0){
    c = c/10;
    i++;
}
if(a%(pot(10, i)) == b){
    return 1;
}else{
    return 0;
}
}

int segmento(int a, int b){
int maior, menor, res = 0;

if(a>=b){

 maior = a;
 menor = b;
}else{
 maior = b;  
 menor = a;
}
int i=0, c;
c = menor;
while(c>0){
   c = c/10;
     i++;
}

    while(maior>=menor){
    if(encaixa(maior, menor)){
    return 1;
    }
    maior /=10;
    }
    return 0;
}


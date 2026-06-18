#include <stdio.h>
int main()
{
int a, b;
int g=0;
int e=0;
int raiz;
long long int c, d;

scanf("%d", &a);
for(b=1; b<=a; b++){
scanf("%lld", &d);

while(d>0){
    
    if(d>=4){
    raiz=1;
     while(raiz*raiz <= d){
     raiz++;
    }
     raiz= raiz - 1;
     
    for(c=2; c<=raiz; c++){
        if(d%c == 0){
        e=1+e;
    }
        if(d%c != 0){
        e=e;
    }
    }
    }
    if(d<4 && d>=2){
    e=e;
    }
    if(d == 1){
    e=1+e;

    }
g= g+1;
d= (d/10);
}
if(e == 0){
    printf("S\n");
}
if(e > 0){
    printf("N\n");
}

e=0;
g=0;
raiz=1;
}
return 0;
}

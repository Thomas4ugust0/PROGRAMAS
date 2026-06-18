#include <stdio.h>
int faz_conta_direito(int parcelas, char op){
int a, b;
a=0, b=0;
scanf("%d", &b);
for(int i=1; i<parcelas; i++){
if(op == '+'){
    scanf("%d", &a);
        b+=a;
}else{
    scanf("%d", &a);
        b-=a;
}
}
return b;
}
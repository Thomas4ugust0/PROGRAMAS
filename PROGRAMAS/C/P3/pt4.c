#include <stdio.h>
int lestr(char str[10]){
int i=0;
if(str[0] == 's' && str[1] == 'i' && str[2] == 'm' && str[3]== '\0'){
i=1;
}
return i;
}

int main(){
int a=0, b=0, j=0;
char str1[10];
while(scanf("%s", str1)!= EOF){
j++;
if(lestr(str1)){
a++;
}
if(j==10){
    if(a >= 2){
        b++;
    }
    
a=0;
j=0;
}
}


printf("%d\n", b);


return 0;
}
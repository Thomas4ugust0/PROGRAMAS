#include <stdio.h>

int main() {
    
int a, c, i, j;
char str[1001];
i=0, j=0, c=0;

scanf("%d", &a);
getchar();
for(c=0; c<a; c++){

fgets(str, 1001, stdin);
while(str[i] != '\0'){
if(str[i] == '\n'){
str[i] = '\0';
}
i++;
}

for(j=0; str[j] != '\0'; j++){

if(str[j] >= 'A' && str[j] <= 'M'){ 
str[j]= str[j] + 13;
}else if(str[j] > 'Z' || str[j] < 'A'){
str[j] = str[j];
}else{str[j]= str[j] - 13;}
}
for(i=0; i<j; i++){
printf("%c", str[i]);
}
printf("\n");
}
j=0;





return 0;
}
#include <stdio.h>
#include <limits.h>
int main(){
int j, k, maior;
maior = INT_MIN;
char str[1001];

scanf("%d", &k);

for(j=0; j<k; j++){
scanf("%s", str);
int i = 0;
for(i=0; str[i] != '\0'; i++){
}

if(i > maior){
maior = i;
}

}
printf("%d", maior);
    
return 0;
}   
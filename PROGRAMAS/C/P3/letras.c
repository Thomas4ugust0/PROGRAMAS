#include <Stdio.h>
int main(){
int num;
scanf("%d", &num);
char alfabeto[27];
for(int i=0; i<=26; i++){
alfabeto[i]='A'+i;
}
for(int i=0; i<num; i++){
printf("%c ", alfabeto[i]);
}
    return 0;
}


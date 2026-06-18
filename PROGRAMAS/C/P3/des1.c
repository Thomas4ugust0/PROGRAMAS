#include <stdio.h>
int main(){
    int m, n , q, a, b, c;
scanf("%d %d %d", &m , &n, &q);
char caderno1[100][81];
char caderno2[100][81];

for(int i=0; i<m; i++){
    scanf(" %[^\n]", caderno1[i]);
}

for(int i=0; i<n; i++){
    scanf(" %[^\n]", caderno2[i]);
}

for(int i=0; i<q; i++){
    scanf("%d %d %d", &a, &b, &c);
        if(a == 1){
            for(int j=c; caderno1[b-1][j] != '\0'; j++)
              printf("%c", caderno1[b-1][j]);
}else{
            for(int j=c; caderno2[b-1][j] != '\0'; j++)
              printf("%c", caderno2[b-1][j]);
}
printf("\n");
}


return 0;
}

#include <stdio.h>
int main(){

int a, b, c, i, j , k, n;
a=0, b=0, c=0; 

scanf("%d", &n);
int mat[n][n];


for(i=0; i<n; i++){//linhas
    for(j=0; j<n;j++){//colunas
        scanf("%d", &mat[i][j]);
    }
}
for(j=0; j< n; j++){
for(i=0; i< n; i++){//linhas

b = mat[i][j] + b;
}
if(b > a){

a = b;
c = j+1;
}
b = 0;
}

 if(a == 0) {
        printf("0\n");
    } else {
        printf("%d\n", c);
    }

return 0;
}

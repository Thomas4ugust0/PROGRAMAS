#include <stdio.h>

int main(){
int n,a,b=0, c=0, max=0;
scanf("%d", &n);
int mat[n][n];


for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        scanf("%d", &mat[i][j]);
    }
}

for(int j=0; j<n; j++){
    a=0;
    for(int i=0; i<n; i++){
        if(mat[i][j]==1){
            a++;
            c++;
        }
    }
    if(a>max){
        max=a;
        b=j;
    }
}
if(c>0){
printf("%d\n", b+1);
}else{
printf("0");
}

    return 0;
}
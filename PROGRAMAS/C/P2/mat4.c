#include <stdio.h>
int main(){
int a, b;

scanf("%d %d", &a, &b);
getchar();

int mat[a][b];

for(int i=0; i<a; i++){
    for(int j=0; j<b; j++){
        mat[i][j] = 0;
    }
}

char f;
int l;

while(scanf("%c%d", &f, &l) != EOF){
getchar();
mat[f-'A'][l-1] = 1;
}
printf(" ");
for(int j=0;j<b; j++){
printf(" %02d", j+1);
}
printf("\n");
for(int i = a - 1; i >= 0; i--){
    printf("%c", i + 'A');
    for(int j = 0; j< b; j++){
        if(mat[i][j] == 0){
            printf(" --");
        }else if(mat[i][j] == 1){
            printf(" XX");
        }
    }
printf("\n");
}
return 0;
}
#include <stdio.h>

int main(){
int n, i, a, b, c;
a=1, b=1;
scanf("%d", &n);
for(i=1; i<n; i++){
    a+=2; 
}

// 'a' é o valor da base
c=a/2;

for(int j = 1; j<=n; j++){
    for(int k = 1; k<=c; k++){
            printf(" ");
    }

    for(int l=1; l<=b; l++){
        printf("*");
    }


b+=2;
c-=1;
printf("\n");
}
return 0;
}
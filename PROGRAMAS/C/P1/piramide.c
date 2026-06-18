#include <stdio.h>
int main()
{

int a, b, c;
scanf("%d", &a);

for(b=1; b <= a; b++){

for (int c = 1; c <= b; c++)

if(b<10){
printf("0%d ", b );
}else{
printf("%d ", b );
}
printf("\n");
}

for (int i = 0; i <= a; i++) {

    for (int j = 1; j <= i; j++)

    if(j<10){
        printf("0%d ", j );
        }else{
        printf("%d ", j );
    }
    printf("\n");
}
return 0;
}
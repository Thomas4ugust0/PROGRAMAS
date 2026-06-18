#include <stdio.h>

void swap(int *a, int *b){
int *c;

c = *a;
*a = *b;
*b = c;

}
/*
int main(){

    int x = 100, y = 150;

    printf("Antes: x = %d, y = %d\n", x, y);
    swap(&x, &y);  // passamos os endereços de x e y
    printf("Depois: x = %d, y = %d\n", x, y);

    return 0;
}
*/
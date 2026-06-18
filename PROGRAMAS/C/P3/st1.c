#include <stdio.h>
#include <math.h>
struct tipoPonto {
int x;
int y;
};



double distancia(struct tipoPonto pa, struct tipoPonto pb){

int d1= pb.x - pa.x;
int d2= pb.y - pa.y;
return sqrt(d1*d1+d2*d2);

}
/*
int main(){
    struct tipoPonto pa, pb;
//para pa(1,2) e pb (5,5)
    pa.x = 1;
    pa.y = 2;
    pb.x = 5;
    pb.y = 5;

    double d = distancia(pa, pb);
    printf("Distancia entre os pontos: %.6lf\n", d);

    return 0;
}
    
*/
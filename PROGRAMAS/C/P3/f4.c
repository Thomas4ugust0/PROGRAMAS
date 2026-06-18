double pot(int base, int exp){
    double res = 1.0;
        for(int i=0; i<exp; i++){ // ex: para 3 ^ 2 == 1*3 + 3*2 == 9 e para 3^0 == 1
            res = res* base;
}
return res;
}
double fat(int num){
    double res = 1.0;
        for(int i=1; i <= num; i++){ // para 4! 1*1 1*2 2*3 6*4 == 24
          res = res * i;
}
return res;
}

double exp_natural ( int x , int n ){
    double b = 0;
        for(int a=0; a<=n; a++){
          b += pot(x, a)/fat(a);
}
return b;
}

/*
}
int main(){ 
printf("%lf", exp_natural(3,4));
return 0;
}
*/
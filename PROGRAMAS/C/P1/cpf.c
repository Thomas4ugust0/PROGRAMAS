    #include <stdio.h>
    int main()
    {
    unsigned long long int cpf0, cpf;
    int cod2, cod1,a, b, c, d, e, f, g, h, i, I, j, k, l;
    scanf("%llu", &cpf0);

    cpf=cpf0;
    cod2=cpf%10;
    cpf=(cpf/10);

    cod1=cpf%10;
    cpf=(cpf/10);

    a=cpf%10;
    cpf=(cpf/10);
    a=(a*2);

    b=cpf%10;
    cpf=(cpf/10);
    b=(b*3);

    c=cpf%10;
    cpf=(cpf/10);
    c=(c*4);

    d=cpf%10;
    cpf=(cpf/10);
    d=(d*5);

    e=cpf%10;
    cpf=(cpf/10);
    e=(e*6);

    f=cpf%10;
    cpf=(cpf/10);
    f=(f*7);

    g=cpf%10;
    cpf=(cpf/10);
    g=(g*8);

    h=cpf%10;
    cpf=(cpf/10);
    h=(h*9);

    i=cpf%10;
    cpf=(cpf/10);
    i=(i*10);

    j=(a+b+c+d+e+f+g+h+i); // somou para o primeiro cod ver

    k= j%11;
    l= 11 - k;

    if(l>9)
    l=0;

    if(l==cod1)
    {

        cod2=cpf0%10;
        cpf0=(cpf0/10);

        cod1=cpf0%10;
        cpf0=(cpf0/10);
        cod1=(cod1*2);

        a=cpf0%10;
        cpf0=(cpf0/10);
        a=(a*3);
        
        b=cpf0%10;
        cpf0=(cpf0/10);
        b=(b*4);
        
        c=cpf0%10;
        cpf0=(cpf0/10);
        c=(c*5);
        
        d=cpf0%10;
        cpf0=(cpf0/10);
        d=(d*6);
        
        e=cpf0%10;
        cpf0=(cpf0/10);
        e=(e*7);
        
        f=cpf0%10;
        cpf0=(cpf0/10);
        f=(f*8);
        
        g=cpf0%10;
        cpf0=(cpf0/10);
        g=(g*9);
        
        h=cpf0%10;
        cpf0=(cpf0/10);
        h=(h*10);
        
        i=cpf0%10;
        cpf0=(cpf0/10);
        i=(i*11);
        
        j=(a+b+c+d+e+f+g+h+i+cod1); // somou para o segundo cod ver

        k= j%11;
        I= 11 - k;
        
    if(I>9)
    I=0;

    if(I==cod2)
            {
                printf("valido\n");
            }
            else        
            {
                printf("invalido\n");
            }
    }
    else
    {
    printf("invalido\n");
    }



    return 0;
    }


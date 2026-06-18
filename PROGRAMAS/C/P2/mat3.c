    #include <stdio.h>
    int main()
    {
    unsigned char str[1000][81];
    unsigned char str2[1000][81]; //quantidade e tamanho 
    int a,b,c,d,e,f,i,j,l,k;
    f=0, j=0, e=0;


    scanf("%d %d", &a, &b);
    getchar();
    k=0, d=0, e=0, l=0;

//seq S:
    for(i=0; i<a; i++){
    scanf("%s", str[i]);
    }
//seq P:
    for(i=0; i<b; i++){
    scanf("%s", str2[i]);
    }
//str[i][j]; i linhas com j caracteres

 for (i = 0; i < b; i++){       // Para cada palavra de P
    for (j = 0; j < a; j++) {   // Verifica se existe em S
            
    l = 1;

            for (k = 0; k < 81; k++) {
                if (str2[i][k] != str[j][k]) {
                    l = 0;
                }
                // se os dois chegaram ao fim ao mesmo tempo, pode sair do loop
                if (str2[i][k] == '\0' && str[j][k] == '\0') {
                    k = 81; // força saída
                }
            }

            if (l == 1 && e == 0) {
                // palavra encontrada
                e = 1;
            }
        }
    }

printf("%d\n", e);
return 0;

}
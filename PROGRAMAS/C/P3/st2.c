#include <stdio.h>
struct tipoFiliacao {
char nome[80];
char nomeMae[80];
char nomePai[80];
};

struct tipoFiliacao separaLinhaCSV(char linha[240]){
    struct tipoFiliacao f;
int i=0;
int a;


while(linha[i] != ',' && linha[i] != '\0'){
        i++;
        }
            for(int j=0; j<i; j++){
             f.nome[j] = linha[j];
    }f.nome[i]='\0';
    if(linha[i] == ',') i++;
    a=i;
    int k=0;
while(linha[i] != ',' && linha[i] != '\0'){
        i++;
        }
            for(int j=a; j<i; j++){
             f.nomeMae[k++] = linha[j];
    }f.nomeMae[k]='\0';
    if(linha[i] == ',') i++;
    a=i;
    k=0;
while(linha[i] != ',' && linha[i] != '\0'){
        i++;
        }
            for(int j=a; j<i; j++){
             f.nomePai[k++] = linha[j];
    }f.nomePai[k]='\0';

return f;
}

/*
int main() {
    // Testes com diferentes casos
    char linha1[] = "Pedro da Silva Pereira,Adriana da Silva,Guilherme Pereira";
    char linha2[] = "Luiz Coelho,,Tomas Coelho";

    struct tipoFiliacao f1 = separaLinhaCSV(linha1);
    struct tipoFiliacao f2 = separaLinhaCSV(linha2);

    printf("----- Pessoa 1 -----\n");
    printf("Nome: %s\n", f1.nome);
    printf("Mae: %s\n", f1.nomeMae);
    printf("Pai: %s\n", f1.nomePai);

    printf("\n----- Pessoa 2 -----\n");
    printf("Nome: %s\n", f2.nome);
    printf("Mae: %s\n", f2.nomeMae);
    printf("Pai: %s\n", f2.nomePai);

    return 0;
}
*/
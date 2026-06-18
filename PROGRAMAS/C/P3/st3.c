#include <stdio.h>
struct tipoData{
int dia;
int mes;
int ano;

};


struct tipoPessoa{
char nome[80];
struct tipoData dtNascimento;


};

struct tipoPessoa separaInfo(char nome[80], int dt_nascimento){
int i=0;

struct tipoPessoa p;
while(nome[i] != '\0'){
p.nome[i] = nome[i];
i++;
}p.nome[i] = '\0';
//para 20001201
p.dtNascimento.ano = dt_nascimento/10000;//2000
p.dtNascimento.mes = (dt_nascimento%10000)/100;//1201/100 = 12
p.dtNascimento.dia = dt_nascimento%100;// = 1 (sera ajustado para o formato correto (01) na main)

return p;
}
/*
int main(){
struct tipoPessoa pessoa = separaInfo("Fernando", 20001201);

    printf("Nome: %s\n", pessoa.nome);
    printf("Nascimento: %02d/%02d/%04d\n",
        pessoa.dtNascimento.dia,
        pessoa.dtNascimento.mes,
        pessoa.dtNascimento.ano
    );

    return 0;
}
*/
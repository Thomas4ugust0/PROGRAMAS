#include <stdio.h>
#include <string.h>
struct tipoMusica{
char nome[80];
int ano;
};

struct tipoBanda{
char nome[80];
int qtd;
struct tipoMusica musicas[100];


};
void pesquisarNomeMusica(char pesquisa[80], struct tipoBanda bandas[50], int n){
    int i=0, k=0, a=0;
for(i=0; i<n; i++){
    for(k=0; k<bandas[i].qtd; k++){
        if(strcmp(pesquisa, bandas[i].musicas[k].nome) == 0){
            printf("%s : ano %d\n", bandas[i].nome, bandas[i].musicas[k].ano);
            a++;
            }
        }
    }
if(a==0){printf("Musica nao cadastrada\n");}
}
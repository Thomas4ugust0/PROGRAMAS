#include <stdio.h>

struct tipoLogradouro {
    char tipo[80];
    char nome[80];
    char complemento[80];
};

void criaLinhaCSV(struct tipoLogradouro info, char linha[240]) {
    int i = 0, j = 0, k;

    // Copiar tipo
    while (info.tipo[i] != '\0') {
        linha[i] = info.tipo[i];
        i++;
    }

    linha[i++] = ';';

    // Copiar nome
    j = 0;
    while (info.nome[j] != '\0') {
        linha[i++] = info.nome[j++];
    }

    linha[i++] = ';';

    // Copiar complemento
    j = 0;
    while (info.complemento[j] != '\0') {
        linha[i++] = info.complemento[j++];
    }

    linha[i] = '\0'; 
}
/*

int main() {
    struct tipoLogradouro exemplo = {
        "Rua",
        "Afonso Camargo",
        "Loja B"
    };

    char linha[240];
    criaLinhaCSV(exemplo, linha);

    printf("%s\n", linha);  // Saída: Rua;Afonso Camargo;Loja B

    return 0;
}
*/
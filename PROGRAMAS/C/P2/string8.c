#include <stdio.h>

int main() {
    char frase[10001];
    char antiga[41];
    char nova[41];
    char resultado[20000];

    int i = 0;
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {
        frase[i++] = c;
    }
    frase[i] = '\0';

    // le a palavra a ser substituida
    i = 0;
    while ((c = getchar()) != '\n' && c != EOF) {
        antiga[i++] = c;
    }
    antiga[i] = '\0';

    // leitura da palavra nova
    i = 0;
    while ((c = getchar()) != '\n' && c != EOF) {
        nova[i++] = c;
    }
    nova[i] = '\0';

    // tamanho da palavra antiga e nova
    int tam_antiga = 0;
    while (antiga[tam_antiga] != '\0') {
        tam_antiga++;
    }

    int tam_nova = 0;
    while (nova[tam_nova] != '\0') {
        tam_nova++;
    }

    // substituição
    i = 0;
    int j = 0; // posição na frase original
    int k = 0; // posição no resultado

    while (frase[j] != '\0') {
        int igual = 1;
        int l = 0;

        while (l < tam_antiga && frase[j + l] != '\0') {
            if (frase[j + l] != antiga[l]) {
                igual = 0;
            }
            l++;
        }

        if (igual && l == tam_antiga) {
            int m = 0;
            while (m < tam_nova) {
                resultado[k++] = nova[m++];
            }
            j += tam_antiga;
        } else {
            resultado[k++] = frase[j++];
        }
    }

    resultado[k] = '\0';
    i = 0;
    while (resultado[i] != '\0') {
        putchar(resultado[i]);
        i++;
    }
    putchar('\n');

    return 0;
}

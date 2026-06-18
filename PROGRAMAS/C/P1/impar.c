#include <stdio.h>

int main() {
    int a, b, c; // Jogo A vs B
    int d, i, j; // Jogo C vs D
    int p, l, m; // Final

    char vencedor1, vencedor2, campeao;

    // Leitura das partidas
    scanf("%d %d %d", &a, &b, &c); // A vs B
    scanf("%d %d %d", &d, &i, &j); // C vs D
    scanf("%d %d %d", &p, &l, &m); // Final

    // Partida A vs B
    int soma1 = b + c;
    if ((soma1 % 2 == 0 && a == 0) || (soma1 % 2 != 0 && a == 1)) {
        vencedor1 = 'A';
    } else {
        vencedor1 = 'B';
    }

    // Partida C vs D
    int soma2 = i + j;
    if ((soma2 % 2 == 0 && d == 0) || (soma2 % 2 != 0 && d == 1)) {
        vencedor2 = 'C';
    } else {
        vencedor2 = 'D';
    }

    // Partida Final
    int somaFinal = l + m;
    if ((somaFinal % 2 == 0 && p == 0) || (somaFinal % 2 != 0 && p == 1)) {
        campeao = vencedor1;
    } else {
        campeao = vencedor2;
    }

    printf("%c\n", campeao);

    return 0;
}

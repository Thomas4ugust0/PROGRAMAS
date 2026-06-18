#include <stdio.h>

int main() {
    int N, a, b, c, d, e, f, g, h, i, k;
    int mat[15][15], cont_col[15], mudou;

    scanf("%d", &N);
    for (a = 0; a < N; a++)
        for (b = 0; b < N; b++)
            scanf("%d", &mat[a][b]);

    mudou = 1;
    while (mudou) {
        mudou = 0;

        // Passo 1: Zerar linhas que possuem apenas 1's
        for (a = 0; a < N; a++) {
            c = 1;
            for (b = 0; b < N; b++)
                if (mat[a][b] == 0) c = 0;
            if (c == 1) {
                for (b = 0; b < N; b++)
                    mat[a][b] = 0;
                mudou = 1;
            }
        }

        // Passo 2: Imprimir a matriz
        for (a = 0; a < N; a++) {
            for (b = 0; b < N; b++) {
                printf("%d", mat[a][b]);
                if (b < N-1) printf(" ");
            }
            printf("\n");
        }
        printf("\n");

        // Passo 3: Contar 1's por coluna
        for (b = 0; b < N; b++) {
            cont_col[b] = 0;
            for (a = 0; a < N; a++)
                if (mat[a][b] == 1) cont_col[b]++;
        }

        // Passo 3: Derrubar os 1's nas colunas
        for (a = 0; a < N; a++)
            for (b = 0; b < N; b++)
                mat[a][b] = 0;
        
        for (b = 0; b < N; b++) {
            c = N - 1;
            for (a = 0; a < cont_col[b]; a++) {
                mat[c][b] = 1;
                c--;
            }
        }

        // Passo 4: Imprimir a matriz
        for (a = 0; a < N; a++) {
            for (b = 0; b < N; b++) {
                printf("%d", mat[a][b]);
                if (b < N-1) printf(" ");
            }
            printf("\n");
        }

        // Verificar se ainda existem linhas com todos 1's
        mudou = 0;
        for (a = 0; a < N; a++) {
            c = 1;
            for (b = 0; b < N; b++)
                if (mat[a][b] == 0) c = 0;
            if (c == 1) mudou = 1;
        }
        if (mudou) printf("\n");
    }

    return 0;
}

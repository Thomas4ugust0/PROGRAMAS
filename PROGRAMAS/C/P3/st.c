#include <stdio.h>

struct aluno {
    char nome[100];
    int matricula;
    float notas[3];
};

int main()
{
    struct aluno alunos[10], meu_aluno;

    scanf("%s", alunos[0].nome);
    scanf("%f", &meu_aluno.notas[0]);
    scanf("%f", &alunos[0].notas[0]);
    return 0;
}

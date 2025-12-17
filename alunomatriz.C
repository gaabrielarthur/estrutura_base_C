#include <stdio.h>
#include <stdlib.h>
/*
leia as notas de 4 alunos em 3 provas (matriz 4x3).

Calcule a média de cada aluno e exiba ao final.

*/
int main()
{

    float nota[4][3]; // 3 linhas e 4 colunas !
    float i, j;       // armazena as linhas e colunas em cada letra atraves do vetor
    float soma;
    float media = 0;
    // utilizar for como estrutura de repetição para armazenar os vetores
    for (int i = 0; i < 4; i++)
    {
        printf("\nALUNO - %d ", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("\nNOTA ALUNO %d: ", i + 1);
            scanf("%f", &nota[i][j]);
            media += nota[i][j];
            media /= 3;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        printf("\n________ALUNO - %d_______\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("\nALUNO %d: %.2f", i + 1, nota[i][j]);
            printf("\nMEDIA ALUNO %d: %.2f", i + 1, media);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/*
Leia uma matriz 3x3 de inteiros digitados pelo usuário.
*/

int main()
{
    int matriz[3][3];
    int i, j;

    printf("\nDIGITE OS VALORES DA MATRIZ\n");
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nELEMENTOS[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n_____________MATRIZ DIGITADA______________\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
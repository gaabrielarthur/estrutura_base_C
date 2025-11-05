#include <stdio.h>
#include <stdlib.h>
int main()
/*
Leia 5 números digitados pelo usuário e calcule a soma usando
 um vetor.
*/
{
    int numeros[5] = {0};
    int cont;
    int soma;
    int resultado;
    for (int i = 0; i < 5 ; i++)
    {
        printf("Digite 5 numeros:");
        scanf("%d", &numeros[i]);
        soma += numeros[i];
        cont++;

    } printf("soma eh: %d" , soma);
    return 0;
}
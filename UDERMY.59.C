#include <stdio.h>
#include <stdlib.h>
/*Crie um algoritmo que leia 3 valores para  um vetor de 3 posiçoes e depois
calcule a media dos valores usando o vetor*/
int main()
{
    float vetor[3];

    printf("Digite um numero: ");
    scanf("%f", &vetor[0]);
    printf("Digite um numero: ");
    scanf("%f", &vetor[1]);
    printf("digite um numero: ");
    scanf("%f", &vetor[2]);

    printf("Vetor posicao [0]: %.2f\n", vetor[0]);

    printf("Vetor posicao [1]: %.2f\n", vetor[1]);

    printf("Vetor posicao [2]: %.2f\n", vetor[2]);

    printf("\nA media dos valores eh: %.2f", (vetor[0] + vetor[1] + vetor[2] / 3));

    return 0;
}
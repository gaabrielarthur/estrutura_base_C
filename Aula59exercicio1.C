#include <stdio.h>
int main()
{

    float vetor[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Digite um valor: ");
        scanf("%f", &vetor[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n vetor[%d]: %.2f", i, vetor[i]);
    }
    printf("\n\n A MEDIA EH: %2.f", (vetor[0] + vetor[1] + vetor[2]) / 3);
}
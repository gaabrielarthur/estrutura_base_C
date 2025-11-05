#include <stdio.h>
#include <stdlib.h>
int main()
{
    float vetor[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Digite um numero:");
        scanf("%f", &vetor[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\nvetor[%d] = %.2f", i, vetor[i]);
    }
    printf("\n\n media dos valores eh: %.2f", (vetor[0] + vetor[1] + vetor[2]) / 3);
}
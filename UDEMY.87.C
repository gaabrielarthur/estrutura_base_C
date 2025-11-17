#include <stdio.h>
#include <stdlib.h>

void soma(int primeirovalor, int segundovalor)
{
    printf("\na soma de %d + %d = %d", primeirovalor, segundovalor, primeirovalor + segundovalor);
}

int main()
{
    int numero1;
    int numero2;
    printf("Digite um numero: ");
    scanf("%d", &numero1);
    printf("Digite segund numero:");
    scanf("%d", &numero2);

    soma(numero1, numero2);

    return 0;
}
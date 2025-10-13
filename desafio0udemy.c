#include <stdio.h>
#include <stdlib.h>
int main()
{
/*
leia dois numeros e imprima na tela se for maior que dez ou menor que dez
*/
    int numero1, numero2;
    int soma;
    printf("Digite um numero: ");
    scanf("%d", &numero1);
    printf("Digite outro numero ");
    scanf("%d", &numero2);
    soma = numero1 + numero2;

    if (soma >= 10)
    {
        printf("A soma e maior que dez, soma= %d" , soma);
    }
    else
    {
        printf("soma menor que dez, soma= %d ", soma);
    }
    return 0;
}
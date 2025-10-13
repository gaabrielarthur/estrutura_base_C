#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* FAÇA UM PROGRAMA QUE LEIA DOIS NUMEROS INTEIROS E IMPRIMA NA TELA
    QUAL É O MAIOR DELES OU SE SÃO IGUAIS
    */

    int a, b;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("o valor da letra A e maior que o da B");
    }
    else if (a < b)
    {
        printf("o valor da letra B e maior que o da A");
    }
    else
    {
        printf("As duas letras sao iguais");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{

    /*
    FAÇA UM PROGRAMA QUE LEIA UM NUMERO INTEIRO E INFORME SE ELE É PAR OU IMPAR
    */
    int a;
    printf("Digite um numero: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("este numero e par");
    }
    else
    {
        printf("este numero e impar");
    }
    return 0;
}
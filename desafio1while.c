#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*
        FAÇA UM PROGRAMA QUE IMPRIMA OS NÚMEROS PARES DE 10 ATÉ UM NUMERO INFORMADO PELO USUÁRIO
    */
    int i = 0;
    int maximo;
    printf("Digite um valor maximo: ");
    scanf("%d", &maximo); 

    while (i <= maximo)
    {

        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
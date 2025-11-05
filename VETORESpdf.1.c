#include <stdio.h>
#include <stdlib.h>
/*Declare um vetor de inteiros com 10 elementos, preencha com
valores de 1 a 10 e imprima todos.
int main()*/
int main()
{
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
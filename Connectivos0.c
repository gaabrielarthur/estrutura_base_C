#include <stdio.h>
#include <stdlib.h>
int main()
/*
FACA UM PROGRAMA QUE LEIA 2 NUMEROS INTEIROS E IMPRIMA NA TELA SE ALGUM DELES FOR MAIOR QUE 10 
*/
{

    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);
    if (a > 10 || b > 10)
    {
        printf("ESSES NUMEROS SAO MAIORES QUE 10");
    }
    else
    {
        printf("ESSES NUMEROS NAO SAO MAIORES QUE 10");
    }
    return 0;
}
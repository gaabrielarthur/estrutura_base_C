#include <stdio.h>
#include <stdlib.h>
/*
FAÇA UM PROGRAMA DE CALCULADORA, QUE LEIA DOIS VALORES E MOSTRE AS OPCOES DE SOMAR OU SUBTRAIR.
APÓS SELECIONAR A OPCAO, O RESULTADO SERA MOSTRADO NA TELA BASEADO EM UM SWITCH.
*/
int main()
{
    int a, b, opcao, resultado;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    printf("_________________________");
    printf("    MENU     \n");
    printf(" opcao - 1   \n");
    printf(" ocpao  - 2  \n");

    scanf("%d" , &opcao);

    switch (opcao)
    {
    case 1:
        resultado = a + b;
        break;
    case 2:
        resultado = a - b;
        break;
    }
    printf("O  resultado : %d", resultado);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
float calcular_media(float n1, float n2)
{
    return (n1 + n2) / 2 ;
}

int main()
{
    float a = 0;
    float b = 0;
    int resultado;
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    resultado = calcular_media(int a, int b);
    printf("MEDIA: %.2f", resultado);
}
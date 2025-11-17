#include <stdio.h>
#include <stdlib.h>

// funções
void mostrarSucessor(int numero)
{
    printf("\n sucessor de %d eh: %d", numero, numero + 1);
}

void mostrarAntecessor(int numero)
{
    printf("\n Antecessor de %d eh: %d", numero, numero - 1);
}

int main()
{
    int a;
// instrução 
    printf("Digite um valor: ");
    scanf("%d", &a);
// chamaa função 
    mostrarSucessor(a);

    mostrarAntecessor(a);
    return 0;
}
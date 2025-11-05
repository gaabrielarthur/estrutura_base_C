#include <stdio.h>
#include <stdlib.h>
int contador = 0;

void incrementa()
{
    contador++;
}

int main()
{
    incrementa();
    printf("Contador: %d\n", contador);
    return 0;
}

// Variáveis globais existem em todo o programa e permanecem na memória até o fim da execução.
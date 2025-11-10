#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 2

struct registro
{
    char logradouro[40];
    unsigned numero;
};

int main()
{

    struct registro endereco[TAM];
    for (int i = 0; i < TAM; i++)
    {
        printf("DIGITE UM NUMERO: ");
        scanf("%u", &endereco[i].numero);
        printf("O logradouro digitado foi: %u\n", endereco[i].numero);
    }
}
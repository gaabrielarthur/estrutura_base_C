#include <stdio.h>
#include <stdlib.h>

void saudacao_personalizada(char nome[])
{
    printf("hello, %s\n", nome);
}

int main()
{
    saudacao_personalizada("Maria");
    saudacao_personalizada("Joao");
    return 0;
}
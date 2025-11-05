#include <stdio.h>

// Função principal do programa
int main()
{

    // Variáveis
    char palavra[10];

    // Instrução
    printf("Digite uma palavra");

    // Limpa o Buffer
    setbuf(stdin, 0);

    // Lê a String
    fgets(palavra, 255, stdin);

    // Limpa as casas não utilizadas
    palavra[strlen(palavra) - 1] = '\0';

    // Imprime na tela
    printf("%s", palavra);

    // Pausa o programa após executar
    system("pause");

//definindo strings de varias formas
    char palavra1[] = "boi";
    char palavra2[5] = "bala";
    char palavra3[] = {'a', 'b', 'c', 'd', '\0'};
    char palavra4[5] = {'f', 'o', 'n', '\0'};

    // imprimindo string(sem espaços)
    printf("%s\n", palavra1);

    // lendo uma string(com ESPAÇO)
    char fruta[255];
    fflush(stdin);
    prinft("Digite o nome de uma fruta: ");
    fgets(fruta, sizeof(fruta), stdin);

    //imprimindo a fruta lida
    printf("Fruta lida:");
    puts(fruta);

    return 0;
}

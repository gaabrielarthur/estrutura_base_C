#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
b) Faça um programa contendo os serviços que uma oficina mecânica pode realizar:
 Ordem de serviço (número da OS, data, valor, serviço realizado, cliente). 
 Leia as informações sobre várias OS e determine, ao final, a média dos valores,
 o nome do cliente que realizou o serviço mais caro, juntamente com a descrição desse serviço e sua data de realização.
*/
struct OrdemServico {
    int numero;
    char data[11];
    float valor;
    char servico[50];
    char cliente[30];
};

int main() {
    int n, i, indice_mais_caro = 0;
    float soma = 0, media;

    printf("Digite o numero de ordens de servico: ");
    scanf("%d", &n);

    struct OrdemServico os[n];

    for (i = 0; i < n; i++) {
        printf("\nOrdem de servico %d\n", i + 1);
        printf("Numero: ");
        scanf("%d", &os[i].numero);
        printf("Data (dd/mm/aaaa): ");
        scanf("%s", os[i].data);
        printf("Valor: ");
        scanf("%f", &os[i].valor);
        printf("Servico realizado: ");
        scanf(" %[^\n]", os[i].servico);
        printf("Cliente: ");
        scanf(" %[^\n]", os[i].cliente);
        soma += os[i].valor;
        if (os[i].valor > os[indice_mais_caro].valor)
            indice_mais_caro = i;
    }

    media = soma / n;

    printf("\nMedia dos valores: %.2f\n", media);
    printf("\nServico mais caro:\n");
    printf("Cliente: %s\n", os[indice_mais_caro].cliente);
    printf("Servico: %s\n", os[indice_mais_caro].servico);
    printf("Data: %s\n", os[indice_mais_caro].data);
    printf("Valor: %.2f\n", os[indice_mais_caro].valor);

    return 0;
}
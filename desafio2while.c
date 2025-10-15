#include <stdio.h>
#include <stdlib.h>
    int main() {
    int num1, num2;
/*
FAÇA UM PROGRAMA QUE MOSTRE A SOMA DE DOIS NUMEROS ENTRE 0 E 1000
 APENAS QUANDO OS DOIS NUMEROS DIGITADOS ESTIVEREM NO INTERVALO.
*/
    printf("Digite dois numeros entre 0 e 1000:\n");

    // Lê os números e repete enquanto algum estiver fora do intervalo
    while (1) {
        printf("Primeiro numero: ");
        scanf("%d", &num1);

        printf("Segundo numero: ");
        scanf("%d", &num2);

        if ((num1 >= 0 && num1 <= 1000) && (num2 >= 0 && num2 <= 1000)) {
            int soma = num1 + num2;
            printf("A soma dos dois numeros e: %d\n", soma);
            break; // Sai do laço se os números forem válidos
        } else {
            printf("Erro! Os numeros devem estar entre 5 e 10. Tente novamente.\n\n");
        }
    }

    return 0;
}

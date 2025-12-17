#include<stdio.h>
#include<stdlib.h>
int main(){

    int matriz[3][3];
    int i, j;
    int soma = 0;




for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
    printf("Digite um numero: ");//
    scanf("%d" , &matriz[i][j]);//Armazena os numeros [i armazena as linhas] [j armazena as colunas]
    soma += matriz[i][j]; // responsalvel pela soma de todos elementos digitados 
          }
}

    printf("\n____________MATRIZ______________\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d" , matriz[i][j]);
        }
        printf("\n");//espaço das linhas [i]
    }
     
            printf("\n\nA soma de todos eh: %d", soma); // saida da soma de todos elementos

    return 0;
}
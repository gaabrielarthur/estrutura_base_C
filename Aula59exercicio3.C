#include<stdio.h>
int main(){
    int tamanho;
    printf("Qual sera o tamanho do vetor: ");
    scanf("%d", &tamanho);

    float vetor[tamanho], soma;
 
    for(int i = 0; i < tamanho; i++){
        printf("Digite um numero:");
        scanf("%f" , &vetor[i]);

        soma = soma + vetor[i];
    }

    for(int i = 0; i < tamanho; i++){
        printf("\nvetor[%d] = %2f", i,vetor[i]);
    }

    printf("\nA media eh: %.2f" , soma/tamanho);
}
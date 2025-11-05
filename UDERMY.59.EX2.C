#include<stdio.h>
#include<stdlib.h>
int main(){

    float vetor[3];
    for(int i = 0; i < 3; i++){
        printf("Digite um valor: ");
        scanf("%f" , &vetor[i]);
    } 
    for(int i = 0; i < 3; i++){
        printf("\nVetor[%d] = %.2f" , i, vetor[i]);

    }

    printf("\nA media dos valores eh: %.2f" , (vetor[0]+vetor[1]+vetor[2])/3);
}
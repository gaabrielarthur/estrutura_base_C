#include<stdio.h>
#include<stdlib.h>
int main(){
    for(int i = 0; i < 5; i++){
        printf("%d\n" , i);
    }
    // printf("%d\n", i);   // ERRO: i só existe no laço
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
 
int somar(int a, int b){
    return a + b;
}
int main(){
    int resultado = somar(5, 3);
    printf("Resultado: %d\n",resultado);
    return 0;
}
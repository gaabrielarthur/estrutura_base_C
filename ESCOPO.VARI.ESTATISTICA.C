#include<stdio.h>
#include<stdlib.h>
void contadorStatic(){

    static int contador = 0;

    contador++;
    printf("Contador: %d\n", contador);

}
int main(){
    contadorStatic();
    contadorStatic();
    contadorStatic();
    contadorStatic();
    contadorStatic();
    contadorStatic();
    contadorStatic();
    contadorStatic();
    contadorStatic();
    contadorStatic();
    return 0;
}

//Usar static dentro de funções mantém o valor de um chamada para outra.

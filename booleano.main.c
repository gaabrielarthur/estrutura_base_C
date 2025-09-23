#include <stdio.h>
#include <stdlib.h>
int main(void){
int compraaprovada = 1; 
int clientebloqueado = 0;
printf ("compra aprovada: %d\n" , compraaprovada);
printf ("cliente bloqueado: %d\n" , clientebloqueado);

int quantidadeestoque = 10;
int quatidadepedidocompra = 15;
int estoquesuficiente = quantidadeestoque >= quatidadepedidocompra;
printf("Estoque suficiente: %d\n" , estoquesuficiente);
return 0; 
}
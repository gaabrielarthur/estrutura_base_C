#include <stdio.h>
#include <stdlib.h>

int main() {

    //LENDO VALOR INTEIRO
   int a = 50; 
    printf("\nO valor de A e : %d" , a);
    scanf("a"); 
    
//LENDO VALOR QUEBRADO
      float b = 5.5; 
    printf("O valor de A e =  %f \n" , b);
    scanf("b" );
    printf("O valor de b mudou para %f" , b );
    
    //lendo letras
 char letra = 't'; 
    printf("O valor de A e =  %c \n" , letra);
    fflush(stdin);
    scanf("letra" );
    printf("O valor de b mudou para %c" , letra );
return 0;
}
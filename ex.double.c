#include <stdio.h>
#include <stdlib.h>

int main(void) 
{ //numero decimais (precisão maior)
// utiliza quando te duas casas decimais ou mais
double a = 7.55;
double b = 8.45;
double media = (double) a + b /2;
printf("media: %lf\n" , media);
return 0;
}
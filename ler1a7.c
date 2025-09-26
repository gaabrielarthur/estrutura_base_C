#include<stdio.h>
int main (){

int dia = 5;
switch (dia){
case 2:
printf("\nSegunda ");
break;
case 3:
printf("\nTerca");
break;
case 4:
printf("\nQuarta");
break;
case 5:
printf("\nQuinta");
break;
case 6:
printf("\nSexta");
break;
case 7:
printf("\nSabado");
break;
default:
printf("Dia invalido");
break;
printf("%d" , dia);
}
return 0;

}
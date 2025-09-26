#include <stdio.h>
#include <stdlib.h>
int main (){
    int totalDownloads = 10;


    int novototaldowloads = ++totalDownloads;
    printf("Total de downloads : %d\n" , totalDownloads);
    printf("Novo total de downloads: %d\n" , novototaldowloads);
    return 0;

    // x++ (pos-incremento) usa o valor antigo e depois incrementa. 
    // ++x (pre-incremento) incrementa e depois usa o valor.
}
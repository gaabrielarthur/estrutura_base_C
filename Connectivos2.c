#include <stdio.h>
#include <stdlib.h>
int main()
{

    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);
    if ((a % 2 == 0) || (b % 2 == 0))
    {
        printf( "Algum valor foi par" );
    }
    else
    {
       printf("Nenhum valor é par");
    }
    return 0; 
}
#include <stdio.h>
#include <stdlib.h>
int main()
{

    int a, b, c;

    scanf("%d %d %d", &a, &b , &c);
    if (a > 10 && b > 10 && c > 10)
    {
        printf("OS NUMEROS %d %d %d sao maiores que 10", a, b, c);
    }
    else
    {
        printf(" ESSES NUMEROS  NAO sao maiores que 10");
    }

    return 0;
}
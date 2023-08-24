#include <stdio.h>

int main()
{
    int x;
    puts("Insira um valor inteiro: ");
    scanf("%d", &x);
    printf("Valor em hexadecimal: %x \n", x); //%x coloca o valor em hexa
    printf("Valor em octal: %o \n", x); //%o coloca o valor em octal

    return 0;
}

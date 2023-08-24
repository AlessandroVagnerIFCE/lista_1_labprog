#include <stdio.h>

int main()
{
    int x;
    puts("Insira um número inteiro:");
    scanf("%d", &x);

    printf("O número %d é %s\n", x, x % 2 ? "ímpar" : "par");

    return 0;
}
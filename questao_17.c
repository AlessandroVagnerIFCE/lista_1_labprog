#include <stdio.h>

int main()
{
    int x;
    puts("Insira um número inteiro:");
    scanf("%d", &x);

    printf("Módulo de %d: %d\n", x, x < 0 ? -x : x);

    return 0;
}
#include <stdio.h>

int main()
{
    int x, n;
    puts("Insira um número inteiro X:");
    scanf("%d", &x);
    puts("Insira um número inteiro N:");
    scanf("%d", &n);

    //Deslocar uma casa binária à esquerda multiplica o número por 2
    printf("%d * 2^(%d) = %d\n", x, n, x << n);//n == 0 ? x : x * (2 << n));

    return 0;
}
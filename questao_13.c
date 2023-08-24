#include <stdio.h>

int main()
{
    int a, b;
    puts("Insira um número inteiro A:");
    scanf("%d", &a);
    puts("Insira um número inteiro B:");
    scanf("%d", &b);

    a = a^b;
    b = a^b;
    a = a^b;

    printf("A = %d\nB = %d\n", a, b);

    return 0;
}
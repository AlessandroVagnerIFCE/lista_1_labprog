#include <stdio.h>

int main()
{
    int x, y;
    puts("Insira um número inteiro X:");
    scanf("%d", &x);
    puts("Insira um número inteiro Y:");
    scanf("%d", &y);
    printf(x % y ? "O número %d não é múltiplo de %d\n" : "O número %d é múltiplo de %d\n", x, y);
    
    return 0;
}
#include <stdio.h>

int main()
{
    int x, y;
    puts("Insira um número inteiro X:");
    scanf("%d", &x);
    puts("Insira um número inteiro Y:");
    scanf("%d", &y);

    printf("%d + %d = %d\n", x, y, x+y);

    printf("%d - %d = %d\n", x, y, x-y);
    
    printf("%d * %d = %d\n", x, y, x*y);

    printf("%d / %d = %.2f\n", x, y, (float)x/y);

    printf("Resto de %d / %d: %d\n", x, y, x%y);

    return 0;
}
#include <stdio.h>
#include <math.h>

//Nota: usar -lm quando compilar

int main()
{
    int x;
    puts("Insira um número inteiro: ");
    scanf("%d", &x);
    printf("%d ao quadrado = %d\n", x, (int)pow(x, 2));

    return 0;
}

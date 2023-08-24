#include <stdio.h>

int main()
{
    int x;
    puts("Insira um valor inteiro: ");
    scanf("%d", &x);

    //Nesse caso não vale a pena usar ++x
    printf("Sucessor: %d\n", x+1);
    printf("Antecessor: %d\n", x-1);

    return 0;
}

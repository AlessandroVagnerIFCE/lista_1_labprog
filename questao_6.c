#include <stdio.h>

int main()
{
    //Para homens: 72.7 * h - 58
    //Para mulheres: 62.1 * h - 44.7
    float h; //Altura
    char s; //Sexo
    puts("Insira o sexo (m/f): ");
    scanf("%c", &s);
    puts("Insira a altura: ");
    scanf("%f", &h);

    if (s == 'm')
    {
        printf("Peso ideal: %.2f\n", 72.7 * h - 58);
    }
    else if (s == 'f')
    {
        printf("Peso ideal: %.2f\n", 62.1 * h - 44.7);
    }
    else
    {
        puts("Sexo inválido");
    }

    return 0;
}
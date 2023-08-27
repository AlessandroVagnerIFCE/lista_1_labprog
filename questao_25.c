#include <stdio.h>

int main()
{
    unsigned int h, m, s;
    puts("Insira um valor de tempo em segundos:");
    scanf("%d", &s);

    m = s/60; //Converter para minutos
    s = s % 60; //Segundos que sobraram
    h = m/60; //Converter para horas
    m = m % 60; //Minutos que sobraram

    printf("%d horas, %d minutos e %d segundos\n", h, m, s);

    return 0;
}
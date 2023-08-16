#include <stdio.h>

int main()
{
    int horas;
    int minutos;
    int segundos;
    puts("Insira a quantidade de horas: ");
    scanf("%d", &horas);

    puts("Insira a quantidade de minutos: ");
    scanf("%d", &minutos);

    puts("Insira a quantidade de segundos: ");
    scanf("%d", &segundos);   

    //Nesse caso utilizei long int
    //Pq dependendo da quantidade, pode ser um valor muito grande
    printf("Total de segundos: %ld", (long int)(horas*3600 + minutos * 60 + segundos));

    return 0;
}
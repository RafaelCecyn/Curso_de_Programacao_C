#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a
    conversão para horas, minutos e segundos.
    Exemplo:
    Entrada: 3672
    Saída: 1:1:12


*/

int main()
{
    int segundos,horas,restoHoras,minutos;
    printf("Digite a quantidade de segundos: \n");
    scanf("%d",&segundos);
    horas = segundos / 3600;
    printf("Horas: %d\n",horas);
    restoHoras = segundos % 3600;
    minutos = restoHoras / 60;
    printf("Minutos: %d\n",minutos);
    segundos = restoHoras % 60;
    printf("%d : %d: %d",horas,minutos,segundos);



    return 0;
}

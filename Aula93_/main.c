#include <stdio.h>
#include <stdlib.h>

/*
    Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3
    centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários
    para que Zé seja maior que Chico.
*/

int main()
{
    float chico = 1.50, ze = 1.10;
    int ano = 0;
    while (chico > ze){
        chico += 0.02;
        ze += 0.03;
        ano++;
    }
    printf("Serao necessarios %d anos",ano);
    return 0;
}

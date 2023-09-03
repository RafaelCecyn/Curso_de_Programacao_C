#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
*/

int main()
{
    int i,soma = 0;

    for (i=1;i<=1000;i++) {
        if (i % 2 != 0) {
            soma+=i;
        }
    }
    printf("A soma dos numeros impares eh: %d",soma);
    return 0;
}

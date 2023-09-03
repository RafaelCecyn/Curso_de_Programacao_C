#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que peça números ao usuário. Quando o usuário digitar o número 0 (zero) o
    programa deve imprimir na tela quantos números positivos e negativos foram digitados.
*/

int main()
{
    int num,contadorPositivo = 0,contadorNegativo = 0;
    do {
        printf("Digite um numero: ");
        scanf("%d",&num);
        if (num > 0) {
            contadorPositivo ++;
            }
        else if (num < 0) {
            contadorNegativo --;
        }
    } while(num != 0);

    printf("Positivo: %d\n", contadorPositivo);
    printf("Negativo: %d\n", contadorNegativo);
    return 0;
}

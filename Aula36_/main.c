#include <stdio.h>
#include <stdlib.h>

/*
    Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
    como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
    Dólares.

*/

int main()
{
    float valorEmReal,valorConvertido,cambio = 5.30;
    printf("Digite o valor em reais a ser convertido em dolar: \n");
    scanf("%f",&valorEmReal);
    valorConvertido = valorEmReal / cambio;
    printf("O valor convertido eh: %.2f",valorConvertido);
    return 0;
}

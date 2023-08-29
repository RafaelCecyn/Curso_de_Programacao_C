#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
    porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
    Assuma que a conta será dividida igualmente.

*/

int main()
{
    float despesa,valorDaConta,contaFinal;
    int gorjeta, pessoas;
    printf("Digite o valor da despesa, da gorjeta e o número de pessoas: \n");
    scanf("%f%d%d",&despesa,&gorjeta,&pessoas);
    valorDaConta = despesa * ((gorjeta+100)/(float)100);
    contaFinal = valorDaConta / pessoas;
    printf("\nO valor da conta eh: %.2f", contaFinal);


    return 0;
}

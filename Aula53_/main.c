#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores
    são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de números negativos
    e positivos.
*/


int main()
{
    int num1,num2,num3,num4,num5,contadorPositivo = 0, contadorNegativo = 0;

    printf("Digite o primeiro numero: \n");
    scanf("%d",&num1);
    printf("Digite o segundo numero: \n");
    scanf("%d",&num2);
    printf("Digite o terceiro numero: \n");
    scanf("%d",&num3);
    printf("Digite o quarto numero: \n");
    scanf("%d",&num4);
    printf("Digite o quinto numero: \n");
    scanf("%d",&num5);

    if (num1 > 0)
        contadorPositivo++;
    else
        contadorNegativo++;

    if (num2 > 0)
        contadorPositivo++;
    else
        contadorNegativo++;

    if (num3 > 0)
        contadorPositivo++;
    else
        contadorNegativo++;

    if (num4 > 0)
        contadorPositivo++;
    else
        contadorNegativo++;

    if (num5 > 0)
        contadorPositivo++;
    else
        contadorNegativo++;

    printf("Quantidade numeros positivos: %d\nQuantidade de numeros negativos: %d\n", contadorPositivo,contadorNegativo);



    printf("Hello world!\n");
    return 0;
}

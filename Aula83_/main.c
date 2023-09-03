#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que peça ao usuário um número inteiro maior que 2 e diga se o número
    informado é primo ou não.
*/

int main()
{
    int i,numero,contador = 0;
    do {
    printf("Digite um numero inteiro maior que 2: \n");
    scanf("%d",&numero);
    } while(numero < 2);
    for (i=1; i<= numero;i++) {
        if (numero % i == 0) {
            contador++;
        }
    }
    if (contador > 2)
        printf("O numero %d nao e primo: \n",numero);
    else
        printf("O numero %d eh primo: \n", numero);
    return 0;
}

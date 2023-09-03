#include <stdio.h>
#include <stdlib.h>

/*
        Faça um programa que calcule o valor de A, dado por:
        A = 1 + 2 + 3 + 4 + ... + n, onde n é um número inteiro, maior que zero informado pelo usuário.
*/

int main()
{
    int i,n,soma = 0;
    do {
        printf("Digite um numero inteiro maior que zero: \n");
        scanf("%d",&n);
    } while(n < 1);
    for (i = 1; i <= n;i++){
        soma += i;
    }
    printf("A soma dos numeros eh: %d",soma);
    return 0;
}

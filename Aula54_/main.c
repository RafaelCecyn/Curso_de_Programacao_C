#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por
    5, ou se não é divisível por nenhum deles.
*/

int main()
{
    int numero;
    printf("\nDigite um numero: \n");
    scanf("%d",&numero);

    if (numero % 2 == 0 || numero % 3 == 0 || numero % 5 == 0) {
        printf("O numero e divisivel por 2, 3 ou 5 \n");
    }
    else {
        printf("O numero nao e divisivel por 2, 3 ou 5");
    }
    return 0;
}

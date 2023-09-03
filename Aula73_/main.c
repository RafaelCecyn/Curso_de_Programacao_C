#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

/*
        Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
    Restrição:
    → O bloco de repetição deve executar no máximo 500 vezes.
*/

int main()
{
    int i;
    long long int soma = 0;

    for (i=1;i<=1000;i+=2) {
            soma+=i;
    }
    printf("A soma dos numeros impares eh: %d",soma);
    return 0;
}

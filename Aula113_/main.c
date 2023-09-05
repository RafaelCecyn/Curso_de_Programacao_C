#include <stdio.h>
#include <stdlib.h>

/*
Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
o 1o elemento com o último, o 2a com o penúltimo, ... até o 10a com o 11o. Imprima o vetor N
modificado.
*/

int main()
{
    int i,vet[20],aux,fim=19;

    for (i=0;i<20;i++) {
        scanf("%d",&vet[i]);
    }

    printf("Vetor original: \n");
    for (i=0;i<20;i++) {
        printf("%2d\n",vet[i]);
    }

    for (i=0;i<10;i++) {
        aux = vet[i];
        vet[i] = vet[fim-i];
        vet[fim-i] = aux;
    }

    printf("Vetor modificado: \n");
    for (i=0;i<20;i++) {
        printf("%2d\n",vet[i]);
    }

    return 0;
}

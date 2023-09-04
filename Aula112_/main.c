#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado
    em um terceiro vetor. Imprima os três vetores na tela.
*/

int main()
{
    int i,vet[25],vet2[25],vet3[25];

    for(i=0;i<25;i++)
        scanf("%d",&vet[i]);

    for(i=0;i<25;i++)
        scanf("%d",&vet2[i]);

    for(i=0;i<25;i++)
        vet3[i] = vet[i] + vet2[i];

    for (i=0;i < 25; i++) {
        printf("Os elementos do vetor 1: %d \n",vet[i]);
    }

    for (i=0;i < 25; i++) {
        printf("Os elementos do vetor 2: %d \n",vet2[i]);
    }

    for (i=0;i < 25; i++) {
        printf("Os elementos do vetor 2: %d \n",vet3[i]);
    }


    return 0;
}

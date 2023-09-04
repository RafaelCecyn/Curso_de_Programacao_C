#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
    Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
    fim, imprima os dois vetores.
*/

int main()
{
    int i,vet[10],vet2[10];

    for (i=0;i < 10; i++) {
        printf("Digite o %d elemento: ",i);
        scanf("%d",&vet[i]);
    }

    for (i=0;i < 10; i++) {
        vet2[i] = vet[i] * vet[i];
    }

    for (i=0;i < 10; i++) {
        printf("Os elementos do vetor 1: %d \n",vet[i]);
    }

    for (i=0;i < 10; i++) {
        printf("Os elementos do vetor 2: %d \n",vet2[i]);
    }


    return 0;
}

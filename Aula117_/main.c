#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa para ordenar um vetor com 100 números inteiros. Imprima o vetor antes e
    após a ordenação.
*/

int main()
{
    int i,j,vet[10],aux;
    printf("Digite os valores do vetor: ");
    for(i=0;i<10;i++)
        scanf("%d",&vet[i]);

    for(j=0;j<10;j++){
        for(i=0;i<9;i++){
            if(vet[i]>vet[i+1]) {
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
            }
        }
    }

    printf("Vetor ordenado: \n");
    for(i=0;i<10;i++) {
        printf("Vetor: %d\n",vet[i]);
    }
    return 0;
}

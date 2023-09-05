#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um
    vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
    mês por extenso: janeiro, fevereiro ...). Desconsidere empates.
*/

int main()
{
    int i,vet[12],maior=-100,menor=9999,indiceMenor=0,indiceMaior=0;
    for(i=0;i < 12;i++) {
        printf("Digite a temperatura do %d mes:\n",i);
        scanf("%d",&vet[i]);
    }

    for(i=0;i < 12;i++) {
        if (vet[i] > maior) {
            maior = vet[i];
            indiceMaior = i;
        }
        if (vet[i] < menor) {
            menor = vet[i];
            indiceMenor = i;
        }
    }
    switch(indiceMaior) {
    case 0:
        printf("Janeiro\n");
        break;
    case 1:
        printf("Fevereiro\n");
        break;
    case 2:
        printf("Março\n");
        break;
    case 3:
        printf("Abril\n");
        break;
    case 4:
        printf("Maio\n");
        break;
    case 5:
        printf("Junho\n");
        break;
    case 6:
        printf("Julho\n");
        break;
    case 7:
        printf("Agosto\n");
        break;
    case 8:
        printf("Setembro\n");
        break;
    case 9:
        printf("Outubro\n");
        break;
    case 10:
        printf("Novembro\n");
        break;
    case 11:
        printf("Dezembro\n");
        break;
    }
    switch(indiceMenor) {
    case 0:
        printf("Janeiro\n");
        break;
    case 1:
        printf("Fevereiro\n");
        break;
    case 2:
        printf("Março\n");
        break;
    case 3:
        printf("Abril\n");
        break;
    case 4:
        printf("Maio\n");
        break;
    case 5:
        printf("Junho\n");
        break;
    case 6:
        printf("Julho\n");
        break;
    case 7:
        printf("Agosto\n");
        break;
    case 8:
        printf("Setembro\n");
        break;
    case 9:
        printf("Outubro\n");
        break;
    case 10:
        printf("Novembro\n");
        break;
    case 11:
        printf("Dezembro\n");
        break;
    }

    printf("\nA maior temperatura: %d\n ",maior);
    printf("\nA menor temperatura: %d\n ",menor);
    printf("\nO indice maior temperatura: %d\n ",indiceMaior);
    printf("\nO indice menor temperatura: %d\n ",indiceMenor);


    return 0;
}

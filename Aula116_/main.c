#include <stdio.h>
#include <stdlib.h>


/*
    Faça um programa que leia 10 números reais e os armazene em um vetor. Em seguida, leia um
    código inteiro e faça uma das ações abaixo:
    0 – finaliza o programa;
    1 – imprime o vetor na ordem do início ao fim;
    2 – imprime o vetor na ordem inversa (do fim para o início).
    O programa deve funcionar até que o usuário digite 0 para finalizar.
*/

int main()
{
    int i, vet[10],aux,opcao;
    printf("Digite valores para preencher um vetor: ");
    for (i=0;i<10;i++)
        scanf("%d",&vet[i]);

    do {
        printf("Digite uma opcao:\n0 - Finalizar\n1 - imprime o vetor na ordem do início ao fim\n2 - imprime o vetor na ordem inversa\n");
        scanf("%d",&opcao);

        switch(opcao) {
        case 1:
            for (i=0;i<10;i++)
                printf("Vetor na posicao: %d\n",vet[i]);
            break;
        case 2:
            for (i=0;i < 5;i++) { // PRIMEIRO TROCAR OS ELEMENTOS DE LUGAR, PARA DEPOIS IMPRIMIR
                aux = vet[i];
                vet[i] = vet[9-i];
                vet[9-i] = aux;
            }
             for (i=0;i<10;i++)
                printf("Vetor inverso: %d\n",vet[i]);
            break;

        }

    } while(opcao != 0);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
    a) some cada uma das linhas armazenando o resultado em um vetor;
    b) some cada uma das colunas armazenando o resultado em um vetor;
    c) Imprima os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.
*/

int main()
{
    int mat[5][10],i,j,somaLinha[5],somaColuna[10],soma;

    srand(time(NULL));

    for (i=0;i<5;i++){
        for(j=0;j<10;j++){
            mat[i][j] = rand() % 100;
        }
    }

    // Soma das linhas
    for (i=0;i<5;i++){
        soma = 0;
        for(j=0;j<10;j++){
            soma = soma + mat[i][j];
        }
        somaLinha[i] = soma;
    }

    // Soma das colunas
     for (j=0;j<10;i++){
        soma = 0;
        for(i=0;i<5;i++){
            soma = soma + mat[i][j];
        }
        somaColuna[j] = soma;
    }

    // Matriz impressa

    for (i=0;i<5;i++){
        for(j=0;j<10;j++){
            printf("Matriz com elementos %2d:",mat[i][j]);
        }
    }

    // Soma das linhas
    for (i=0;i<5;i++) {
        printf("Soma das linhas %d: %3d\n",i,somaLinha[i]);
    }

    // Soma das colunas
    for (j=0;j<5;j++) {
        printf("Soma das colunas %d: %3d\n",j,somaColuna[i]);
    }



    return 0;
}

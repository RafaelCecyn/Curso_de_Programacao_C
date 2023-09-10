#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Dadas duas matrizes A e B 3 x 3, faça um programa para calcular a soma das matrizes e salvar
    em uma matriz C. Imprima as três matrizes.
*/

int main()
{
    int i,j,matA[3][3],matB[3][3],matC[3][3];

    srand(time(NULL));

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matA[i][j] = rand() % 100;

        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matB[i][j] = rand() % 100;

        }
    }

     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("A matriz A: %2d\n",matA[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("A matriz B: %2d\n",matB[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("A matriz C: %2d\n",matC[i][j]);
        }
    }



    return 0;
}

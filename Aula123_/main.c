#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Faça um programa para calcular a transposta de uma matriz 5 x 4. Imprima as duas matrizes na
    tela.
*/

int main()
{
    int i,j,mat[5][4],matT[4][5];

    srand(time(NULL));

    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            mat[i][j] = rand() % 100;
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
           printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }

     for(i=0;i<4;i++){
        for(j=0;j<5;j++){
           matT[i][j] = mat[j][i];
        }
    }

    printf("\n");

    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
           printf("%2d ", matT[i][j]);
        }
        printf("\n");
    }


    return 0;
}

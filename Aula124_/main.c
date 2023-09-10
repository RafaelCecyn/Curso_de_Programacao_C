#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Faça um programa que imprima na tela apenas os valores abaixo da diagonal principal de uma
    matriz 4 x 4.
*/

int main()
{
    int i,j,mat[4][4];

    srand(time(NULL));

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            mat[i][j] = rand() % 100;
        }
    }

     for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%2d ",mat[i][j]);
        }
        printf("\n");
    }


    printf("\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if (i > j){
                printf("%2d\n",mat[i][j]);
            }
        }
    }


    return 0;
}

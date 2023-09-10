#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Faça um programa que imprima na tela a diagonal principal de uma matriz 5 x 5.
*/

int main()
{
    int i,j,mat[5][5];

    srand(time(NULL));

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            mat[i][j] = rand() % 100;
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if (i == j) {
                printf("Elemento %d da diagonal: %d\n",i,mat[i][j]);
            }
        }
    }




    return 0;
}

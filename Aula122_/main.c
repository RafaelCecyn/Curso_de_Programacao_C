#include <stdio.h>
#include <stdlib.h>
# include <time.h>

/*
    Faça um programa que imprima na tela a diagonal secundária de uma matriz 7 x 7.
*/

int main()
{
    int tam = 7;
    int i,j,mat[tam][tam],indiceI=0,indiceJ=6;
    srand(time(NULL));

    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            mat[i][j] = rand() % 100;
        }
    }

    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            printf("Elemento %d e %d da matriz: %d\n",i,j,mat[i][j]);
        }
    }
    /*
    indiceJ=6;
    for (i=0;i<7;i++){
        printf("%d\n",mat[i][indiceJ]);
        indiceJ--;
    }
    */

    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            if((indiceI == i) && (indiceJ == (6-j))) {
                printf("%d %d %d %d",indiceI,indiceJ,i,j);
                printf("Diagonal secundaria: %d\n",mat[i][indiceJ]);
            }
        }
        indiceI++;
        indiceJ--;
    }

    return 0;
}

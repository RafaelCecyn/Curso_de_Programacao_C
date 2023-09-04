#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
        Aula 110: Como gerar números aleatórios para preencher uma matriz?
*/

int main()
{
    int i,j, mat1[3][3] = {1,2,3,4,5,6,7,8,9};

    srand(time(NULL));

    for (i=0; i< 3;i++)
        for (j = 0; j<3;j++){
            mat1[i][j] = rand();
        }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%12d ",mat1[i][j]);
        printf("\n");
    }

    return 0;
}

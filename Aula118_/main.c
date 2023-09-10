#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que calcule e imprima a soma de todos os elementos de uma matriz 5 x 7.
*/

int main()
{
    int i,j,mat[5][7],soma;

    for(i=0;i < 5;i++)
      for(j=0;j<7;j++){
        printf("Digite os valores para a matriz %d %d\n",i,j);
        scanf("%d",&mat[i][j]);
    }

      for(i=0;i < 5;i++)
      for(j=0;j<7;j++){
            soma += mat[i][j];
    }

    printf("A soma dos valores sao %d\n",soma);

}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Dada uma matriz 4 x 4 faça um programa que diga se ela é um Quadrado Mágico ou não.

    Uma matriz quadrada inteira é um quadrado mágico se a soma dos elementos de cada linha,
    a soma dos elementos de cada coluna e a soma dos elementos das diagonais principal
    e secundária são todas iguais.
*/

int main()
{
    int i,j,mat[4][4],somaDiagonalPrincipal=0,somaDiagonalSecundaria = 0,vetLinha[4],vetColuna[4],soma;
    int somaLinha=0,somaColuna=0,indiceJ = 6;

    srand(time(NULL));

    for(i=0;i<4;i++) {
        for(j=0;j<4;j++){
            mat[i][j] = rand() % 100;
        }
    }

    // Soma das linhas
     for(i=0;i<4;i++) {
        soma = 0;
        for(j=0;j<4;j++){
            soma = soma + mat[i][j];
        }
        vetLinha[i] = soma;
    }


    for(i=0;i<4;i++){
        somaLinha += vetLinha[i];
    }
    printf("Soma linha: %d\n",somaLinha);



     // Soma das colunas
     for(i=0;i<4;i++) {
        soma = 0;
        for(j=0;j<4;j++){
            soma = soma + mat[i][j];
        }
        vetColuna[i] = soma;
    }

    for(j=0;j<4;j++){
        somaColuna += vetColuna[j];
    }
    printf("Soma coluna: %d\n",somaColuna);

    // Diagonal principal

    for(i=0;i<4;i++) {
        for(j=0;j<4;j++){
            if (i = j) {
                somaDiagonalPrincipal += mat[i][j];
            }
        }
    }

    printf("\n%d",somaDiagonalPrincipal);

    // Diagonal secundária

    for (i=0;i<7;i++){
        somaDiagonalSecundaria += mat[i][indiceJ];
        indiceJ--;
    }
     printf("\n%d",somaDiagonalSecundaria);


    return 0;
}

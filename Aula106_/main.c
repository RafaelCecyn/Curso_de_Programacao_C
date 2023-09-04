#include <stdio.h>
#include <stdlib.h>

/*
    Aula 106: Como criar uma matriz?
*/

int main()
{
    // tipo identificador
    int vet[10];

    int mat1[3][3] = {1,2,3,4,5,6,7,8,9}; // primeiro linha e depois colunas
    /*      c0  c1 c2
    linha 0  1   2  3
    linha 1  4   5  6
    linha 2  7   8  9
    */

    int mat2[][3] = {1,2,3,4,5,6}; // tem 3 colunas e por associação dos valores vai ter 2 linhas
    int mat3[][3] = {1,2,3,4,5,6,7}; // tem 3 colunas e por associação dos valores vai ter 3 linhas com 7 0 0
    int mat4[3][3] = {0}; // Vai preencher com 0 a matriz

    float mat5[4][5]; // Matriz de float
    char mat6[10][10]; // Matriz de char

    return 0;
}

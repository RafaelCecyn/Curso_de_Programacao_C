#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa para encontrar o menor número inteiro que seja divisível por todos os
    números inteiros entre 1 e 10.
*/

int main()
{
    int i,num=1;
    for (i=1;i<=10;i++) {
        num *=i;
    }
    printf("O menor numero inteiro eh: %d",num);
    return 0;
}

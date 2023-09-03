#include <stdio.h>
#include <stdlib.h>

/*
Você deve fazer um programa que apresente a sequência conforme o exemplo abaixo.
I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=9
I=3 J=8
I=3 J=7
I=5 J=11
I=5 J=10
I=5 J=9
...
I=9 J=15
I=9 J=14
I=9 J=13

*/

int main()
{
    int i,j,inicio = 7,fim = 5;
    for (i=1;i<=9;i+=2) {
        for (j=inicio;j>=fim;j--) {
            printf("%d %d\n",i,j);
        }
        inicio += 2;
        fim += 2;
    }
    return 0;
}

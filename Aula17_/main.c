#include <stdio.h>
#include <stdlib.h>

/*
            Aula 17
        operador short para o tipo int
        intervalo: -32.768 até 32.767
        %hi ou %d
*/

int main()
{

    int y = 0;
    short int x = 32767;

    printf("Tamanho de um int na memoria: %d bytes\n", sizeof y); // 4B
    printf("Tamanho de um short int na memoria: %d bytes\n", sizeof x); // 2B
    printf("Valor de x: %d\n",x); // 32767
    x++;
    printf("Valor de x: %hi\n",x); // -32768 overflow
    return 0;
}

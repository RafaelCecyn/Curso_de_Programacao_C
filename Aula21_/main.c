#include <stdio.h>
#include <stdlib.h>

/*
        Aula 21
    tamanho de um double na memória 8B
    %lf
*/

int main()
{

    float x = 3.1415;
    double y = 3.1415171819;
    printf("Tamanho de um double: %d bytes\n", sizeof y);
    return 0;
}

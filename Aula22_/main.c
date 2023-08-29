#include <stdio.h>
#include <stdlib.h>

/*
        Aula 22
    operador long para o tipo double 16B
    double -> %lf
    long double -> %LF

    __mingw_printf(); -> Somente para windows

*/

int main()
{

    float x = 3.1415;
    long double y = 3.1415171819324433234243432432;
    printf("Valor de y: %Lf\n", y);
    printf("Tamanho de um long double: %d bytes\n", sizeof y);
    return 0;
}

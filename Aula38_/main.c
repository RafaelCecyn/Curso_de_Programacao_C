#include <stdio.h>
#include <stdlib.h>

/*
        Aula 38 operadores relacionais
            menor que ( a < b )     => 1
            maior que (a > b )      => 0
            menor ou igual (a <= b) => 1
            maior ou igual (a >= b) => 0
            igual (a == b)          => 0
            diferente (a != b)      => 1

*/

int main()
{
    int a = 10, b = 20;

    printf("\n\tResultado: %d\n\n", a < b); // Resultado 1
    printf("\n\tResultado: %d\n\n", a > b); // Resultado 0
    printf("\n\tResultado: %d\n\n", a <= b); // Resultado 1
    printf("\n\tResultado: %d\n\n", a >= b); // Resultado 0
    printf("\n\tResultado: %d\n\n", a == b); // Resultado 0
    printf("\n\tResultado: %d\n\n", a != b); // Resultado 1

    return 0;
}

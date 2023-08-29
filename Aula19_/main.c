#include <stdio.h>
#include <stdlib.h>

/*
            Aula 19
        operador long para o tipo int
        %li ou %ld
        operador long long para o tipo int
        %lli ou %lld
        long int e int ocupam 4B
*/

int main()
{

    long long int x = 2147483647;

    printf("Tamanho de x em bytes: %d\n",sizeof x); // 8
    printf("Valor de x: %lli\n", x);
    x++;
    printf("Valor de x: %lld\n", x);

    return 0;

}

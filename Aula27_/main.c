#include <stdio.h>
#include <stdlib.h>

/*
        Aula 27
    operador de incremento ++


*/

int main()
{
    int resultado, contador = 10;

    // sinônimos
    //contador++;
    //contador += 1;
    //contador = contador + 1;



    //printf("Valor: %d\n", contador++) // 10
    //printf("Valor: %d\n", ++contador) // 11

    //resultado = contador++;

    //printf("Valor: %d\n",resultado); // 10

    resultado = ++contador;
    printf("Valor: %d\n",resultado); // 11

    return 0;
}

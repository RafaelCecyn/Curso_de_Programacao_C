#include <stdio.h>
#include <stdlib.h>

/*
            Aula 29
        operador unsigned -> somente números positivos
        trocar o %d por %u
        limite para o tipo int: 2.147.483.647
        short int -> %d ou %hi
        unsigned short int -> %hu ou %d
        unsigned long int -> %lu

*/

int main()
{

    unsigned int x = 2147483647; // 0 ... 4.294.967.295
    // 4 * 8 = 32

    unsigned short int y = 55000;

    printf("\n\t %u \n\n", ++x); // 2.147.483.648
    printf("\n\t %hu \n\n", y);



    return 0;
}

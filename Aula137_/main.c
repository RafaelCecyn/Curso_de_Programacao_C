#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Aula 137: Copiando uma String com a função strcpy()
    Primeiro destino, depois a string que quero copiar
*/

int main()
{
    char palavra1[50] = {"bolo"};
    char palavra2[50] = {"abacate"};


    printf("Antes de copiar\nprimeira palavra %s\nsegunda palavra %s\n",palavra1,palavra2);

    strcpy(palavra2,palavra1);

    printf("Antes de copiar\nprimeira palavra %s\nsegunda palavra %s\n",palavra1,palavra2);

    return 0;
}

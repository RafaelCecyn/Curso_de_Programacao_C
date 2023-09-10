#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Aula 136: Como comparar duas Strings com a função strcmp()
    0 -> as strings são iguais
    -1 -> a string for menor que a string2 -> ocorre antes da string2
    1 -> a string 1 for maior que a string2 -> ocorre depois da string2
*/

int main()
{
    char palavra1[50] = {"bola"};
    char palavra2[50] = {"abacate"};

    printf("\n\nResultado: %d\n\n",strcmp(palavra1,palavra2)); // return 0 duas strings iguais

    return 0;
}

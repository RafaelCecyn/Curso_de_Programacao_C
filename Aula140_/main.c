#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Aula 140: Convertendo uma String para maiúsculo ou minúsculo com as funções:
    -> strupr()
    -> strlwr()
*/

int main()
{
    char palavra[50] = {"Bom dia simpatia"};
    printf("\nAntes: %s\n",palavra);

    strupr(palavra);
    strlwr(palavra);
    printf("\Depois: %s\n",palavra);

    return 0;
}

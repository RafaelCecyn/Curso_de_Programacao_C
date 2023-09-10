#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Aula 138: Procurando caracteres em uma String com as funções strchr e strrchr
    strchr -> retorna a primeira ocorrência
    strrchr -> retorna a última ocorrência
*/

int main()
{
    char palavra1[50] = {"abacate"};
    char *letra,*letrafinal;

    letra = strchr(palavra1,'a');
    printf("\n%c\n",*letra); // 'a'
    printf("\n%c\n",*(letra+1)); // 'b'

    letrafinal = strrchr(palavra1,'a');
    printf("\n%c\n",*letrafinal); // 'a'
    printf("\n%c\n",*(letrafinal+1)); // 't'




    return 0;
}

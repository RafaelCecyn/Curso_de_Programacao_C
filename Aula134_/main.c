#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
        Aula 134: Descobrindo o tamanho de uma string com a função strlen()?

*/

int main()
{
    int tam;
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    tam = strlen(palavras);

    printf("Tamanho: %d\n",tam);
    // Ou
    printf("Tamanho: %d\n",strlen(palavras));

    return 0;
}

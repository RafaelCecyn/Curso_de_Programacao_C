#include <stdio.h>
#include <stdlib.h>

/*
        Aula 128: O que é uma string?
        string vetor de caracteres
        armazenar strings aspas duplas
*/

int main()
{
    char palavras[] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("%s", palavras); // imprime a string inteira
    printf("\n%c", palavras[0]); // imprime o caractere 0

    return 0;
}

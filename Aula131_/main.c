#include <stdio.h>
#include <stdlib.h>

/*
    Aula 131: Lendo uma string com a função fgets()
    Lê no maximo n-1, pois o ultimo e \0
*/

int main()
{
    char palavras[50] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("Digite o seu nome: ");


    fgets(palavras,50,stdin);
     // Le 49 caracteres ultimo reservado para \0

    printf("\nSeu nome e: %s",palavras);
    return 0;
}

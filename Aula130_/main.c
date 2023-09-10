#include <stdio.h>
#include <stdlib.h>

/*
    Aula 130: Lendo uma String com a função gets()
    // Alerta não utilizar, função perigosa e pode reescrever outras partes do programa
*/

int main()
{
    char palavras[50] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("Digite o seu nome: ");


    gets(palavras);

    printf("\nSeu nome e: %s",palavras);
    return 0;
}

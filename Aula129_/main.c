#include <stdio.h>
#include <stdlib.h>

/*
        Aula 129: Lendo uma String com a função scanf()
        scanf("%50[^\n]")
*/

int main()
{
    char palavras[50] = {"Oi. Vamos aprender a programar com a linguagem C?"};


    printf("Digite o seu nome: ");
    //scanf("%s", palavras); // Sempre pega a string até o primeiro espaço em branco

    scanf("%50[^\n]",palavras);// [^\n] -> ler até o \n quebra de linha, 10 o máximo de caracteres

    printf("\nSeu nome e: %s",palavras);

    return 0;
}

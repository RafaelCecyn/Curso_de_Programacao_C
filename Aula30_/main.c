#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Para pegar a tabela ASCII Extendida

/*
            Aula 30
        tabela ascii e acentuação
        1 byte (8 bits) -> -128 até 127
        unsigned 1 byte -> 0 até 255

        9 é o caractere de tabulação \t.
        10 é o caractere de nova linha \n (enter).
        65 é a letra A maiscula
        66 é a letra B maiúscula
        97 é a letra a minúscula

        1º = setlocale(LC_ALL,NULL); // padrão da linguagem C ASCII reduzida
        2º = setlocale(LC_ALL,""); // padrão do sistema operacional
        3º = setlocale(LC_ALL,"Portuguese"); //  português brasileiro


*/

int main()
{
    char letra = 'f';
    printf("%c \n",letra); // f
    printf("%d \n",letra); // 102 número dessa letra na tabela ASCII


    printf("%c\n",102); // f pois  o caractere 102 na tablea ASCII

    setlocale(LC_ALL,"Portuguese");
    printf("Coração\n");

    return 0;
}

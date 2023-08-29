#include <stdio.h>
#include <stdlib.h>

/*
        Aula 09
    Lendo caracteres
    função fgetc(); file

*/

int main()
{

    char letra;

    printf("Digite um caracter: \n");
    letra = fgetc(stdin);

    printf("Caracter lido: %c\n",letra);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
        Aula 08
    Lendo caracteres
    função getc();
*/

int main()
{

    char letra;
    printf("Digite um caractere: \n");
    letra = getc(stdin); // Pode ler um arquivo texto; stdin le a entrada padrão que é um teclado
    printf("Caracter lido: %c\n",letra);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.
*/

int main()
{
    char letra;
    printf("Digite uma letra: \n");
    scanf("%c",&letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        printf("A letra e uma vogal: %c\n",letra);
    else
        printf("A letra nao e uma vogal: %c\n",letra);

    return 0;
}

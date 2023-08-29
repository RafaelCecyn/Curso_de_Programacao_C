#include <stdio.h>
#include <stdlib.h>

/*
        Aula 14
    Ler dois caracteres separadamente
*/

int main()
{

    char a, b;
    printf("Digite uma letra: \n");
    scanf("%c", &a);

    printf("Digite uma letra: \n");
    scanf(" %c", &b);
    printf("As letras sao: %c e %c",a,b);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
        Aula 39: Decisão simples
    Verificando se um número é negativo

    Braslia é a capital do Brasil? sim = 1 ou não = 0

*/

int main()
{
    int a = 10;

    printf("\n\t Digite um valor qualquer: ");
    scanf("%d",&a);

    if(a < 0) {
        printf("\n\tValor negativo!\n");
    }
    printf("\n\tContinuacao do programa...\n");

    return 0;
}

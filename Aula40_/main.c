#include <stdio.h>
#include <stdlib.h>

/*
        Aula 40: Decisão completa
    Verificando se um número é negativo
*/

int main()
{
    int a = 10;

    printf("\n\t Digite um valor qualquer: ");
    scanf("%d",&a);

    if(a < 0) {
        printf("\n\tValor negativo!\n");
    }
    else {
        printf("\n\t Valor maior ou igual a zero!\n");
    }
    printf("\n\tContinuacao do programa...\n");

    return 0;
}

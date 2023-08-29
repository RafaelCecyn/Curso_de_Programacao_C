#include <stdio.h>
#include <stdlib.h>

/*
        Aula 45: Operador ternário aninhado
        condição ? verdadeiro : condicao ? verdadeiro : falso

*/

int main()
{
    int a = 10;

    printf("\n\t Digite um valor qualquer: ");
    scanf("%d",&a);

    printf("Operador ternário:\n");
    a < 0 ? printf("\n\tValor negativo!\n") : a > 0 ? printf("\n\t Valor positivo!\n") :   printf("\n\t Valor igual a zero!\n");

    printf("\n\tContinuacao do programa...\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
        Aula 49: else if encadeados
*/

int main()
{
    int a = 10;

    printf("\n\t Digite um valor qualquer: ");
    scanf("%d",&a);


    // primeira versão
    if(a < 0) {
        printf("\n\tValor negativo!\n");
    }
    else {
        if (a > 0)
            printf("\n\t Valor positivo!\n");
        else
            printf("\n\t Valor igual a zero!\n");

    }

    // segunda versão
    if (a <0 )
        printf("\n\tValor negativo!\n");
    else if (a > 0)
        printf("\n\t Valor positivo!\n");
    else
        printf("\n\t Valor igual a zero!\n");

    return 0;
}

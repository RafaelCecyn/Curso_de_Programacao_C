#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

/*
        Aula 44: Decisão aninhada
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
        if (a > 0)
            printf("\n\t Valor positivo!\n");
        else
            printf("\n\t Valor igual a zero!\n");

    }

    printf("\n\tContinuacao do programa...\n");

    return 0;
}

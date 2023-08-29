#include <stdio.h>
#include <stdlib.h>

/*
        Aula 46: Operador lógico de negação !
        TABELA VERDADE X    !X
                       v     f
                       f     v
*/

int main()
{
     int a = 10;

    printf("\n\t Digite um valor qualquer: ");
    scanf("%d",&a);

    printf("Operador ternário:\n");
    !(a < 0) ? printf("\n\tValor negativo!\n") :  printf("\n\t Valor maior ou igual a zero!\n");

    if (!(a < 0)) {
        printf("\n\tValor negativo!\n");
    }
    else {
        printf("\n\t Valor maior ou igual a zero!\n");
    }

    printf("\n\tContinuacao do programa...\n");

    return 0;
}

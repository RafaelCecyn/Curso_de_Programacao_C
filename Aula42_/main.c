#include <stdio.h>
#include <stdlib.h>

/*
        Aula 42: Edentação e uso de chaves na linguagem C
        Apenas uma linha abaixo do if ou else no precisa de chaves
        Edentação não altera meu programa
*/

int main()
{
    int a = 10;

    printf("\n\t Digite um valor qualquer: ");
    scanf("%d",&a);

    printf("\nResultado logico: %d\n", a < 0);

    if(a < 0) {
        printf("\n\tValor negativo!\n");
        printf("\n\t**Valor negativo!**\n");
    }
    else {
        printf("\n\t Valor maior ou igual a zero!\n");
        printf("\n\t** Valor maior ou igual a zero! **\n");
    }
    printf("\n\tContinuacao do programa...\n");

    return 0;
}

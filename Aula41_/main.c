#include <stdio.h>
#include <stdlib.h>

/*
        Aula 41: Verdadeiro e falso na linguagem C
    0 sempre vai ser falso
    Qualquer valor diferente de zero vai ser verdadeiro
*/

int main()
{
    int a = 10;

    printf("\n\t Digite um valor qualquer: ");
    scanf("%d",&a);

    printf("\nResultado logico: %d\n", a < 0);

    if(0) { // Nunca vai entrar nessa condição pois será sempre falso com o 0
        printf("\n\tValor negativo!\n");
    }
    else {
        printf("\n\t Valor maior ou igual a zero!\n");
    }
    printf("\n\tContinuacao do programa...\n");

    return 0;
}

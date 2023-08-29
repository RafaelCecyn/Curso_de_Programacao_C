#include <stdio.h>
#include <stdlib.h>

/*
        Aula 10
    Lendo vários valores
*/

int main()
{
    int num1,num2,num3;
    printf("Digite tres valores inteiros: \n");
    scanf("%d%d%d",&num1,&num2,&num3); // Espaço e enter funcionam para ler

    printf("Valores lidos: %d, %d e %d \n",num1,num2,num3);

    return 0;
}

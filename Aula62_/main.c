#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos
    dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é
    equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não
    formam um triângulo”.
                            | b - c | < a < b + c
                            | a - c | < b < a + c
                            | a - b | < c < a + b
*/


int main()
{
    int num1,num2,num3;
    printf("Digite tres valores: \n");
    scanf("%d%d%d",&num1,&num2,&num3);

    if ((num2 - num3)*-1 < num1 && num1 < (num2 + num3)) {
        printf("Os valores formam um triangulo.\n");
        if ((num1 == num2) && (num2 === num3) {
            printf("Triangulo Equilatero.\n");
        }
        else if (num1 == num2 || num1 == num3 || num2 == num3) {
            printf("Triangulo isosceles.\n");
        }
        else
            printf("Triangulo escaleno.\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
        Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês. Utilize para
        isso a estrutura de seleção switch.
        Obs.: Considere fevereiro como tendo 28 dias.
*/

int main()
{
    int mes;
    printf("Digite um numero inteiro correspondente a um mes: \n");
    scanf("%d",&mes);


    switch(mes) {
    case 1:
        printf("31");
        break;
    case 2:
        printf("28");
        break;
    case 3:
        printf("31");
        break;
    case 4:
        printf("30");
        break;
    case 5:
        printf("31");
        break;
    case 6:
        printf("30");
        break;
    case 7:
        printf("31");
        break;
    case 8:
        printf("31");
        break;
    case 9:
        printf("30");
        break;
    case 10:
        printf("31");
        break;
    case 11:
        printf("30");
        break;
    case 12:
        printf("31");
        break;
    default:
        printf("Mês inválido");

    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/*
    Faça um programa que leia uma tecla e apresente o código ASCII da tecla seguido de quebra de linha.


    int main()
{
    char tecla;
    scanf("%c",&tecla);
    printf("%d\n",tecla);
    return 0;
}
*/

/*
    E1_01) Faça um programa que leia um número de ponto flutuante e apresente em linhas separadas a parte inteira e a parte fracionária.

*/

/*
int main() {
    float x,f;
    int y;
    scanf("%f",&x);
    y = (int)x;
    f = x - y;
    printf("%d\n",y);
    printf("%f",f);
    return 0;
}
*/

/*
E1_07) Faça um programa que leia três números e os apresente em ordem crescente.
*/


int main () {

    int num1,num2,num3;
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1 <= num2 && num1 <= num3) {
        printf("%d\n",num1);
        if (num2 <= num3) {
            printf("%d\n",num2);
            printf("%d\n",num3);
        }
        else {
            printf("%d\n",num3);
            printf("%d\n",num2);
        }
    }

    else if (num2 <= num1 && num2 <= num3) {
        printf("%d\n",num2);
        if (num1 <= num3) {
            printf("%d\n",num1);
            printf("%d\n",num3);
        }
        else {
            printf("%d\n",num3);
            printf("%d\n",num1);
        }
    }

    else if (num3 <= num1 && num3 <= num2) {
        printf("%d\n",num3);
        if (num1 <= num2) {
            printf("%d\n",num1);
            printf("%d\n",num2);
        }
        else {
            printf("%d\n",num2);
            printf("%d\n",num1);
        }
    }


}


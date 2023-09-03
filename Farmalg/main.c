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

/*
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
*/

/*
        Faça um programa que leia dois números A e B e apresente o maior divisor comum dos dois números.
*/

/*

int main (){
    int num1,num2,mdc = 1,maior,i;
    scanf("%d%d",&num1,&num2);
    if (num1 > num2) {
        maior = num1;
    }
    else
        maior = num2;

    for (i=2;i <= maior; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            num1 = num1 / i;
            num2 = num2 / i;
            mdc *= i;
            i--;
        }
    }
    printf("%d",mdc);
    return 0;
}
*/

/*
    E1_05) Faça um programa que leia 10 números inteiros e apresente o maior (não utilize vetor/matriz).
*/
/*

int main() {
    int num,maior,i;
    scanf("%d",&maior);

    for (i=2;i <= 10;i++) {
        scanf("%d",&num);
        if (num > maior) {
            maior = num;
        }

    }
    printf("%d\n",maior);
    return 0;

}
*/

/*
    E1_06) Faça um programa que leia uma lista de números inteiros terminados por 0, para cada número lido o programa deve informar o número e se o número é par ou ímpar. Não utilize vetores/matrizes.
    mostre apenas "par" ou "impar" (sem acentos).
*/

int main() {
    int num;
    do {
        scanf("%d",&num);

        if (num == 0) {
            break;
        }

        else if (num % 2 == 0) {
            printf("%d ",num);
            printf("par \n");
        }
        else {
            printf("%d ",num);
            printf("impar \n");
        }

    } while(1);
    return 0;
}





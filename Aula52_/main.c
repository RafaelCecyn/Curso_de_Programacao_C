#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.
*/


int main()
{

    int num1,num2,num3;
    printf("\nDigite três valores: \n");
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1 > num2 && num1 > num3) {
            printf("O maior numero e: %d \n",num1);
            if (num2 > num3) {
            printf("O segundo maior numero e: %d \n",num2);
            printf("O terceiro maior numero e: %d \n",num3);
            }
            else {
                printf("O segundo maior numero e: %d \n",num3);
                printf("O terceiro maior numero e: %d \n",num2);
            }
    }
    else if (num2 > num1 && num2 > num3) {
            printf("O maior numero e: %d \n",num2);
            if (num1 > num3) {
            printf("O segundo maior numero e: %d \n",num1);
            printf("O terceiro maior numero e: %d \n",num3);
            }
            else {
                printf("O segundo maior numero e: %d \n",num3);
                printf("O terceiro maior numero e: %d \n",num1);
            }
    }
    else if (num3 > num1 && num3 > num2) {
            printf("O maior numero e: %d \n",num3);
            if (num1 > num2) {
            printf("O segundo maior numero e: %d \n",num1);
            printf("O terceiro maior numero e: %d \n",num2);
            }
            else {
                printf("O segundo maior numero e: %d \n",num2);
                printf("O terceiro maior numero e: %d \n",num1);
            }
    }

    return 0;
}

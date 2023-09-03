#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e
    imprima a média semestral. Faça com que o programa só aceite notas válidas (uma nota válida deve
    pertencer entre o intervalo de 0 a 10). Cada nota deve ser validada separadamente.
*/


int main()
{
    float num1,num2,media;

    do {
        printf("Digite a primeira nota: \n");
        scanf("%f",&num1);
    } while(num1 < 0 || num1 > 10);
    printf("A primeira nota eh: %.2f\n",num1);
    do {
        printf("Digite a segunda nota: \n");
        scanf("%f",&num2);
    } while(num2 < 0 || num2 > 10);
    printf("A segunda nota eh: %.2f\n",num2);--
    media = (num1 + num2) / 2;

    printf("A media eh: %.2f",media);
    return 0;
}

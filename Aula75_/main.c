#include <stdio.h>
#include <stdlib.h>
//Aula 75_
/*
    Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e
    imprima a média semestral. Faça com que o programa só aceite notas válidas (uma nota válida deve
    pertencer entre o intervalo de 0 a 10). Cada nota deve ser validada separadamente.
*/

int main()
{
    float nota1,nota2,media;
    do {
        printf("Digite o valor da primeira nota: \n");
        scanf("%f",&nota1);
    } while (nota1 < 0 || nota1 > 10);
    printf("A nota 1: %.2f\n",nota1);

    do {
        printf("Digite o valor da segunda nota: \n");
        scanf("%f",&nota2);
    } while (nota2 < 0 || nota2 > 10);
    printf("A nota 2: %.2f\n",nota2);
    media = (nota1 + nota2) / 2;
    printf("A media e: %.2f",media);

    return 0;
}

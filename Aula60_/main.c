#include <stdio.h>
#include <stdlib.h>

/*
        Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
        de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule
        a apresente a média:
        Opções:
        • ‘a’ - Aritmética.
        • ‘p’ - Ponderada (pesos: 3,3,4).

*/


int main()
{
    float nota1,nota2,nota3,mediaAritmetica,mediaPonderada;
    int tipoDeMedia;

    printf("Digite tres notas: \n");
    scanf("%f%f%f",&nota1,&nota2,&nota3);

    printf("1 - Media Aritmetica\n2 - Media Ponderada\n");
    scanf("%d",&tipoDeMedia);

    if (tipoDeMedia == 1) {
        mediaAritmetica = (nota1 + nota2 + nota3) / 3;
        printf("A media e: %f\n", mediaAritmetica);
    }
    else if (tipoDeMedia == 2) {
        mediaPonderada = (nota1 * 3 + nota2 * 3 + nota3 * 4) / 10;
        printf("A media e: %f\n", mediaPonderada);
    }


    return 0;
}

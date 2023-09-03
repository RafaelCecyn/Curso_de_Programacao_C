#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa para ler as notas da primeira e da segunda avaliação de um aluno. Calcule
    e imprima a média semestral. O programa deverá aceitar apenas notas válidas no intervalo [0,10].
    Cada nota deve ser validada separadamente. Ao final, deve ser impressa a mensagem “novo
    calculo? (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2), indicando se ele
    deseja ou não executar o programa novamente. Se for informado o código 1, deve ser repetida a
    execução de todo o programa para permitir um novo cálculo, se for informado o código 2 o
    programa deve ser encerrado.
*/

int main()
{
    float nota1,nota2,mediaSemestral;
    int opcao;
    do {
        do {
        printf("Digite a primeira nota: ");
        scanf("%f",&nota1);
        } while (nota1 < 0 || nota1 > 10);
        do {
        printf("Digite a segunda nota: ");
        scanf("%f",&nota2);
        } while (nota2 < 0 || nota2 > 10);
        mediaSemestral = (nota1 + nota2) / 2;
        printf("A media semestral eh: %f\n",mediaSemestral);
        printf("Novo calculo? (1-Sim 2-Nao)\n");
        scanf("%d",&opcao);
    }while(opcao != 2);

    return 0;
}

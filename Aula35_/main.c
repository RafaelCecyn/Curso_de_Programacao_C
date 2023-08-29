#include <stdio.h>
#include <stdlib.h>

/*
        Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o
        número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
        sabendo que são descontados 8% para imposto de renda.
*/

int main()
{
    float preco = 45.0,valorTotal,valorComDesconto;
    int dia,imposto = 8;
    printf("Informe o número de dias trabalhados:\n");
    scanf("%d",&dia);
    valorTotal = preco * dia;
    valorComDesconto = valorTotal * ((100-imposto)/(float)100);
    printf("Valor a ser recebido: %.2f",valorComDesconto);
    return 0;
}

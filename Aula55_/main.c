#include <stdio.h>
#include <stdlib.h>

/*
    Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
    de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.
    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
*/

int main()
{
    int opcao;
    float dinheiro,valorEmDolar,valorEmReal;

    printf("Digite o valor que deseja converter.\n");
    scanf("%f",&dinheiro);
    printf("1 - Conversao de Real para Dolar.\n2 - Conversao de Dolar para Real. \n");
    scanf("%d",&opcao);

    if (opcao == 1) {
        valorEmDolar = dinheiro / 5.30;
        printf("O valor em Dolar e: %.2f\n",valorEmDolar);
    }
    else {
        valorEmReal = dinheiro * 5.30;
        printf("O valor em Real e: %.2f\n",valorEmReal);
    }

    return 0;
}

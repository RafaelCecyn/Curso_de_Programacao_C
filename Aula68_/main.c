#include <stdio.h>
#include <stdlib.h>

// Aula 68: Estrutura de repetição do() while (faça enquanto)

int main()
{
    int valor,valor2;

    printf("Digite um valor maior que zero: \n");
    scanf("%d",&valor);

    // enquanto(valor <= 0)
    while(valor <= 0) {
        printf("\n Valor invalido! Digite um valor maior que zero:\n ");
        scanf("%d",&valor);
}
    printf("Valor lido: %d\n",valor);

    do {
        printf("Digite um valor maior que zero: ");
        scanf("%d",&valor2);

    } while (valor2 <= 0);

     printf("Valor lido: %d\n\n",valor2);
}

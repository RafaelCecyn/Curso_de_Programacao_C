#include <stdio.h>
#include <stdlib.h>

// Aula 67: Estrutura de repetição while (enquanto)

int main()
{
    int valor;

    printf("Digite um valor maior que zero: \n");
    scanf("%d",&valor);

    // enquanto(valor <= 0)
    while(valor <= 0) {
        printf("\n Valor invalido! Digite um valor maior que zero:\n ");
        scanf("%d",&valor);
}
    printf("Valor lido: %d\n",valor);
}

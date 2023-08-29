#include <stdio.h>
#include <stdlib.h>

/*
        Aula 50: Estrutura de seleção switch case
        opções: - 1 = cadastrar produto
                - 2 = vender produto
                - 3 = buscar produto
                - 4 = imprimir produto
                - 0 = sair
*/


int main()
{
    int opcao;

    printf("1 - Cadastrar produto\n2 - Vender produto\n 3 - Buscar produto\n4 - Imprimir\n 5 - Sair\n");
    scanf("%d",&opcao);

    switch(opcao) {
    case 1:
            printf("\nCadastrando novo produto.\n");
            break; // quebrar
    case 2:
            printf("\n Vender produto\n");
            break;
    case 3:
            printf("\n Buscar produto\n");
            break;
    case 4:
            printf("\n Imprimir produto\n");
            break;
    case 5:
            printf("\n Saindo\n");
            break;
    default:
            printf("\n Opcao invalida!\n");

    }
    return 0;
}

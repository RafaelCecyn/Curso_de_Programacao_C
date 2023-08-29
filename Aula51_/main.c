#include <stdio.h>
#include <stdlib.h>

/*
        Aula 51: Estrutura de seleção switch case com caracter
        opções: - a = cadastrar produto
                - b = vender produto
                - c = buscar produto
                - d = imprimir produto
                - z = sair
*/


int main()
{
    char opcao;

    printf("a - Cadastrar produto\nb - Vender produto\nc - Buscar produto\nd - Imprimir\nz - Sair\n");
    scanf("%c",&opcao);

    switch(opcao) {
    case 'a':
            printf("\nCadastrando novo produto.\n");
            break; // quebrar
    case 'b':
            printf("\n Vender produto\n");
            break;
    case 'c':
            printf("\n Buscar produto\n");
            break;
    case 'd':
            printf("\n Imprimir produto\n");
            break;
    case 'z':
            printf("\n Saindo\n");
            break;
    default:
            printf("\n Opcao invalida!\n");

    }
    return 0;
}

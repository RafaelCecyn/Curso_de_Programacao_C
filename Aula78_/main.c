#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar
    um menu ao usuário da seguinte forma:
    1 – Somar
    2 – Subtrair
    3 – Multiplicar
    4 – Dividir
    0 – Sair

    Uma estrutura do tipo switch deve ser utilizada para realizar cada operação em um case. Após a
    escolha da operação, dois valores devem ser pedidos ao usuário para realizar a operação escolhida.
    Se a operação escolhida for a 4 o dividendo não pode ser zero, um novo valor deve ser solicitado. O
    programa deve funcionar até que o usuário escolha a opção 0 (opção de saída).
*/

int main()
{
    int opcao,num1,num2,soma,subtrair,multiplicar,dividir;

    do {
        printf("Escolha uma opcao:\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair\n");
        scanf("%d",&opcao);
        if (opcao > 0 && opcao < 5) {
            printf("Digite dois numeros:\n");
            scanf("%d%d",&num1,&num2);
        }

       switch(opcao) {
       case 0:
            printf("Saindo...\n");
            break;
        case 1:
            soma = num1 + num2;
            printf("Soma dos valores: %d\n",soma);
            break;
        case 2:
            subtrair = num1 - num2;
            printf("Subtracao dos valores: %d\n",subtrair);
            break;
        case 3:
            multiplicar = num1 * num2;
            printf("Multiplicacao dos valores: %d\n",multiplicar);
            break;
        case 4:
            while (num2 == 0) {
                printf("Digite um numero diferente de zero: ");
                scanf("%d",&num2);
            }
            dividir = num1 / num2;
            printf("Subtracao dos valores: %d\n",dividir);
            break;
        default:
            printf("Digite uma opcao valida.\n");
       }

    } while (opcao != 0);

    return 0;
}

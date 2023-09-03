#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de
    pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo
    será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
    escrever mensagem alguma).
    Exemplo de entrada:
    2 2
    3 -2
    -8 -1
    -7 1
    0 2
    Exemplo de saída:
    primeiro
    quarto
    terceiro
    segundo
*/

int main()
{
    int coordenada1, coordenada2;
    do {
        printf("Digite duas coordenadas:\n");
        scanf("%d%d",&coordenada1,&coordenada2);

        if (coordenada1 > 0 && coordenada2 > 0) {
            printf("Primeiro\n");
        }
        else if (coordenada1 < 0 && coordenada2 > 0) {
            printf("Segundo\n");
        }
        else if (coordenada1 < 0 && coordenada2 < 0) {
            printf("Terceiro\n");
        }
        else if (coordenada1 > 0 && coordenada2 < 0) {
            printf("Quarto\n");
        }
    } while (coordenada1 != 0 && coordenada2 != 0); // importante condicional no while os dois diferentes de zero
    return 0;
}

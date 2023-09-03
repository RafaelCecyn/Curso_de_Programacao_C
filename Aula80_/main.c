#include <stdio.h>
#include <stdlib.h>5


/*
    Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu guardar 1
    centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto
    dia, e assim por diante. Faça um programa para calcular quanto você terá ao final dos 30 dias.
*/

int main()
{
    int valor = 0;
    int potencia = 1;
    for (int i = 1; i <= 30; i++) {
        valor += potencia;
        potencia *= 2;
    }
    printf("O valor eh: %d",valor);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
    Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a
    massa inicial, em gramas, faça um programa que determine o tempo necessário para que essa massa
    se torne menor que 0,05 gramas.
*/

int main()
{
    int tempo = 0;
    float massa;
    printf("Digite a massa inicial: \n");
    scanf("%f",&massa);

    while (massa >= 0.05) {
        massa = massa / 2;
        tempo += 50;
    }

    printf("O tempo necessario foi: %d",tempo);
    return 0;
}

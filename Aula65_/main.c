#include <stdio.h>
#include <stdlib.h>

// Aula 65: Estrutura de repetição PARA decrescente

int main()
{
    int i = 0;
    /*
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    */

    // para (condição de início; condição de parada; incremento)
    for (i = 10; i >= 0; i--) {
        printf("%d \n", i);
    }
}

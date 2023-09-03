#include <stdio.h>
#include <stdlib.h>

// Aula 64: Estrutura de repetição PARA

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
    for (i = 0; i <= 10; i++) {
        printf("%d \n", i);
    }
}

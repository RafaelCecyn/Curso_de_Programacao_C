#include <stdio.h>
#include <stdlib.h>
#include <time.h> // biblioteca para pegar a hora atual do computador

/*
        Aula 104: Como gerar números aleatorios dentro de um intervalo?
*/

int main()
{
    int i;
    int num2[10];

    srand(time(NULL));

    for(i=0;i<10;i++)
        num2[i] = 1 + rand() % 100; // Pega o resto da divisao (numero maximo 99) e numero minimo 1


    printf("\n\n");
    for (i=0;i<10;i++){
        printf("%d \n",num2[i]);
    }
    printf("\n\n");

    return 0;
}

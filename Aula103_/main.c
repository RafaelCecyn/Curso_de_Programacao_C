#include <stdio.h>
#include <stdlib.h>
#include <time.h> // biblioteca para pegar a hora atual do computador

/*
        Aula 103: Como gerar números aleatorios para preencher um vetor?
*/

int main()
{
    int i;
    int num2[10];

    srand(time(NULL)); // guarda a semente

    for(i=0;i<10;i++)
        num2[i] = rand(); // Numeros aleatorios iguais (pseudoaleatorios)


    printf("\n\n");
    for (i=0;i<10;i++){
        printf("%d \n",num2[i]);
    }
    printf("\n\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
        Aula 133: Como descobrir o tamanho de uma string?

*/

int main()
{
    int i,tam = 0;
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    i = 0;
    while(palavras[i] != '\0'){
//         printf("%d = %c\n",i,palavras[i++]);
         i++;
         tam++;
    }
    printf("Tamanho: %d\n",tam);

    return 0;
}

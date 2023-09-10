#include <stdio.h>
#include <stdlib.h>

/*
        Aula 132: Como identificar o fim de uma string?

*/

int main()
{
    int i;
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"};
    /*
    for(i=0;i<55;i++){
        printf("%d = %d\n",i,palavras[i]);
    printf("\n");
    }
    */

    i = 0;
    while(palavras[i] != '\0'){
         printf("%d = %c\n",i,palavras[i++]);
         i++;
    }
    printf("\n");

    return 0;
}

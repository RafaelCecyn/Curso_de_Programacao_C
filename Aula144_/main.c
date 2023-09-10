#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Aula 144: Leia uma frase e diga se ela é palíndroma.
    roma me tem amor
    a grama e amarga
*/

int main()
{
    char palavra[50],copia[50];
    int i,tam,j=0,diferentes = 0;


    printf("Digite uma frase: ");
    scanf("%50[^\n]",palavra);

    // remover !, ,?,.

    for(i=0;i< strlen(palavra);i++){
        if(palavra[i] != '!' && palavra[i] != '?' && palavra[i] != ' ' && palavra[i]!= ','){
            copia[j++] = palavra[i];
        }
    }

    copia[j] = '\0';
    tam = strlen(palavra);
    tam--;

    for(i=0;i < strlen(palavra);i++) {
        if(copia[i] != copia[tam]){
                diferentes++;
        }
        tam--;
    }

    if(diferentes == 0)
        printf("\nEh palindroma...\n");
    else
        printf("\nNao eh palindroma...\n");

    return 0;
}

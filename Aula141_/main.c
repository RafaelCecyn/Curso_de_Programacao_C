#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Aula 141: Como dividir uma String com a função strtok()
*/

int main()
{
    char palavra[50] = {"Bom dia simpatia!"};
    char *pt;

    pt = strtok(palavra," ");
    while(pt) {
        printf("token: %s\n",pt);
        pt = strtok(NULL," ");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int i;

    for (i = 0; i<=10;i++)
        printf("%d ",i);

    i = 0;
    while (i<=10) {
        printf("\n%d ",i);
        i++;
    }
    */


    int i;
    do {
        printf("\nDigite um numero maior que zero: ");
        scanf("%d ",&i);
    } while(i <= 0);

    printf("Valor lido: %d",i);

}

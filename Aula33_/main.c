#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
    variável auxiliar.
*/

int main()
{
    int a,b;
    printf("Digite dois valores: \n");
    scanf("%d%d",&a,&b);
    printf("Os valores de a e b digitados foram: %d e %d\n",a,b);

    /*
        x = 10;
        y = 5;

        x = x + y -> 15
        y = x - y -> 10
        x = x - y -> 5

    */
    a = a + b;
    b = a - b;
    a = a - b;

    printf("Os valores de a e b digitados foram: %d e %d\n",a,b);
    return 0;
}

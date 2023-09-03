#include <stdio.h>
#include <stdlib.h>
/*
    Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N,
    inclusive N, se for o caso.
*/
int main()
{
    int n,i;
    printf("Digite um valor: ");
    scanf("%d",&n);

    for (i = 1; i<= n;i++) {
        if (i % 2 == 0) {
            printf("Numero: %d e quadrado: %d\n",i,i*i);
        }
    }
    return 0;
}

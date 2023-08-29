#include <stdio.h>
#include <stdlib.h>

/*
    Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
    para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
    “a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
    estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.
*/

int main()
{
    int a,b,aux;
    printf("Digite dois valores: \n");
    scanf("%d%d",&a,&b);
    printf("Os valores de a e b digitados foram: %d e %d\n",a,b);
    aux = a;
    a = b;
    b = aux;
    printf("Os novos valores de a e b sao: %d e %d\n",a,b);
    return 0;
}

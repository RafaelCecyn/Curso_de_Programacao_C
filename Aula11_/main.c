#include <stdio.h>
#include <stdlib.h>

/*
        Aula 11
    Ler sexo, idade, peso e altura
*/


int main()
{
    char sexo;
    int idade;
    float peso,altura;
    printf("Digite respectivamente: sexo, idade, peso e altura\n");
    scanf("%c%d%f%f",&sexo,&idade,&peso,&altura);
    printf("O seu sexo eh %c, sua idade eh %d, seu peso eh %.2f e sua altura eh %.2f. \n",sexo,idade,peso,altura);

    return 0;
}

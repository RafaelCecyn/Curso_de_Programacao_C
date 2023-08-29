#include <stdio.h>
#include <stdlib.h>

/*
        Aula 12
    Ler idade, peso, altura e sexo
*/


int main()
{
    char sexo;
    int idade;
    float peso,altura;
    printf("Digite respectivamente: idade, peso, altura e sexo\n");
    //scanf("%d%f%f%c",&idade,&peso,&altura,&sexo); // Sexo não está apresentando nada pois pega o enter ou espaço
    // buffer do teclado => 45\n56\n1.63\n
    scanf("%d%f%f %c",&idade,&peso,&altura,&sexo); // Espaço antes do %c desconsidera TAB,ENTER e ESPAÇO

    printf("O seu sexo eh %c, sua idade eh %d, seu peso eh %.2f e sua altura eh %.2f. \n",sexo,idade,peso,altura);

    return 0;
}

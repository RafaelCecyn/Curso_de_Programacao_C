#include <stdio.h>
#include <stdlib.h>

// Aula 99: Como criar um vetor?

int main()
{

    int idade;
    char sexo;
    float n1;

    int num1[10]; // vetor com 10 numeros inteiros
    int num2[] = {1,5,9,15,43}; // informando os numeros do vetor
    int num3[5]= {4,7,5}; // vetor com 5 elementos, as ultimas duas posicoes sao 0 quando falta
    int num4[5] = {1,2,3,4,5,6}; // o 6 elemento sera perdido
    int num5[5] = {0};// preenchendo com 0

    char letras[100];
    char vogais[5] = {'a','e','i','o','u'};

    float notas[3] = {7.5,8.3,9.5};

    return 0;
}

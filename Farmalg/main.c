#include <stdio.h>
#include <stdlib.h>
/*
    Faça um programa que leia uma tecla e apresente o código ASCII da tecla seguido de quebra de linha.


    int main()
{
    char tecla;
    scanf("%c",&tecla);
    printf("%d\n",tecla);
    return 0;
}
*/

/*
    E1_01) Faça um programa que leia um número de ponto flutuante e apresente em linhas separadas a parte inteira e a parte fracionária.

*/

/*
int main() {
    float x,f;
    int y;
    scanf("%f",&x);
    y = (int)x;
    f = x - y;
    printf("%d\n",y);
    printf("%f",f);
    return 0;
}
*/

/*
E1_07) Faça um programa que leia três números e os apresente em ordem crescente.
*/

/*
int main () {

    int num1,num2,num3;
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1 <= num2 && num1 <= num3) {
        printf("%d\n",num1);
        if (num2 <= num3) {
            printf("%d\n",num2);
            printf("%d\n",num3);
        }
        else {
            printf("%d\n",num3);
            printf("%d\n",num2);
        }
    }

    else if (num2 <= num1 && num2 <= num3) {
        printf("%d\n",num2);
        if (num1 <= num3) {
            printf("%d\n",num1);
            printf("%d\n",num3);
        }
        else {
            printf("%d\n",num3);
            printf("%d\n",num1);
        }
    }

    else if (num3 <= num1 && num3 <= num2) {
        printf("%d\n",num3);
        if (num1 <= num2) {
            printf("%d\n",num1);
            printf("%d\n",num2);
        }
        else {
            printf("%d\n",num2);
            printf("%d\n",num1);
        }
    }


}
*/

/*
        Faça um programa que leia dois números A e B e apresente o maior divisor comum dos dois números.
*/

/*

int main (){
    int num1,num2,mdc = 1,maior,i;
    scanf("%d%d",&num1,&num2);
    if (num1 > num2) {
        maior = num1;
    }
    else
        maior = num2;

    for (i=2;i <= maior; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            num1 = num1 / i;
            num2 = num2 / i;
            mdc *= i;
            i--;
        }
    }
    printf("%d",mdc);
    return 0;
}
*/

/*
    E1_05) Faça um programa que leia 10 números inteiros e apresente o maior (não utilize vetor/matriz).
*/
/*

int main() {
    int num,maior,i;
    scanf("%d",&maior);

    for (i=2;i <= 10;i++) {
        scanf("%d",&num);
        if (num > maior) {
            maior = num;
        }

    }
    printf("%d\n",maior);
    return 0;

}
*/

/*
    E1_06) Faça um programa que leia uma lista de números inteiros terminados por 0, para cada número lido o programa deve informar o número e se o número é par ou ímpar. Não utilize vetores/matrizes.
    mostre apenas "par" ou "impar" (sem acentos).
*/
/*
int main() {
    int num;
    do {
        scanf("%d",&num);

        if (num == 0) {
            break;
        }

        else if (num % 2 == 0) {
            printf("%d ",num);
            printf("par \n");
        }
        else {
            printf("%d ",num);
            printf("impar \n");
        }

    } while(1);
    return 0;
}
*/

/*
Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, apresente os valores contidos no vetor que sejam a moda do conjunto (os valores com maior ocorrência no vetor. No caso de empate, apresente os valores com igual frequência).
Entrada
1
4
4
5
5
2
3
6
8
10
Saída
4
5
*/
/*
int main() {
    int i,num[10];

    for (i=0;i<=10;i++){
        printf("Digite os valores:\n");
        scanf("%d",&num[i]);
    }

}
*/


/*
E2_20) Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, leia um número e procure esse número no vetor.
Se encontrar, apresente o índice da posição da primeira que ocorrência do número, caso contrário apresente o valor -1.
*/

/*
int main() {
    int i,num[10],num2,indiceEncontrado = -1;

    for(i= 0;i < 10;i++) {
        scanf("%d",&num[i]);
    }
    scanf("%d",&num2);
    for (i=0;i < 10;i++) {
        if(num[i] == num2) {
            indiceEncontrado = i;
            break;
        }
    }
    if (indiceEncontrado != -1) {
        printf("%d",indiceEncontrado);
    } else {
         printf("%d",indiceEncontrado);
    }

}
*/

/*
E2_21) Faça um programa que leia 10 valores e armazene-os em um vetor.
Na sequência, leia um número e procure esse número no vetor. E apresente o índice de todas as ocorrências localizadas, caso contrário -1.

*/
/*
int main() {
    int i,num[10],num2,indiceEncontrado = -1;

    for(i= 0;i < 10;i++) {
        scanf("%d",&num[i]);
    }
    scanf("%d",&num2);
    for (i=0;i < 10;i++) {
        if(num[i] == num2) {
            printf("%d\n",i);
            indiceEncontrado = i;
        }
    }
    if (indiceEncontrado == -1) {
        printf("%d",indiceEncontrado);
    }

}
*/

/*
    E2_11) Faça um programa que leia 10 números, armazene-os em um vetor e apresente os 5 (cinco) números que estão nas posições ímpares.
*/

/*
int main() {
    int i,num[10];

    for(i= 0;i < 10;i++) {
        scanf("%d",&num[i]);
    }
    for (i=0;i < 10;i++) {
        if(i % 2 != 0) {
            printf("%d\n",num[i]);
        }
    }
}
*/

/*
    E2_12) Faça um programa que leia uma matriz de inteiros de 3x3 e apresente os elementos da diagonal principal.
*/

/*
int main () {
    int i,j,mat1[3][3];

    for(i=0;i < 3; i++)
        for(j=0; j < 3; j++)
        scanf("%d",&mat1[i][j]);


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            if(i == j){
            printf("%d\n",mat1[i][j]);
            }
    }

    return 0;

}
*/

/*
    E2_13) Faça um programa que leia uma matriz de inteiros de 3x3 e apresente os elementos da diagonal secundária.
*/
/*
int main () {
    int i,j,mat1[3][3];

    for(i=0;i < 3; i++)
        for(j=0; j < 3; j++)
        scanf("%d",&mat1[i][j]);


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            if((i == 0 && j == 2) || (i == 1 && j == 1) || (i == 2 && j == 0)){
            printf("%d\n",mat1[i][j]);
            }
    }

    return 0;

}
*/

/*
    E2_14) Faça um programa que leia uma matriz de inteiros de 3x4 e apresente a soma de cada coluna. A saída deverá ter um número por linha.
*/
/*
int main () {
    int i,j,mat1[3][4],somaCol1 = 0,somaCol2 = 0,somaCol3 = 0,somaCol4 = 0;

    for(i=0;i < 3; i++)
        for(j=0; j < 4; j++)
        scanf("%d",&mat1[i][j]);


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++)
            if(j == 0) {
                somaCol1 += mat1[i][j];
            }
            else if(j == 1) {
                somaCol2 += mat1[i][j];
            }
            else if(j == 2) {
                somaCol3 += mat1[i][j];
            }
            else if(j == 3) {
                somaCol4 += mat1[i][j];
            }
    }
            printf("%d\n",somaCol1);
            printf("%d\n",somaCol2);
            printf("%d\n",somaCol3);
            printf("%d\n",somaCol4);

    return 0;

}
*/

/*
E2_18) Faça um programa que leia 10 valores e armazene-os em um vetor.
Na sequência, apresente os valores contidos no vetor, onde a diferença entre os valores contidos em dois elementos sucessivos não seja maior do que um.
Entrada
1
3
4
8
9
2
4
6
8
10
Saída
3 4
8 9
*/

/*

int main() {
    int i,vet[10];

    for(i=0;i<10;i++)
        scanf("%d",&vet[i]);

    for(i=0;i<10;i++)  {
        if(vet[i] - vet[i+1] == 1 || vet[i] - vet[i+1] == -1) {
            printf("%d %d\n", vet[i], vet[i+1]);
        }
    }

    return 0;
}

*/

/*
    E2_15) Faça um programa que leia uma matriz de inteiros de 3x4 e apresente os elementos em que a soma dos índices i e j sejam pares. Respeite a ordem de apresentação linha,coluna.

    a soma de cada coluna. A saída deverá ter um número por linha.
    Exemplo de entrada
    1 2 3 4
    5 6 7 8
    9 10 11 12
    Saída
    1
    3
    6
    8
    9
    11
*/

/*
int main () {
    int i,j,mat1[3][4];

    for(i=0;i < 3; i++)
        for(j=0; j < 4; j++)
        scanf("%d",&mat1[i][j]);


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++)
            if((i + j) % 2 == 0) {
                printf("%d\n",mat1[i][j]);
            }
    }
    return 0;
}
*/

/*

    E2_16) Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, leia dois valores inteiros que estejam entre 0 e 9 (índices a e b) e
           apresente os valores lidos (vetor) que estejam entre os índices a e b.
    Entrada
    1 2 3 4 5 6 7 8 9 10
    3 5
    saída
    4
    5
    6

*/
/*
int main() {
    int i,vet[10],a,b;

    for(i = 0; i < 10;i++) {
        scanf("%d",&vet[i]);
    }

    do {
        scanf("%d",&a);
    } while(a <= 0 || a >= 9);

    do {
        scanf("%d",&b);
    } while(b <= 0 || b >= 9);

     for(i = 0; i < 10;i++) {
        if(i >= a && i <= b )
        printf("%d\n",vet[i]);
    }
}
*/


/*
E2_17) Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, apresente os valores do maior para o menor.
Entrada
1
3
5
7
9
2
4
6
8
10
Saída
10
9
8
7
6
5
4
3
2
1
*/

/*
int main() {
    int i,j,vet[10],aux;

    for(i = 0; i < 10;i++) {
        scanf("%d",&vet[i]);
    }

    for(j=0;j < 10; j++) {
        for(i = 0; i < 9;i++) {
            if(vet[i] < vet[i+1]) {
                aux = vet[i+1];
                vet[i+1] = vet[i];
                vet[i] = aux;
            }
        }
    }

    for(i = 0; i < 10;i++) {
        printf("%d\n",vet[i]);
    }
}
*/

/*
E2_19) Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, apresente os valores contidos no vetor que sejam a moda do conjunto (os valores com maior ocorrência no vetor. No caso de empate, apresente os valores com igual frequência).
Entrada
1
4
4
5
5
2
3
6
8
10
Saída
4
5
*/
/*
int main() {
    int vetor[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    int frequencia[10] = {0}; //
    int maxFrequencia = 0;

    for (int i = 0; i < 10; i++) {
        int contador = 0;
        for (int j = 0; j < 10; j++) {
            if (vetor[j] == vetor[i]) {
                contador++;
            }
        }

        if (contador > maxFrequencia) {
            maxFrequencia = contador;
        }

        frequencia[i] = contador;
    }

    for (int i = 0; i < 10; i++) {
        if (frequencia[i] == maxFrequencia) {
            int j;
            for (j = 0; j < i; j++) {
                if (vetor[j] == vetor[i]) {
                    break;
                }
            }
            if (j == i) {
                printf("%d\n", vetor[i]);
            }
        }
    }
}
*/

/*
E25) Faça um programa que leia uma String e apresente todos os prefixos da string.
Exemplo 1:
Entrada:
pedra
saída:
p
pe
ped
pedr
pedra
*/
/*
int main() {
    char palavra[10],aux[10];
    int i;
    scanf("%10[^\n]",palavra);

    i = 0;
    while(palavra[i]){
        aux[i] = palavra[i];
        printf("%s\n",aux);
        i++;
    }
    return 0;
}
*/


/*
E31) Faça um programa que leia uma frase e apresente o número de palavras lidas. Considere todo símbolo não alfabético ou não numérico como delimitador.
Exemplo:
Entrada
A casa das 7 irmãs.
Saída:
5

*/
/*
int main() {
    char palavra[100];
    int i,contador=1;
    scanf("%100[^\n]",palavra);

    i = 0;

    while(palavra[i] != '\0'){
        if ((palavra[i] == ' ') || (palavra[i] == ':') ){
        contador++;
        }
        i++;
    }
    printf("%d",contador);
    return 0;

}
*/


/*
E22) Faça uma função que receba um vetor de char e um número e retorne no vetor os valores ‘0’ e ‘1’
correspondente ao valor binário de cada posição do número. Considere números de até 32 bits.
(Considere o vetor com 33 posições). Preserve os zeros a direita do digito significativo.
*/
#include <stdbool.h>
int main(void) {
int num;
char str[33];
scanf("%d",&num);
func(str,num);
printf("%s\n",str);
}
void func(char vet[], int num) {
    int i=0,a,aux,j;
    bool isNeg = false;
    if (num < 0) {
        num = num * -1;
        isNeg = true;
    }


    while(num > 0) {
        vet[i] = num % 2;
//      printf("%d",vet[i]);
        num = num / 2;
        i++;
    }

    for(a=0;a < (i/2);a++){
        aux = vet[a];
        vet[a] = vet[i-a-1];
        vet[i-a-1] = aux;
   }



   if (isNeg){
    vet[0] = '0' + 1;
   for(j=1;j<i+1;j++){
        vet[j] += '0';
        printf("\nVetor %d\n",vet[j]);
   }

   } else{
       for(j=0;j<i;j++){
        vet[j] += '0';
        printf("\nVetor %d\n",vet[j]);
   }
   }

   return vet;
}

/*
int main() {
    int num,vet[32],i=0,aux,a,j;
    printf("Digite um numero: ");
    scanf("%d",&num);

    while(num > 0) {
        vet[i] = num % 2;
        printf("\n%d\n",vet[i]);
        num = num / 2;
        i++;
    }

   for(a=0;a < (i/2);a++){
        aux = vet[a];
        vet[a] = vet[i-a-1];
        vet[i-a-1] = aux;
   }

   for(j=0;j<4;j++){
        printf("\nVetor %d\n",vet[j]);
   }
}
*/


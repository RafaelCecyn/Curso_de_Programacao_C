#include <stdio.h>
#include <stdlib.h>

/*
    Para uma turma de 45 alunos, construa um algoritmo que determine:
    a) A idade média dos alunos com menos de 1,70m de altura;
    b) A altura média dos alunos com mais de 20 anos.
*/

int main()
{
    int alunos = 0,idade,cont1 = 0,quantIdadeBaix = 0,quantAlturaMaior20=0;
    float altura,cont2 = 0,idadeMedia,alturaMedia;

    do {
        printf("Digite a sua idade: \n");
        scanf("%d",&idade);
        printf("Digite a sua altura: \n");
        scanf("%f",&altura);
        alunos++;
        if (altura < 1.70) {
            cont1 += idade;
            quantIdadeBaix++;
        }
        if (idade > 20) {
            cont2 += altura;
            quantAlturaMaior20++;
        }


    } while (alunos < 4);
    idadeMedia = (float)cont1 / quantIdadeBaix;
    alturaMedia = cont2 / quantAlturaMaior20;

    printf("A idade média dos alunos com menos de 1,70m de altura: %f\n",idadeMedia);
    printf("A altura média dos alunos com mais de 20 anos: %f\n",alturaMedia);
    return 0;
}

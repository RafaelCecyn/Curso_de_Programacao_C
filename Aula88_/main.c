#include <stdio.h>
#include <stdlib.h>

/*
    Foi feita uma pesquisa entre os habitantes de uma região e foram coletados os dados de idade,
    sexo (M/F) e salário de X pessoas (x deve ser informado pelo usuário). Faça um algoritmo que
    informe:
    a) a média de salário do grupo;
    b) a maior e a menor idade do grupo;
    c) a quantidade de mulheres com salário até R$2000,00.
*/


int main()
{
    char sexo;
    int idade,i,MaiorIdade = 0,MenorIdade = 99999,quantMulher2000 = 0,func;
    float salario,SomaSalario = 0;

    printf("Digite a quantidade de funcionarios: ");
    scanf("%d",&func);

    for (i = 0; i < func; i++){
        printf("Digite a sua idade, o seu sexo m ou f e seu salario.\n ");
        scanf("%d %c%f",&idade,&sexo,&salario);
        SomaSalario += salario;
            if (MenorIdade > idade) {
                MenorIdade = idade;
            }
            if (MaiorIdade < idade) {
                MaiorIdade = idade;
            }
            if (sexo == 'f' && salario <= 2000){
                quantMulher2000++;
            }
    }
    printf("A media de salario eh: %.2f\n",SomaSalario/func);
    printf("A maior e a menor idade do grupo:%d, %d\n",MaiorIdade,MenorIdade);
    printf("A quantidade de mulheres com salário até R$2000,00 %d",quantMulher2000);

    return 0;
}

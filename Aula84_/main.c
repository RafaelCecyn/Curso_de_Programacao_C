#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que calcule a média de salários de uma empresa, pedindo ao usuário a
    quantidade de funcionários e o salário de cada funcionário. Ao final, o programa deve imprimir a
    média dos salários informados, o salário mais alto e o salário mais baixo.
*/

int main() {
    int quantidade,i;
    float salario,totalSalarios = 0,salarioMaior = 0, salarioMenor = 99999;

    do {
        printf("Quantos funcionarios a empresa possui? ");
        scanf("%d",&quantidade);
    } while(quantidade < 0);

    for (i=i;i<=quantidade;i++) {
        printf("%d salario: ",i);
        scanf("%f",&salario);

        totalSalarios += salario;
        if (salarioMenor > salario)
            salarioMenor = salario;
        if (salarioMaior < salario)
            salarioMaior = salario;
    }

    printf("Salario medio: %.2f",totalSalarios/quantidade);
    printf("Salario maior: %.2f",salarioMaior);
    printf("Salario menor: %.2f",salarioMenor);
    return 0;

}

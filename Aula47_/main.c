#include <stdio.h>
#include <stdlib.h>

/*

    Aula 47: Operador lógico e (&&)
    TABELA VERDADE  a  b    a & b
                    v  v      v
                    v  f      f
                    f  v      f
                    f  f      f
*/



int main()
{
    int idade;
    char sexo;
    printf("Digite seu sexo f ou m e sua idade: \n");
    scanf("%c%d", &sexo, &idade);

    if (sexo == 'm' && idade == 18)
        printf("Alistamento obrigatorio!\n");
    else
        printf("Dispensado!\n");

    return 0;
}

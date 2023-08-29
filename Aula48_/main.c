#include <stdio.h>
#include <stdlib.h>

/*

    Aula 48: Operador lógico ou (||)
    TABELA VERDADE  a  b    a & b
                    v  v      v
                    v  f      v
                    f  v      v
                    f  f      f
*/



int main()
{
    int idade;

    printf("Digite sua idade: \n");
    scanf("%d",&idade);

    if (idade <= 5 || idade >= 60)
        printf("Tem direito a gratuidade!\n");
    else
        printf("Não tem direito a gratuidade!\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
    Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O
    monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com
    grãos de trigo dispostos em um tabuleiro de xadrez (que possui 64 casas), de tal forma que o
    primeiro quadro deveria conter apenas um grão e os quadros subsequentes, o dobro do quadro
    anterior. Crie um programa para calcular o total de grãos de trigo que o monge recebeu.
*/

int main()
{
    int i,valor = 0,potencia = 1;
    for (i=1;i<=4;i++){
        valor += potencia;
        potencia *= 2;
    }
    printf("O total de graos eh: %d",valor);
    return 0;
}

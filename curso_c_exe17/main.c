#include <stdio.h>
#include <stdlib.h>
/*
Ler a hora de in�cio e a hora de fim de um jogo de Xadrez (considere apenas horas inteiras, sem os
minutos) e calcule a dura��o do jogo em horas, sabendo-se que o tempo m�ximo de dura��o do jogo �
de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte.


*/

int main(){

    float inicio,fim,tempo;

    printf("=====================\n");
    printf("JOGO DE XADREZ\n");
    printf("=====================\n");

    printf("DIGITE O HORARIO DO COMECO DA PARTIDA: ");
    scanf("%f", &inicio);
    printf("DIGITE O HORARIO DO FIM DA PARTIDA: ");
    scanf("%f", &fim);

    tempo = fim - inicio;

    printf("A DURACAO DA PARTIDA FOI DE:  %.2f horas ", tempo);


    return 0;
}

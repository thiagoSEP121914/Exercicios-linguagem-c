#include <stdio.h>
#include <stdlib.h>
/*
Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 25,00, receberá
ainda um desconto de 10% sobre este total. Escreva um algoritmo para ler a quantidade (em Kg) de
morangos e a quantidade (em Kg) de maças adquiridas e escreva o valor a ser pago pelo cliente
*/
int main(){
    //variaveis
    int morango,maca,valor, desconto = 0;

    printf("#########################\n");
    printf("ARMAZEM TAVARES\n");
    printf("#########################\n");

    printf("Digite a quantidade de morangos: Kg  ");
    scanf("%d", &morango);
    printf("Digite a quantidade de macas: Kg  ");
    scanf("%d", &maca);

    valor = (morango * 2.50) + (maca * 1.80);

    if(morango || maca > 5){

        valor = (morango * 2.20) + (maca * 1.50);

    }else if(morango + maca > 8 || valor > 25){

        valor = valor -(valor * 0.10);
        desconto = 10;

    }

    printf("O TOTAL A SER PAGO E %d\nODESCONTO E DE %d", valor,desconto);
    return 0;
}

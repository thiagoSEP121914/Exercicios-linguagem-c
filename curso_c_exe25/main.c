#include <stdio.h>
#include <stdlib.h>

/*
Fa�a um algoritmo para ler: a descri��o do produto (nome), a quantidade adquirida e o pre�o
unit�rio. Calcular e escrever o total (total = quantidade adquirida * pre�o unit�rio), o desconto e o total
a pagar (total a pagar = total - desconto), sabendo-se que:
 - Se quantidade <= 5 o desconto ser� de 2%
 - Se quantidade > 5 e quantidade <=10 o desconto ser� de 3%
 - Se quantidade > 10 o desconto ser� de 5%

*/


int main(){
    //variaveis
    char nome[50];
    int preco,quantidade, total,total_pagar,desconto;


    printf("MERCADINHO TAVARES \n");
    printf("DIGITE O NOME DO PRODUTO:  ");
    scanf("%s", &nome);
    printf("DIGITE O PRECO: ");
    scanf("%d", &preco);
    printf("DIGITE A QUANTIDADE ADQUIRIDA: ");
    scanf("%d", &quantidade);

     total = quantidade * preco;

    if(quantidade > 10){

        desconto = total * 0.05;

    } else if( quantidade > 5 && quantidade <= 10){

        desconto = total * 0.03;

    }else{
        desconto = total * 0.02;


    }
    total_pagar = total - desconto;

    printf("O TOTAL A PAGAR E DE: %d; ", total_pagar);

    return 0;
}

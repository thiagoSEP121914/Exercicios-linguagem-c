#include <stdio.h>
#include <stdlib.h>


/*
Ler o ano atual e o ano de nascimento de uma pessoa. Escrever uma mensagem que diga se ela
poderá ou não votar este ano (não é necessário considerar o mês em que a pessoa nasceu)
*/
int main(){
    //variaveis
    int ano_atual,ano_nasc,idade;


    printf("Digite o ano atual: \n");
    scanf("%d", &ano_atual);

    printf("Digite o ano de nascimento para poder votar: \n");
    scanf("%d", &ano_nasc);

    idade = ano_atual - ano_nasc;

    if(idade >= 18){

        printf("O cidadao estar apto a votar: ");

    }else{

        printf("O cidadao nao estar apto a votar pois é menor que 18: ");

    }



    return 0;
}

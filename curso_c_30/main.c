#include <stdio.h>
#include <stdlib.h>
/*
50) Escreva um algoritmo para imprimir os números de 1 (inclusive) a 10 (inclusive) em ordem
crescente e decrescente.
Reescreva o exercício 50 utilizando a estrutura REPITA e um CONTADOR.
*/
int main(){
    //variaveis
    int contador = 10;

    do{
        printf("%d\n", contador);
        contador--;



    }while(contador >= 0);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/*
Escreva um algoritmo para imprimir os números de 1 (inclusive) a 10 (inclusive) em ordem
crescente.
*/
int main(){
    int contador = 11;

    while(contador > 0){
        printf("%d\n", contador);
        contador-= 1;

    }

    return 0;

}

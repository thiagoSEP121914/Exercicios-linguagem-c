#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Crie um programa que contenha uma func¸ao que
permita passar por par ˜ ametro dois ˆ
numeros inteiros A e B. A func¸ ´ ao dever ˜
a calcular a soma entre estes dois n ´ umeros e ´
armazenar o resultado na variavel A.
Esta func¸ ´ ao n ˜ ao dever ˜ a possuir retorno, mas dever ´ a´
modificar o valor do primeiro parametro. Imprima os valores de
A e B na func¸ ˜ ao principal
*/

void calcula(int *x,int *y) {

    *x+= *y;

}

int main() {

    int A = 10, B = 10;

    calcula(&A, &B);

    printf("O dobro de a eh: A = %d", A);

    getchar();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 Fac¸a um programa que leia dois valores inteiros e
 chame uma func¸ao que receba estes ˜
2valores de entrada e retorne o
maior valor na primeira variavel e o
menor valor na ´
segunda variavel. Escreva o conte ´ udo das 2 vari ´ aveis na tela.
*/

void trocaMaior(int *x, int *y) {

    if(*y > *x){
        int temp = *x;
        *x = *y;
        *y = temp;
    }
}




int main() {

    int x = 20, y = 10;


    trocaMaior(&x, &y);
    printf("Os valores ordenados sao: x = %d\n y =%d", x,y);


    return 0;
}

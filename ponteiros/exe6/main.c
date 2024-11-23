#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Elaborar um programa que leia dois valores inteiros (A e B).
Em seguida fac¸a uma func¸ao˜que retorne a soma do dobro dos dois numeros lidos.
A func¸ ´ ao dever ˜ a armazenar o dobro ´
de A na propria vari ´ avel A e o dobro de B na
propria variavel B
*/

void Dobro(int *x, int *y) {

    *x+= *x;
    *y+= *y;

}


int main() {

    int A , B = 20;

    Dobro(&A, &B);

    printf("O dobro de A = %d\n O dobro de B = %d", A, B);

    getchar();

    return 0;
}

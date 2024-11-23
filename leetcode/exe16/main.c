#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
. Considere a seguinte declarac¸ao: int A, *B, **C, ***D; Escreva um programa que leia a ˜
variavel a e calcule e exiba o dobro, o triplo e o qu ´ adruplo desse valor utilizando apenas ´
os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D
o quadruplo
*/


int main() {
    int A = 2;
    int *B,**C, ***D;

    B = &A;
    C = &B;
    D = &C;

    printf("O dobro de A eh: %d\n", 2*(*B));
    printf("O triplo de B eh %d\n", 3 *(**C));
    printf("O Quadruplo de c eh %d\n", 4*(***D));

    return 0;
}

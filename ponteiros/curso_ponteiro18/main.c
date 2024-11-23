#include <stdio.h>
#include <stdlib.h>
/*
Considere a seguinte declarac¸ao: int A, *B, **C, ***D; Escreva um programa que leia a ˜
variavel a e calcule e exiba o dobro, o triplo e o qu ´ adruplo desse valor utilizando apenas ´
os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D
o quadruplo
*/
int main() {
    int a;
    int *b,**c,***d;

    b = &a;
    c = &b;
    d = &c;



    printf("Digite um valor para a: ");
    scanf("%d",&a);

    printf("O Dobro de A eh: %d\n",*b * 2);
    printf("O triplo de A eh: %d\n",**c * 3);
    printf("O Quadruplo de A eh %d\n", ***d * 4);


    return 0;
}

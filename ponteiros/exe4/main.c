#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Fac¸a um programa que leia 2 valores inteiros e
chame uma func¸ao que receba estas ˜
2 variaveis e troque o seu conte ´ udo,
ou seja, esta func¸ ´ ao˜ e chamada passando
duas ´
variaveis A e B por exemplo e, ap ´
os a execuc¸ ´ ao da func¸ ˜ ao, A conter ˜ a o valor de B e B ´
tera o valor de A.
*/

void trocaValores(int *x, int *y) {

    int temp = *x;
    *x = *y;
    *y = temp;

}


int main() {

   int x = 10, y = 20;

   printf("Antes da funcao: x = %d\ny = %d\n",x, y);

   trocaValores(&x, &y);

   printf("Depois da funcao: x = %d\ny= %d", x , y);

   getchar();

   return 0;
}

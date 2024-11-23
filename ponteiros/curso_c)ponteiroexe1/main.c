#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de ´
cada variavel usando os ponteiros. Imprima os valores das vari ´ aveis antes e ap ´ os a ´
modificac¸ao.
*/

int main(){
   int num = 10;
   float num1 = 1.50;
   char chrr = 'A';
   int *ptrint = &num;
   float *ptfloat = &num1;
   char *ptrch = &chrr;

   printf("antes do ponteiro\nint:%d\nfloat:%f\nchar: %c", num,num1, chrr);

   *ptrch = 'B';
   *ptfloat = 3.00;
   *ptrint = 40;

    printf("\ndepois do ponteiro\nint:%d\nfloat:%f\nchar: %c", *ptrint,*ptfloat, *ptrch);


    return 0;
}

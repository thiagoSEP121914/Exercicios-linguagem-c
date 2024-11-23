#include <stdio.h>
#include <stdlib.h>
 /*Crie uma func¸ao que receba como par ˜ ametro um array e o imprima. N ˆ ao utilize ˜ ´ındices
para percorrer o array, apenas aritmetica de ponteiros
*/

void imprimir(int *numero) {

    int *ponteiro = numero;

    while (*ponteiro != 0 ){
        printf("%d", *ponteiro);
        ponteiro++;
        printf("\n");
    }

}

int main() {
   int numero[5] ={1,2,3,4,5};

    imprimir(numero);

    return 0;
}


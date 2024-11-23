#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Crie uma func¸ao que receba como par ˜ ametro um array e o imprima. N ˆ ao utilize ˜ ´ındices
para percorrer o array, apenas aritmetica de ponteiros.
*/

void lista(int * vet) {
    int *pont = vet;
    int i = 0;

      while(i < 5){
        printf("%d\n", *pont);
        pont++;
        i++;
    }
}


int main() {
    printf("Hello world!\n");

    int vet[5] = {1,2,3,4,5};
    int i = 0;

    lista(vet);

    return 0;
}

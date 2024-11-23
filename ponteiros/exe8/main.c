#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Crie um programa que contenha um array de float
contendo 10 elementos. Imprima o
enderec¸o de cada posic¸ao desse array.
*/

int main() {

    int vet[10] = {1,5,10,15};
    int tam = sizeof(vet)/sizeof(vet[0]);
    int *ptv = vet;

    for(int i = 0; i< tam; i++){
        printf("O endereco: %p\n",ptv++);
    }
    getchar();

    return 0;
}

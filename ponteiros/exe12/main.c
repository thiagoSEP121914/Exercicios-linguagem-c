#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Crie um programa que contenha um array contendo 5 elementos
inteiros. Leia esse array
do teclado e imprima o enderec¸o das posicoes
contendo valores pares
*/

void lerVet(int *vetor) {
    int *p = vetor;

    for(int i = 0; i < 5; i++){
        printf("Digite o valor do numero: ");
        scanf("%d", p+i);

    }


}


void imprimirVet(int *vetor) {
    int *p = vetor;
    for(int i = 0; i < 5; i++){
        if(*(p+i) % 2 == 0)
            printf("VALOR: %d\nENDERECO: %p\n\n", *(p+i), p+i);
    }
}

int main() {
    int vet[5];

    lerVet(vet);
    imprimirVet(vet);

    return 0;
}

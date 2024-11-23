#include <stdio.h>
#include <stdlib.h>
/*
Implemente uma função que realize a busca binária em um vetor de inteiro
s ordenados. A função deve retornar o índice
do elemento procurado ou -1 se o elemento não estiver no vetor.
*/



int main() {

    int vet[] = {1, 3, 5, 7, 9, 11, 15, 17, 19};
    int tam = sizeof(vet)/sizeof(vet[0]);
    int numero;
    printf("Digite o numero: ");
    scanf("%d", &numero);

    if (buscaBinaria(vet, tam, numero) != -1) {
        printf("O indice eh: %d ", buscaBinaria(vet, tam, numero));
    } else {
        printf("elemento nao encontrado!");
    }

    return 0;
}

int buscaBinaria(int *vet, int tam, int numero) {

    int inicio = 0;
    int fim = tam -1;

    while(inicio <= fim){
        int meio = inicio + (fim - inicio)/2;

        if (vet[meio]== numero){
            return meio;
        }
        if (vet[meio] > numero){
            fim = meio -1;
        } else {
            inicio = meio +1;
        }
    }
    return -1;
}

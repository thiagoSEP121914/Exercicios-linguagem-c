#include <stdio.h>
#include <stdlib.h>
/*
Exercício 3: Primeiro e Último Ocorrência
Dado um vetor de inteiros ordenado, escreva uma função que utilize a busca binária para encontrar o
índice da primeira e da última ocorrência de um dado valor no vetor.
*/
#include <stdio.h>
#include <stdlib.h>

// Declaração das funções antes do main
int primeiraOcorrencia(int *vet, int tam, int num);
int ultimaOcorrencia(int *vet, int tam, int num);

int main() {
    int vet[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 14};
    int tam = sizeof(vet)/sizeof(vet[0]);

    int num = 4;

    printf("Primeira ocorrência do número %d é: %d", num, primeiraOcorrencia(vet, tam, num));
    printf("\nÚltima ocorrência do número %d é: %d", num, ultimaOcorrencia(vet, tam, num));

    return 0;
}

int primeiraOcorrencia(int *vet, int tam, int num) {
    int inicio = 0;
    int fim = tam - 1;
    int resultado = -1;

    while(inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if(vet[meio] == num) {
            resultado = meio;
            fim = meio - 1; // Continua buscando na metade esquerda
        } else if (vet[meio] > num) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }

    return resultado;
}

int ultimaOcorrencia(int *vet, int tam, int num) {
    int inicio = 0;
    int fim = tam - 1;
    int resultado = -1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if(vet[meio] == num) {
            resultado = meio;
            inicio = meio + 1; // Continua buscando na metade direita
        } else if(vet[meio] > num) { // Corrigido para else if
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }
    return resultado;
}


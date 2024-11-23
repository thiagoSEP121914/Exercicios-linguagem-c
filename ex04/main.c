#include <stdio.h>
#include <stdlib.h>
/*
Exerc�cio 3: Primeiro e �ltimo Ocorr�ncia
Dado um vetor de inteiros ordenado, escreva uma fun��o que utilize a busca bin�ria para encontrar o
�ndice da primeira e da �ltima ocorr�ncia de um dado valor no vetor.
*/
#include <stdio.h>
#include <stdlib.h>

// Declara��o das fun��es antes do main
int primeiraOcorrencia(int *vet, int tam, int num);
int ultimaOcorrencia(int *vet, int tam, int num);

int main() {
    int vet[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 14};
    int tam = sizeof(vet)/sizeof(vet[0]);

    int num = 4;

    printf("Primeira ocorr�ncia do n�mero %d �: %d", num, primeiraOcorrencia(vet, tam, num));
    printf("\n�ltima ocorr�ncia do n�mero %d �: %d", num, ultimaOcorrencia(vet, tam, num));

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


#include <stdio.h>
#include <stdlib.h>
// Algoritimos de ordenacao de vetor

int main() {
    int vet[] = {3, 4, 7, 9, 2, 5, 8, 1};
    int tam = sizeof(vet)/sizeof(vet[0]);
    int novArray[tam];

    ordenacao(vet, tam, novArray);

    for (int i = 0; i < tam; i++) {
        printf("%d ", novArray[i]);
    }
    return 0;
}

int buscaMenor(int *vet, int tam) {
    int menor = vet[0];
    int menorIndice = 0;

    for (int i = 0; i < tam; i++){

        if (vet[i] < menor) {
            menor = vet[i];
            menorIndice = i;
        }

    }
    return menorIndice;
}


void ordenacao(int *vet, int tam, int *novArray) {

    for(int i = 0; i < tam; i++) {
        int menor = buscaMenor(vet, tam - i);
        novArray[i] = vet[menor];

        for (int j = menor; j < tam - i - 1; j++) {
            vet[j] = vet[j+1];
        }
    }

}

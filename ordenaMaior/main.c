#include <stdio.h>
#include <stdlib.h>
//ALGORITIMO DE ORDEM DECRESCENTE
int main() {

    int vet[] = {2, 3, 7, 5, 4, 3, 1, 9, 8, 10};
    int tam = sizeof(vet)/sizeof(vet[0]);
    int novo[tam];

    ordenacaoMaior(vet, tam, novo);

    for (int i = 0; i < tam; i++){
        printf("%d ", novo[i]);
    }

    return 0;
}

int buscaMenor(int *vet, int tam) {
    int menor = vet[0];
    int indiceMenor = 0;

    for (int i = 0; i < tam; i++) {
        if(vet[i] < menor){
            menor = vet[i];
            indiceMenor = i;
        }
    }
    return indiceMenor;
}

void ordenacao(int *vet, int tam, int *arrai) {

    for (int i = 0; i < tam; i++) {
        int menor = buscaMenor(vet, tam);
        arrai[i] = vet[menor];

        for (int j = menor; j < tam - i -1; j++) {
            vet[j] = vet[j+1];
        }

    }

}
int buscaMaior(int *vet, int tam){
    int maior = vet[0];
    int indiceMaior = 0;

    for(int i = 0; i < tam; i++) {
        if(vet[i] > maior) {
            maior = vet[i];
            indiceMaior = i;
        }
    }
    return indiceMaior;
}


void ordenacaoMaior(int *vet, int tam, int *svou){
    for(int i = 0; i < tam; i++) {
        int maior = buscaMaior(vet, tam-i);
        svou[i] = vet[maior];

        for(int j = maior; j < tam - i - 1; j++ ){
            vet[j] = vet[j+1];
        }
    }

}

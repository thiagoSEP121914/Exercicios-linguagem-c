#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[] = {1, 2, 4, 6, 8, 10};
    int tam = sizeof(vet)/sizeof(vet[0]);
    int num = 8;
    int busca = buscaBinaria(vet, tam, num);

    if(busca != -1){
        printf("O indicedo numero %d eh %d", num, busca);
    }


    return 0;
}

int buscaBinaria(int *vet, int tam, int num) {
    int inicio = 0;
    int fim = tam -1;

    while(inicio <= fim) {

        int meio = inicio +(fim - inicio);
        if (vet[meio]== num){
            return meio;
        }else if(vet[meio] > num){
            fim = meio -1;
        }else{
            inicio = meio + 1;
        }
    }
    return -1;
}


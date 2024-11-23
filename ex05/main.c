#include <stdio.h>
#include <stdlib.h>

int main() {

    int vet[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int tam = sizeof(vet)/sizeof(vet[0]);
    int num;


    printf("Digite um numero para busca-lo: ");
    scanf("%d", &num);

    int indice = buscaBinaria(vet, tam, num);

    if (indice != -1){
        printf("A primeira ocorrecia eh: %d", indice);
    }else {
        printf("O numero nao existe!");
    }

    return 0;
}

int buscaBinaria(int *vet, int tam, int num) {

    int inicio = 0;
    int fim = tam -1;

    while (inicio <= fim) {
        int meio = inicio +(fim - inicio)/2;

        if(vet[meio] == num) {
            return meio;
        } else if(vet[meio] > num){
            fim = meio -1;
        } else {
            inicio = meio +1;
        }
    }
        return -1;
}

#include <stdio.h>
#include <stdlib.h>

/*
Implemente uma função que faça a busca binária em um vetor de strings ordenadas lexicograficamente.
A função deve retornar o índice da string procurada ou -1 se não for encontrada.
*/

int main() {

    char* vet[] = {"a", "b", "c", "d", "e", "f", "g"};
    int tam = sizeof(vet)/sizeof(vet[0]);
    char letra[2];


    strcpy(letra, "c");

    printf("%d", buscaBinaria(vet, tam, letra));



    return 0;
}

int buscaBinaria(char* vet[], int tam, char *letra) {
    int inicio = 0;
    int fim = tam -1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio)/2;
        int comparacao = strcmp(vet[meio], letra);

        if (comparacao == 0){
            return meio;
        }

        if (vet[meio] > comparacao){
            fim = meio -1;
        } else {
            inicio = meio + 1;

        }
    }
    return -1;
}

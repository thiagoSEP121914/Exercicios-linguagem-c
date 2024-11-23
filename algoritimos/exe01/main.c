#include <stdio.h>
#include <stdlib.h>
/*
Exercício 1: Busca Binária em uma Lista Ordenada
Dada a seguinte lista ordenada de números inteiros, aplique a busca binária para encontrar o índice de um elemento específico ou indicar que o elemento não está presente:

Lista: [2, 4, 6, 8, 10, 12, 14, 16, 18, 20]

Encontre o índice do número 12.
Encontre o índice do número 5.
*/

int busca(int *lista, int tam, int item) {
    int baixo = 0;
    int alto = tam-1;
    int meio = 0;

    while(baixo <= alto){
        meio = (alto + baixo)/2;
        int chute = lista[meio];

        if(chute == item){
            return meio;
        } if(chute > item){
            alto = meio - 1;
        } else {
            baixo = meio-1;
        }
    }
    return -1;
}

int main() {
    int num;
    int cpu = 0;
    int alto = 100+1;
    int baixo = 0;
    int meio = 0;
    int cont = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while(cpu != num){
        meio = (alto + baixo)/2;
        cpu = meio;

        printf("%d tentativa: %d\n", cont+1, cpu);
        cont++;

        if(cpu > num){
            alto = meio-1;
        } else{
            baixo = meio+1;
        }
    }



    return 0;
}

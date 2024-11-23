#include <stdio.h>
#include <stdlib.h>

int negativos(float *vet) {
    int i = 0;
    int N = 0;

    while(*vet != 0){
        if(*vet < 0) {
            N++;
        }
        vet++;
    }

    return N;
}

int main() {
    float vet[5] = {-1, -3, -4, -5, -5};
    int quantidade;

    quantidade = negativos(vet);

    printf("A quantidade de negativos eh: %d", quantidade);

    return 0;
}

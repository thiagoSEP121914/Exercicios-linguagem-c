#include <stdio.h>
#include <stdlib.h>

void maiorelmec(int *vetor, int tam, int *maior, int *cont) {
    *maior = vetor[0];
     *cont = 1;

    for(int i = 0; i < tam; i++){
        if(vetor[i] > *maior){
            *maior = vetor[i];
             *cont = 1;
    } else if (vetor[i] == *maior){
                (*cont)++;
       }

    }
}


int main() {
    int vetor[9] = {5, 2, 15,3,7,15,8,6,15};
    int tam = sizeof(vetor) / sizeof(vetor[0]);
    int maior, contagem;

    maiorelmec(vetor,tam, &maior, &contagem);

    printf("O maior elemento eh: %d\n", maior);
    printf("A quantidade de vezes que aparece eh: %d", contagem);
    return 0;
}

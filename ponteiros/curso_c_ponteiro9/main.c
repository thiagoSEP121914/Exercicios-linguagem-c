#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int somaVetor(int vetor[], const int n) {

    int soma = 0;
    int *ponteiro;
    int *const finalvetor = vetor + n;

    for(ponteiro = vetor; ponteiro < finalvetor;ponteiro++){
        soma+= *ponteiro;
    }
    return soma;

}


int main(){
    int vetor[10] = {5,5,5,5,5,5,5,5,5,5};

    printf("A soma dos membros do vetor = %d", somaVetor(vetor, 10));
    return 0;
}

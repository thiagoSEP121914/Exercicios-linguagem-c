#include <stdio.h>
#include <stdlib.h>

int divisiveis(int mini, int maxi, int B){

    int qtd = 0;
    for(int i = mini; i <= maxi; i++){
        if(i % B == 0){
            qtd++;
        }
    }

    return qtd;
}


void aloca(int **ptr, int mini,int tamanho, int A){
    tamanho;
    *ptr = (int *)malloc(tamanho * sizeof(int));

    if(*ptr == NULL){
        exit(1);
    }


}

int main() {

    int min = -1, max = 0,i = 0,A;
    int *vetor, tamanho;

    while(min < 0){
        printf("Digite o numero MIN: ");
        scanf("%d", &min);

        if(min < 0)
            printf("INVALIDO!\n");
    }

    while(max <= min){
        printf("Digite o numero MAX: ");
        scanf("%d", &max);

        if (max <= min)
            printf("INVALIDO!\n");
    }

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    tamanho = divisiveis(min, max, A);
    aloca(&vetor, min, tamanho, A);

    int count = 0;
    for(int j = min; j <= tamanho; j++){
        if(j % A == 0){
            vetor[count] = j;
            count++;
        }

    }

    for(i; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }

    free(vetor);
    return 0;


}

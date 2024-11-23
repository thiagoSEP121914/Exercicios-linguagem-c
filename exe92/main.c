#include <stdio.h>
#include <stdlib.h>

// faça um programa que leia um numero e remova o de um vetor

void removerElemento(int *vet, int *tam,int item){
    int temp = 0;

    for(int i = 0; i < tam; i++){
        if(vet[i] != item){
            vet[temp] = vet[i];
            temp++;

        }
    }
    *tam = temp;
}

int main(){


    int num;
    int tam = 6;
    int *vetor = (int*)malloc(tam * sizeof(int));

    for(int i = 0; i < 6; i++){
        vetor[i] = i;
    }



    printf("Digite o numero que deseja excluir: ");
    scanf("%d", &num);

    removerElemento(vetor, &tam, num);

    vetor = (int *)realloc(vetor, tam * sizeof(int));


    for(int i = 0; i < tam; i++){
        printf("%d ", vetor[i]);
    }

    free(vetor);
    return 0;
}

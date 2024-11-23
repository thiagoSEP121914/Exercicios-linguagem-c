#include <stdio.h>
#include <stdlib.h>
/*
Escreva um programa que leia um número N (entre 1 e 50) e em seguida leia N números reais em um vetor A. O
programa deve separar os valores lidos em A em outros dois vetores NEG e POS, o primeiro contendo somente os
valores negativos e o segundo contendo os valores positivos e zero. Apresentar na tela os vetores NEG e POS e a
quantidade de valores contidos em cada um.
*/

int qtdNegativo(int *vet, int tam) {

    int qtdN = 0;

    for(int i = 0; i < tam; i++){
        if(vet[i] < 0){
            qtdN++;
        }
    }

    return qtdN;
}

int qtdPositivo(int *vet, int tam) {

    int qtdM = 0;

    for(int i = 0; i < tam; i++){
        if(vet[i] >= 0){
            qtdM++;
        }
    }

    return qtdM;
}

int main() {

    int N = 0, i = 0, valor;
    int *vetor;
    int qtdPos, qtdNeg;
    int *Neg, *Pog;


    do {

        printf("Digite um numero: ");
        scanf("%d", &N);


    }while(N < 1 || N > 50);

    vetor =(int*)malloc(N * sizeof(int));


    while(i < N){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);
        vetor[i] = valor;
        i++;
    }

    printf("Os valores digitados foram: \n");
    for(int k = 0; k < N; k++){
        printf("%d ", vetor[k]);
    }

    qtdPos = qtdPositivo(vetor, N);
    qtdNeg = qtdNegativo(vetor, N);

    Pog =(int *)malloc(qtdPos * sizeof(int));
    Neg =(int *)malloc(qtdNeg * sizeof(int));

    int indNeg = 0, indPog = 0;
    for(int k = 0; k < N; k++){
        if(vetor[k] < 0){
            Neg[indNeg] = vetor[k];
            indNeg++;
        } else {
            Pog[indPog] = vetor[k];
            indPog++;
        }
    }

    printf("\nA quantidade positivos digitados foram: %d\n", qtdPos);
    for(int k = 0; k < qtdPos; k++){
        printf("%d ", Pog[k]);
    }

    printf("A quantidade Negativos digitados foram: %d\n", qtdNeg);
    for(int k = 0; k < qtdNeg; k++){
        printf("%d ", Neg[k]);
    }

    free(vetor);
    free(Neg);
    free(Pog);


    return 0;
}

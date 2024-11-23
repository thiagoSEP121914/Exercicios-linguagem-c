#include <stdio.h>
#include <stdlib.h>

/*
Faça um algoritmo para ler um valor N qualquer (que será o tamanho dos vetores). Após, ler dois
vetores A e B (de tamanho N cada um) e depois armazenar em um terceiro vetor Soma a soma dos
elementos do vetor A com os do vetor B (respeitando as mesmas posições) e escrever o vetor Soma.
*/

int main(){
    //variaveis
    int n;


    //lendo o tamanho do vetor;
    printf("DIGITE O TAMANHO DO VETOR: ");
    scanf("%d", &n);
    // criando vetores na memoria
    int vetor1[n],vetor2[n],vetor3[n];

    // lendo vetores
    printf("PRIMEIRO VETOR\n");
    for(int i = 0; i < n; i++){
        printf("DIGITE UM NUMERO:");
        scanf("%d", &vetor1[i]);

    }
    printf("SEGUNDO VETOR\n");
    for(int i = 0; i < n; i++){

        printf("DIGITE UM NUMERO: ");
        scanf("%d", &vetor2[i]);
    }

    printf("VETOR 3: SOMA\n");
    for(int i = 0;i < n; i++){

        vetor3[i] = vetor1[i] + vetor2[i];


        }

        for(int i = 0; i < n; i++){
            printf("%d + %d = %d\n", vetor1[i],vetor2[i],vetor3[i]);
        }

    return 0;

}

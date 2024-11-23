#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int *vetor;
    int num;

    //abrindo arquivo
    FILE *arquivo;
    arquivo = fopen("C:/Users/vitin/OneDrive/Ambiente de Trabalho/Fatec/2 semestre/linguagem de programacao.txt", "w");

    //verificar se estar abrindo
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    srand(time(NULL));

    printf("Digite o tamanho do vetor");
    scanf("%d", &num);

   vetor = (int *)malloc( num *sizeof(int));

    for(int i = 0; i < num; i++){
        int numAleatorio = rand() % 1000;
        vetor[i] = numAleatorio;
    }

    printf("Os valores gerados foram: \n");

    for(int i = 0; i < num; i++){
        printf("%d ", vetor[i]);

    }

    for(int i = 0; i < num; i++){
        fprintf(arquivo, "%d\n" ,vetor[i]);
    }
    fclose(arquivo);
    return 0;
}

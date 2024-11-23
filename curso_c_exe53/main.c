#include <stdio.h>
#include <stdlib.h>

/*
 Faça um algoritmo para ler 10 números e armazenar em um vetor. Após isto, o algoritmo deve
ordenar os números no vetor em ordem crescente. Escrever o vetor ordenado.
*/

int main(){
    //variaveis
    int vet[7],num = 0, pos = 0, existe = 0;


    for(int i = 0; i < 5; i++){

        printf("DIGITE UM NUMERO: ");
        scanf("%d", &vet[i]);
    }


    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            if(vet[j] > vet[j +1]){
                int temporario = vet[j];
                vet[j] = vet[j + 1];
                vet[j+1] = temporario;
            }
        }
    }

    printf("DIGITE MAIS UM NUMERO: ");
    scanf("%d", &vet[6]);

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6;j ++){

            if(vet[j] > vet[j + 1]){
                int temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }

    }

    printf(" O VETOR FOI ORDENAO EM ORDEM CRESCENTE:\n");

    for(int i = 0; i < 6; i++){
        printf("%d\n", vet[i+1]);
    }

    printf("PROCURAR NUMERO: ");
    scanf("%d", &num);

    for(int i = 0; i < 7; i++){

        if(vet[i] == num){
            pos = i;
            existe = 1;
        }
    }
    // verificando se o numero existe eexcluindo ele

    if(existe == 1){

        printf("O NUMERO EXISTE NO VETOR!");
        for(int i = 0; i < 6; i++){
            vet[i] = vet[i + 1];
        }

    //atualiando vetor
        vet[6-1] = 0;


    }else{

        printf("O NUMERO NAO EXISTE!");
    }
    printf("NOVO VETOR\n");

    for(int i = 0; i < 5; i++){
        printf("%d\n", vet[i]);
    }


    return 0;
}

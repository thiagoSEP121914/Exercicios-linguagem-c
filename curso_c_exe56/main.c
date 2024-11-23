#include <stdio.h>
#include <stdlib.h>

/*

Faça um algoritmo para ler 50 números e armazenar em um vetor VET, verificar e escrever se
existem números repetidos no vetor VET e em que posições se encontram.


*/
int existe(int vet[], int tamanho, int num);

int main(){
    //variaveis
      int num[5], i = 0,condicao, numero;

        for(int j = 0; j < 5; j++){
            printf("Digite um numero: ");
            scanf("%d", &numero);
            do{
                condicao = existe(num, i, numero);
                if(condicao == 0){
                    num[i] = numero;
                    i++;
                    break;
                }else{
                    printf("O NUMERO JA EXISTE\n");
                    printf("DIGITE  O NUMERO: ");
                    scanf("%d", &numero);
                }

            }while(condicao == 1);
        }
    printf("OS NUMEROS DIGITADOS FORAM:");
    for(int k = 0; k < 5; k++){
        printf("\n%d", num[k]);
    }

    return 0;
}

int existe( int vet[], int tamanho, int num){

        for(int i = 0; i < tamanho; i++){

            if(num == vet[i]){
                return 1;
            }

        }
        return 0;

    }

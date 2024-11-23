#include <stdio.h>
#include <stdlib.h>

/*
Faça um algoritmo para ler 20 números e armazenar em um vetor. Após a leitura total dos 20
números, o algoritmo deve escrever esses 20 números lidos na ordem inversa.
*/


int main(){
    //variaveis
    int num[6];

    for(int i = 0; i < 5; i++){
        printf("DIGITE UM NUMERO: ");
        scanf("%d", &num[i]);


    }

    printf("OS NUMEROS DIGITADOS NA ORDEM INVERSA: \n");

    for(int i = 5; i >= 0; i--){

        printf("\n%d", num[i-1]);
    }
    return 0;
}

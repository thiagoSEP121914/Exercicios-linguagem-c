#include <stdio.h>
#include <stdlib.h>
/*
Ler um vetor Q de 20 posições (aceitar somente números positivos). Escrever a seguir o valor do
maior elemento de Q e a respectiva posição que ele ocupa no vetor.
*/

int main(){
    //variaveis
    int num[5],menornumero = 9999,maiornumero = 0,p;

    for(int i = 0; i < 5; i++){

       do{
        printf("DIGITE UM NUMERO: ");
        scanf("%d", & num[i]);

            if(num[i]< 0){
                printf("O NUMERO DIGITADO E NEGATIVO\nDIGITE NOVAMENTE\n");
            }

        }while(num[i] < 0);




        if(num[i] < menornumero){
            menornumero = num[i];

        }
        if(num[i] > maiornumero){
            maiornumero = num[i];
            p = i;
        }
    }
    printf("OS NUMERO DIGITADOS FORAM\n");
    for(int i = 0; i < 5; i++){
        printf("%d numero: %d\n",i,num[i]);



    }

    printf("O MAIOR NUMERO DIGITADO FOI O: %d\nA POSICAO FOI %d", maiornumero, p+1);
    printf("\nO MENOR NUMERO DIGITADO FOI O: %d", menornumero);
    return 0;
}

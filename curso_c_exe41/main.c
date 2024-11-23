#include <stdio.h>
#include <stdlib.h>
/*
) Escreva um algoritmo que permita a leitura dos nomes de 10 pessoas e armaze os nomes lidos em
um vetor. Após isto, o algoritmo deve permitir a leitura de mais 1 nome qualquer de pessoa e depois
escrever a mensagem ACHEI, se o nome estiver entre os 10 nomes lidos anteriormente (guardados no
vetor), ou NÃO ACHEI caso contrário.

*/
int main(){
    // variaveis
    char nome[5][50],numero[5][15],nomebusca[50];
    int encontrou = 0, indice = 0;

    for(int i = 0; i < 5; i++ ){
        printf("DIGITE UM NOME  DA PESSOA %d:\n", i + 1);
        scanf("%s", nome[i]);

        printf("NUMERO DE %s: ", nome[i]);
        scanf("%s", numero[i]);
    }

    printf("NOMES E NUMEROS ARMAZENADOS NO VETOR: ");
    for(int i = 0; i < 5; i++){
        printf("%d: %s: %s\n", i+1, nome[i],numero[i]);
    }

    //buscando numero no vetor
    printf("DIGITE UM NOME QUALQUER: ");
    scanf("%s", nomebusca);

    //verificacao se o nome estar no vetor
    for(int i = 0; i < 5; i++){
        if(strcmp(nome[i], nomebusca)== 0){
            encontrou = 1;
            indice = i;
            break;

        }
    }


    if(encontrou){
        printf("\nACHEI, O NOME DO ELEMENTO EH: %s", nome[indice]);
        printf("\nO NUMERO DE %s  EH %s", nome[indice],numero[indice]);

    }else{

        printf("NAO ENCONTREI:");
    }

    return 0;
}

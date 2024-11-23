#include <stdio.h>
#include <stdlib.h>
/*
ler 10 valores e escrever quantos desses valores lidos são NEGATIVOS.
*/
int main(){
    //variaveis
    int cont = 0, valor,neg = 0;

    printf("QUANTOS NEGATIVOS?\n");

    do{
        cont++;

        printf("DIGITE 0%d VALOR: ", cont);
        scanf("%d", &valor);

        if(valor < 0){
            neg++;
        }

    }while(cont < 9);


    printf("A QUANTIDADE DE VALORES NEGATIVOS SAO: %d", neg);
    return 0;
}

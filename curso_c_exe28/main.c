#include <stdio.h>
#include <stdlib.h>
/*
Escreva um algoritmo para imprimir os 10 primeiros números inteiros maiores que 100
*/
int main(){
    //variaveis
    int valor;
    valor = -1;
    while( valor < 0){
        printf("Digite um valor:\n");
        scanf("%d", &valor);
        if(valor > 0){
            printf("OS VALORES ENTRE UM E O VALOR DIGITADO FORAM:\n");
            for(int c = 1; c <= valor; c++){

            printf("%d\n", c);
            }
        }else{
            printf("VALOR INCORRETE\nTENTE NOAMENTE\n");

        }
    }
    return 0;
}

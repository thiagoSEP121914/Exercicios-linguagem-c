#include <stdio.h>
#include <stdlib.h>
//operadores logicos em c são &&(AND) ||(OR) !a(NOT)

int main(){
    //variaveis
    char nome[50]
    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    if (num >= 10){
        printf("O numero %d  maior ou igual a 10", num);

    }
    else{

        printf("O numero %d nao e maior que 10", num);
    }

    return 0;
}

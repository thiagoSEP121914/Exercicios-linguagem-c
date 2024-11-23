#include <stdio.h>
#include <stdlib.h>
/*
Escreva um algoritmo que calcule e imprima a tabuada do 8 (1 a 10).
*/
void linha();

int main(){
    //variaveis
    int valor1,valor2;

    linha();
    printf("TABUADOL\n");
    linha();

    printf("Digite de qual numero deseja ver a tabuada:\n");
    scanf("%d", &valor1);

    printf("LIMITE DA TABUDA: ");
    scanf("%d", &valor2);

    for(int c = 0; c <= valor2; c++){

        printf("%d X %d = %d\n", valor1, c , valor1 * c);


    }
    return 0;
}

void linha(){
    for(int c = 0; c < 20; c ++){

        printf("=");

    }
    printf(" \n");

}

#include <stdio.h>
#include <stdlib.h>
/*
Comprimento de uma String:

Escreva um programa que calcula e imprime o comprimento de uma string.
Cópia de Strings:

*/
int tamanho(char palavra[]){
    int i = 0;
    int cont = 0;

    while(palavra[i] != '\0' && palavra[i] != '\n'){
         i++;
        cont++;

    }
    return cont;
}

int main(){
    char palavra[] = "ola, mundo";
    int tam = 0;
    tam = tamanho(palavra);

    printf("%d", tam);
    return 0;


}

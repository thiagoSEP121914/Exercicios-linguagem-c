#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// faca um programa que leia um nome e devolva ele invertido

void invert (char palavra[], char copia[]) {
    int tam = strlen(palavra);
    int j = tam - 2;
    int i;

    for( i = 0; i < tam; i++) {
        copia[i] = palavra[j];
        j--;
    }
    copia[i+1] = '\0';
}


int main(){
    char nome[50];
    char nome2[50];

    printf("Escreva um nome: \n");
    fgets(nome, 50, stdin);

    invert(nome,nome2);

    printf("A palvra invertida eh: %s", nome2);


    return 0;
}

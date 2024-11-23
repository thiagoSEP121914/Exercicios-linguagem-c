#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Escreva uma função que conta o número de palavras em uma string.
*/

int conta(char str1[]){
    int cont = 0;
    int tam = strlen(str1);

    for(int i = 0; i < tam; i++){
        if(str1[i] == ' ' || str1[i] == '\t' || str1[i] == '\0'){
            cont++;
        }
    }
    return cont;
}


int main(){
    char p1[] = "palmeiras e grande";
    int tama;

    tama = conta(p1);

    printf("A quantidade de palavras na str eh: %d", tama);
    return 0;
}

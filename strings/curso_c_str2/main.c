#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
copiar strings
Escreva uma função que copia uma string para outra.
*/
void copyy(char palavra[50], char copia[50]){

    int tam = strlen(palavra);
    int j = 0;
    for(int i = 0; i < tam; i++){
        copia[j] = palavra[i];
        j++;
    }
    copia[j] = '\0';
}


int main(){
    char n1[] = "ola mundo";
    char cpy[30];

    copyy(n1, cpy);

    printf("A primeria palavra eh :%s\n", n1);
    printf("A palvra copiada eh: %s\n", cpy);

    return 0;
}

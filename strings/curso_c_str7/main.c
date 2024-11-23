#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Remoção de Espaços em Branco:

Escreva uma função que remove os espaços em branco de uma string.
*/
void space(char palavra[]){

     int tam = strlen(palavra);
     int aux = 0;

     for(int i = 0; i < tam; i++){
        if(palavra[i] != ' '){
            palavra[aux] = palavra[i];
            aux++;
        }
     }
    palavra[aux] = '\0';
}

int main(){
    char stru[] = " Palmeiras e grande";

    printf("A palavra original eh: %s\n", stru);

    space(stru);

    printf("A palavra sem espaços eh: %s\n", stru);

    return 0;
}

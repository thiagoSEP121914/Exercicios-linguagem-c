#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Contagem de Ocorrências de Substring:

Escreva uma função que conta o número de ocorrências de uma substring em uma string.
*/
int existe(char str1[], char str2[]) {

    int i,j = 0;
    int quanti = 0;

    if(strlen(str2) == 0){
        return 0;
    }

    for(i = 0; i < strlen(str1); i++) {
        if(str2[j] == str1[i]){
            j++;
        }else {
            j = 0;

        }
        if(j == strlen(str2)) {
             quanti++;
        }
    }
    return quanti;
}





int main(){
    char p1[] = "quem ama ama ama ama muito";
    char p2[] = "ama";
    int quanti = 0;

    quanti = existe(p1, p2);

    printf("A QUANTIDADE EH\n%d", quanti);

    return 0;
}

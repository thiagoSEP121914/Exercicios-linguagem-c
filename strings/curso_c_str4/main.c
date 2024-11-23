#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Escreva uma função que compara duas strings.
*/

int igual(char palavra[], char palavra2[]) {
    int i = 0;

    while(palavra[i] != '\0'){
        if(palavra[i] != palavra2[i]) {
            i++;
            return 0;
        }
        i++;
    }

    return 1;
}

int main(){
    char p1[] = "ola";
    char p2[] = "ola";


    if(igual(p1, p2)){
        printf("As palavras %s\n%s \nsao iguais!",p1,p2);
    }else{
        printf("Nao sao iguais!");

    }
    return 0;
}

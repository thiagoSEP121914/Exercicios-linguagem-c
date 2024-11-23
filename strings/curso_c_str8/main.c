#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Substituição de Caracteres:

Escreva uma função que substitui todas as ocorrências de um caractere por outro em uma string.
*/
void substrr(char str[], char ch, char chgc){

    int i = 0;

    while(str[i] != '\0'){
        if(str[i] == ch){
            str[i] = chgc;
        }
        i++;
    }
}

int main(){
    char palavra[] = "palmeiras e grande";
    char carac, ch1;

    printf("%s", palavra);

    printf("\nDIGITE UMA LETRA QUE DESEJA SUBSTITUIR: ");
    scanf(" %c", &carac);

    printf("\nDIGITE A LETRA SUBSTITUTA: ");
    scanf(" %c", &ch1);

    substrr(palavra, carac,ch1);

    printf("%s", palavra);

    return 0;
}

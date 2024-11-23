#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
eparação de Palavras em uma String:

Escreva uma função que divide uma string em palavras individuais.

*/
void dividir(char * frase){
    int i = 0;

    while(frase[i] != '\0') {
         if(frase[i] == ' ') {
            frase[i] = '\n';
         }
        i++;
    }
}



int main(){
    char p1[] = "essa e uma frase de exemplo";

    dividir(p1);

  printf("%s", p1);

    return 0;
}

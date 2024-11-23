#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
strchr(vetor, 'caracter') => retorna a primeira ocorrencia de um caracter;
strrchr(vetor, 'caracter') => retorna a ultima ocorrencia de caracter
*/

int main(){
    char p1[50]= "abacate";
    char *letra;

    letra = strchr(p1, 'a');

    printf("A primeira ocorrencia de A, eh: %c", *letra);
    return 0;
}

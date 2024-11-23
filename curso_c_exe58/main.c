#include <stdio.h>
#include <stdlib.h>
/*
tratamento de string;
scanf("%tamanhodastring[^\n], frase")
a funcao gets eh perigosa !
fgets é adequada!
fgets(vetor, tamanho do vetor, stdin)
*/

int main(){
    //variaveis
    char frase[40];


    printf("DIGITE UMA FRASE: ");
    //scanf("%40[^\n]", frase);
    fgets(frase, 40, stdin);
    printf("A FRASE DIGITADA FOI: %s", frase);
    return 0;
}

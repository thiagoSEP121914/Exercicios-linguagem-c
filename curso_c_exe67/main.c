#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char cadeia[50],copia[50];
    char *letra;
    char  c;

    printf("DIGITE UMA PALAVRA\n");
    fgets(cadeia,50, stdin);



    printf("%s", strcpy(copia,cadeia));
    printf("Digite uma letra para buscar\nA primeira apariçao: ");
    scanf("%c", &c);


    letra = strchr(copia,c);


    printf("A PRIMEIRA A APARIÇAO DA LETRA ESCOLHIDA EH: %c", *letra);
    return 0;
}

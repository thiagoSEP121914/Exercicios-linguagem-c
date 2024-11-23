#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
procedimentos para MAIUSCULAS E MINUSCULAS
toupper(),tolower();
*/
void tomaiuscula(char palavra[]){
    int tam = strlen(palavra);
    int i = 0;

    while(palavra[i] != '\0'){
        palavra[i] = toupper(palavra[i]);
        i++;
    }
}

void tominus(char palavra[]){

    int tam = strlen(palavra);
    int i = 0;

    while(palavra[i] != '\0'){
        palavra[i] = tolower(palavra[i]);
        i++;
    }
}

int main(){
    char palavra[50];


    printf("DIGITE UMA PALAVRA: ");
    fgets(palavra, 50, stdin);

    tomaiuscula(palavra);

    printf("a palavra maiuscula eh: %s", palavra);
    tominus(palavra);

    printf(" A PALAVRA MINUSCULA EH: %s", palavra);


    return 0;
}

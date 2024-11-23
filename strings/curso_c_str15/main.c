#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Escreva uma função que conta o número de vogais e consoantes em uma string.


*/
int contador(char str[]){

    int cont = 0;

    for(int i = 0; i < strlen(str);i++) {
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != ' ') {
            cont++;
        }
    }
    return cont;
}

int main() {
    char vet[] = "mariamariana";
    int voga,conso = 0;

    conso = contador(vet);
    voga = strlen(vet) - conso;

    printf("O numero de consoantes na string eh: %d\n", conso);
    printf("O numero de vogais na string eh: %d", voga);

    return 0;
}

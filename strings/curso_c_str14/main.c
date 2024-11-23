#include <stdio.h>
#include <stdlib.h>
/*
Quebra de Linha:

Escreva uma fun��o que quebra uma string em v�rias linhas com um n�mero m�ximo de caracteres por linha.
*/

void quebra(char str[], int tam) {

    int i,j = 0;

    for(i = 0; i < strlen(str); i++) {
        if(str[i] == ' ') {
            if(i > tam) {
                str[i] = '\n';
            }
        }
    }
}

int main() {
    char p1[50];

    printf("Digite um texto: ");
    fgets(p1,50,stdin);

    printf("ORIGINAL: %s\n", p1);
    quebra(p1,3);
    printf("APOS A QUEBRA DE LINHA: ");
    printf("%s", p1);
    return 0;
}

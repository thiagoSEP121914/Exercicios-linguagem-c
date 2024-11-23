#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Inversão de uma String:
Escreva uma função que inverte uma string.

*/

void invert(char str1[], char str2[]) {
    int i = 0;
    int tam = strlen(str1);

    while(str1[i] != '\0') {
        str2[tam - 1] = str1[i];
        i++;
        tam--;
    }
    str2[i] = '\0';
}


int main() {
    char p1[] = "aviao";
    char p2[50];

    invert(p1, p2);

    printf("A string original eh: %s\n", p1);
    printf("A string invertida eh: %s", p2);

    return 0;
}

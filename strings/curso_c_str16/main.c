#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
Cifra de César:

Implemente a cifra de César para criptografar e descriptografar uma string.
*/

void cripto(char str[], int chave) {
    char base;
    int i,j = 0;

    for(i = 0; i < strlen(str); i++) {
        if(isalpha(str[i])) { //compara para saber e uma letra
            base = isupper(str[i])? 'A': 'a';
            str[i] = (str[i] - base + chave) % 26 + chave;
        }
    }

}

void decifra(char str[], int chave) {
    cripto(str, 26 - chave);

}
int main() {
    char vet[] = "Digital Innovation One";

    printf("Antes da criptografia\n");
    printf("%s\n", vet);
    cripto(vet, 5);
    printf("criptografado: \n%s", vet);
    printf("\nDescriptografado");
    decifra(vet, 5);
    printf("%s", vet);

    return 0;
}

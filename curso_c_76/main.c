#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//funcao de  strip

void strip(char stri[]){

    int tam = strlen(stri);
    int i = 0, j = 0;

    for(i = 0; i < tam; i++){
        if(stri[i] != ' '){
            stri[j++] = stri[i];
        }

    }
    stri[j] = '\0';
}

int main() {
    char palavra[50];

    printf("digite uma palavra: ");
    fgets(palavra, 50, stdin);

    strip(palavra);

    printf("%s", palavra);

    for(int i = 0; i < strlen(palavra); i++){
        printf("%d .indice: %c\n", i, palavra[i]);
    }

    return 0;
}

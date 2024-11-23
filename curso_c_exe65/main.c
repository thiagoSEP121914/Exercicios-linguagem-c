#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// strcpy();
//existe um caracter na str?

int existe_caracter(char palavra[], char ch) {
    int tam = strlen(palavra);
    int pos = 0;
    for(int i = 0; i < tam; i++) {
            if (palavra[i] == ch){
                pos = i;
                return 1;
            }
    }

        return 0;
}

int main(){
    char arrai[50];
    char ch;

    printf("DIGITE UMA PALAVRA\n");
    fgets(arrai, 50, stdin);

    printf("DIGITE O CARACTER QUE DESEJA BUSCAR: ");
    scanf("%c", &ch);


    if (existe_caracter(arrai,ch)) {
        printf("A LETRA %c FOI ENCONTRADA NO ARRAY!", ch);
    }else {
        printf(" A LETRA NAO EXISTE!");

    }

    return 0;
}

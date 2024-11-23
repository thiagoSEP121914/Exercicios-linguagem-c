#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
erificação de Palíndromos:

Escreva uma função que verifica se uma string é um palíndromo.
*/
int palindromo(char str[]) {
    int tam = strlen(str) -1;
    int i;
    int j = tam -1;
    char copia[tam+1];

    strcpy(copia,str);

    for(i = 0; i < tam; i++){
       str[i] = copia[j];
       j--;
    }
    str[i+1] = '\0';

    for(int i = 0; i < tam +1; i++){
        if(str[i] != copia[i]){
            return 0;
        }
        i++;
    }
    return 1;
}

int main(){
    char palavra[50];
    char copia[50];


    printf("Digite uma palavra: ");
    fgets(palavra,50, stdin);

    strcpy(copia, palavra);
    printf("A Palavra original eh: %s", palavra);
    printf("A copia eh: %s\n", copia);

    palindromo(copia);

    printf("A palavra copiada eh: %s", copia);
    printf("\n%d\n", strlen(copia));

    if(palindromo(copia) == 1) {
        printf("e um palindromo");
    }else {
        printf("NAO EH UM PALINDROMO!");

    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/*
Remoção de Substring:

Escreva uma função que remove uma substring de uma string.
*/
void remover(char * str1, char * str2) {
    // tamanho da sustring
    int len = strlen(str2);
    // calcula o endereco de memoria o ponteiro recebe o valor da str2
    char *ponteiro = strstr(str1, str2);

    while(ponteiro != NULL) {
        // inidice rebece o elemento que comceca a str2
       int indice = ponteiro - str1;

       //utiliza o memmove
        memmove(ponteiro, ponteiro + len,strlen(ponteiro + len) + 1);

        ponteiro = strstr(str1 + indice, str2);

    }

}

int main() {
   char str[] = "hello, world";
   char vet[] = "world";

   printf("ORIGINAL%s\n", str);
   remover(str, vet);
   printf("removido %s", str);

    return 0;
}

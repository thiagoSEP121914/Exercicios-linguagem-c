#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//strings recursiva.

void recursivo(char vet[], int inicio, int fim, int tam){

    int i;
    int j = 0;
    if(fim < tam){

        for(i = inicio; i <= fim; i++){
            printf("%c", toupper(vet[i]));
            printf("%c",vet[i]);
        }
        printf(",");
        printf("\n");
        recursivo(vet,inicio, fim+1, tam);
    }else if (inicio < fim){

        recursivo(vet, inicio+1,inicio+1, tam);
        j++;
    }
}

int main(){
    char palavra[] = "abacate";
    int tam = strlen(palavra);

    recursivo(palavra,0,0,tam);

    return 0;
}

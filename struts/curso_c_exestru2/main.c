#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//le campos de uma struc

struct Pessoa{

    char nome[50];
    int nota;

}pessoa;

void ler(struct Pessoa p) {

    printf("DIGITE O NOME DA PESSOA: ");
    scanf("%s", p.nome);

    printf("DIGITE A NOTA: ");
    scanf("%d",&p.nota);
}


void imprimir(struct Pessoa p) {


    printf("NOME: %s\n", p.nome);
    printf("NOTA: %d", p.nota);

}


int main() {

    ler(pessoa);
    imprimir(pessoa);

    return 0;
}

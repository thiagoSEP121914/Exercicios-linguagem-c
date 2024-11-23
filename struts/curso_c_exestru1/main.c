#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//typedef struct

struct Pessoa{
    char nome[50];
    int nota;
}pessoa;

void ler(struct pessoa p) {

    printf("DIGITE O NOME: ");
    fgets(p.nome,50,stdin);

    p.nome()
    printf("DIGITE A NOTA: ");
    scanf("%d", &p.nota);

}

void imprimir( struct Pessoa P) {

    printf("NOME: %s", p.nome);
    printf("NOTA: %d", p.nota);


}

int main() {

    ler(pessoa);
    imprimir(pessoa);

}

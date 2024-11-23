#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char tipo[100];
    char marca[50];
    char modelo[25];
    char energia;
    char descricao[500];
    int quantidade;
    int codigo;

}Eletronico;

void imprimirEletronico(Eletronico e) {

    printf("\tTipo: %s\n", e.tipo);
    printf("\tMarca: %s\n", e.marca);
    printf("\tModelo: %s\n", e.modelo);
    printf("\tEnergia: %c\n", e.energia);
    printf("\tDescricao: %s\n", e.descricao);
    printf("\tQuantidade: %d\n", e.quantidade);
    printf("\tcodigo: %d\n", e.codigo);

}
Eletronico ler() {
    Eletronico e;

    printf("\tTipo: ");
    fgets(e.tipo,100, stdin);
    e.tipo[strcspn(e.tipo, "\n")] = '\n';

    printf("\tMarca: ");
    fgets(e.marca,100, stdin);
    e.marca[strcspn(e.marca, "\n")] = '\n';

    printf("\tModelo: ");
    fgets(e.modelo,100, stdin);
    e.modelo[strcspn(e.modelo, "\n")] = '\n';


    printf("\tEnergia: ");
    scanf("%c", &e.energia);

    printf("\tDescricao: ");
    fgets(e.descricao,100,stdin);
    e.descricao[strcspn(e.descricao, "\n")] = '\n';

    while(getchar() != '\n');


    printf("\tQuantidade: ");
    scanf("%d", &e.quantidade);

    printf("\tcodigo: ");
    scanf("%d", &e.codigo);

    return e;
}

int main() {
    Eletronico ele;

    ele = ler();
    imprimirEletronico(ele);

    return 0;
}

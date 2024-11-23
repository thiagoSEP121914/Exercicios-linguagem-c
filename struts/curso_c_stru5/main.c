#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct eletronicos {

    char tipo[100];
    char marca[50];
    char modelo[25];
    char energia;
    char descricao[400];
    int quantidade;
    int codigo;

}eletron;
// funcao que imprime!
void imprimir(struct eletronicos e) {

    printf("\tTIPO: %s",e.tipo);
    printf("\tMARCA: %s",e.marca);
    printf("\tMODELO: %s",e.modelo);
    printf("\tenergia: %c \tQUANTIDADE: %d ", e.energia, e.quantidade);
    printf("\tDESCRICAO:: %s", e.descricao);

}

struct eletronicos ler(struct eletronicos e) {

    printf("Digite o o tipo do produto: ");
    fgets(e.tipo, 100, stdin);

    printf("MARCA: ");
    fgets(e.marca, 50, stdin);

    printf("MODELO: ");
    fgets(e.modelo, 25, stdin);

    printf("Energia: ");
    scanf("%c", &e.energia);
    scanf("%c");

    printf("Descricao: ");
    fgets(e.descricao,400, stdin);

    printf("Quantidade e codigo: ");
    scanf("%d%d", &e.quantidade, &e.codigo);
    return e;
}




int main() {
   struct  eletronicos ele;

    ele = ler(ele);

    imprimir(ele);

    return 0;
}

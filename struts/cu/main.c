#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa {
    char nome[50];
    int nota;
} humano;

void imprimir(struct pessoa p) {

    printf("NOME: %s\n", humano.nome);
    printf("IDADE: %d", humano.nota);

}

void ler(struct pessoa p) {

    printf("DIGITE UM NOME: ");
    fgets(humano.nome,50, stdin);
    humano.nome[strcspn(humano.nome,"\n")] = '\0';

    printf("Digite a nota: ");
    scanf("%d", &humano.nota);



}



int main() {

    ler(humano);

    imprimir(humano);

    return 0;
}

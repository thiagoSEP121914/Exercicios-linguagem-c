#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct agenda {
    char nome[50];
    int numero;
} pessoa[2];

void prencher(struct agenda p[]) {

    int i = 0;
    int tam = 2;

        for(i = 0; i < tam; i++) {
            printf("Digite o nome do contato: ");
            fgets(p[i].nome, 50, stdin);

            if(p[i].nome[strlen(p[i].nome) -1] == '\n') {
                p[i].nome[strlen(p[i].nome) -1] = '\0';
            }

            printf("Digite o numero do contato: ");
            scanf("%d", &p[i].numero);
            getchar();
        }
}

void imprimir(struct agenda p[]) {

    for(int i = 0; i < 2; i++) {
        printf("\tNOME: %s\n", p[i].nome);
        printf("\tNUMERO: %d", p[i].numero);
        printf("\n");
    }
}

int main() {

    prencher(pessoa);
    imprimir(pessoa);
    return 0;
}

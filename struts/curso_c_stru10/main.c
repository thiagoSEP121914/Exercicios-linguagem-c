#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Crie uma estrutura Contato com campos para nome, telefone e email.
Permita que o usuário cadastre informações de vários contatos.
Implemente uma função para buscar um contato pelo nome.
*/
struct Agenda {

    char nome[50];
    int num;
};

void  ler(struct Agenda p[]) {

    for(int i = 0; i < 5; i++) {
        printf("DIGITE O NOME DO CADASTRO: ");
        fgets(p[i].nome, 50, stdin);
        p[i].nome[strcspn(p[i].nome ,"\n")] = '\0';

        printf("DIGITE UM NUMERO: ");
        scanf("%d", &p[i].num);

        getchar();

    }
}

int pesquisa(struct Agenda p[], char nome[50]) {

    int indice = 0;
    for(int i = 0; i < 5; i++) {
        if(strcmp(p[i].nome,nome) == 0) {
            indice = i;
            return indice;
        }
    }
    return -1;
}

void imprimir(struct Agenda p[], int indice) {

    printf("\t==================\n");
    printf("\tNOME: %s\n", p[indice].nome);
    printf("\tNUMERO: %d\n", p[indice].num);
    printf("\t==================\n");

}


int main() {
    int indice = 0;
    char nome[50];
    struct Agenda pessoa[5];

    ler(pessoa);

    printf("\n");
    printf("DIGITE UM NOME PARA PESQUISAR: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    indice = pesquisa(pessoa, nome);

    if(indice != -1) {
        imprimir(pessoa, indice);

    } else {
        printf("O CONTATO NAO EXISTE!");

    }

    return 0;
}

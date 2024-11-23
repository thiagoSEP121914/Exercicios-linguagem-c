#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Implemente um programa que leia o nome, a idade e o enderec¸o de uma pessoa e
armazene os dados em uma estrutura.
*/
struct dados {
    char nome[50];
    int idade;
    char endereco[100];


}pessoa;


struct dados leitura(struct dados d) {

    printf("DIGITE O NOME DO CLIENTE: ");
    fgets(d.nome,50, stdin);
    d.nome[strcspn(d.nome, "\n")] = '\0';

    printf("Digite a idade: ");
    scanf("%d", &d.idade);

    scanf("%c");

    printf("O ENDERECO: ");
    fgets(d.endereco, 100, stdin);

    return d;

}

void imprimir(struct dados d) {
    printf("NOME: %s\n", d.nome);
    printf("IDADE: %d\n", d.idade);
    printf("ENDERECO: %s\n", d.endereco);
}


int main() {

    pessoa = leitura(pessoa);

    imprimir(pessoa);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union dado {
    int idade;
    float altura;

};

struct Pessoa {

    char nome[50];
    union dado Dados;

};


int main() {
    struct Pessoa pessoa;

    printf("DIGITE O NOME DA PESSOA: ");
    fgets(pessoa.nome,50,stdin);
    pessoa.nome[strcspn(pessoa.nome, "\n")] = '\0';

    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa.Dados.idade);

    printf("Digite a altura da pessoa: ");
    scanf("%f", &pessoa.Dados.altura);

    printf("\tOS DADOS PESSOAI CADASTRADOS FORAM:\n");

    printf("NOME: %s\n",pessoa.nome);
    printf("IDADE: %d\n", pessoa.Dados.idade);
    printf("Altura: %.2f\n", pessoa.Dados.altura);


    return 0;
}

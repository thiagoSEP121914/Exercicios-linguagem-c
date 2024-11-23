#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Construa uma estrutura aluno com nome, numero de matr ´ ´ıcula e curso. Leia do usuario ´
a informac¸ao de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na ˜
tela.
*/
struct cadastro {

    char nome[50];
    int matricula;
    char curso[100];

};

void ler(struct cadastro a[]) {

       for(int i = 0; i < 5; i++) {
        printf("CADASTRO DE ALUNOS\n");
        printf("DIGITE O NOME DO ALUNO: ");
        fgets(a[i].nome, 50, stdin);
        a[i].nome[strcspn(a[i].nome, "\n")] = '\0';

        printf("DIGITE O NUMERO DA MATRICULA: ");
        scanf("%d", &a[i].matricula);
        getchar();

        printf("DIGITE O NOME DO CURSO: ");
        fgets(a[i].curso, 100, stdin);

    }

};

void imprimir(struct cadastro a[]) {
    for(int i = 0; i < 5; i++) {
        printf("NOME: %s\n", a[i].nome);
        printf("MATRICULA: %d\n",a[i].matricula);
        printf("CURSO: %s\n",a[i].curso);
    }
}

int main() {

    struct cadastro aluno[5];

    ler(aluno);
    imprimir(aluno);

    return 0;
}

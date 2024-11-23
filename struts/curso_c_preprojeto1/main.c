#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// aula 1: novo tipo de dado typedef

typedef struct {
    int dia, mes, ano;

}DataNas;

typedef struct {
    DataNas dataNas;
    int idade;
    char sexo;
    char nome[100];

}pessoa;

void imprimir(pessoa p) {

    printf("NOME: %s\nIdade: %d \nSexo: %c", p.nome,p.idade, p.sexo);

}
pessoa lerpessoa() {
    pessoa p;
    printf("Digite um nome: ");
    fgets(p.nome,50, stdin);
    p.nome[strcspn(p.nome, "\n")] = '\0';



    printf("Digite sua idade: ");
    scanf("%d", &p.idade);

    getchar();

    printf("Digite f para fem ou m para masc: ");
    scanf("%c", &p.sexo);

    return p;
}
int main() {

    pessoa pessoa1;

    pessoa1= lerpessoa();

    imprimir(pessoa1);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
structs
*/
struct cadastro {

    char nome[50];
    int idade;
    char rua[50];
    int numero;

};
struct cadastro CAD;

int main() {

    printf("Digite um nome: ");
    fgets(CAD.nome,50,stdin);
    CAD.nome[strcspn(CAD.nome, "\n")] = "\n";


    printf("Digite a idade do cliente: ");
    scanf("%d", &CAD.idade);
    getchar();

    printf("Digite a rua do cliente: ");
    fgets(CAD.rua,50,stdin);
    CAD.rua[strcspn(CAD.rua, "\n")]= "\0";

    printf("Digite o numero: ");
    scanf("%d", &CAD.numero);

    return 0;
}

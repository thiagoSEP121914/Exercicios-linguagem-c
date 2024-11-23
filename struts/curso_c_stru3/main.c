#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
vetores de structs

*/
struct cadastro {
    char nome[50];
    int  nota;



} aluno[5];


int main(){
    int i = 0;

    for(i = 0; i < 5; i++) {
        printf("Digite o nome: ");
        fgets(aluno[i].nome, 50,stdin);


        printf("Digite a nota: ");
        scanf("%d", &aluno[i].nota);
        getchar();
    }

    strcpy(aluno[0].nome, "maria");

    int k;
    for(k = 0; k < 5; k++) {
        printf("NOME: %s", aluno[k].nome);
        printf("NOTA: %d\n", aluno[k].nota);
    }
    return 0;

}

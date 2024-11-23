#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matr´ıcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
(a) Permita ao usuario entrar com os dados de 5 alunos. ´
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior media geral. ´
(d) Encontre o aluno com menor media geral ´
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovac¸ao. ˜
*/

struct Aluno {

    char nome[50];
    float nota1;
    float nota2;
    float nota3


}aluno[5];

void leitura(struct Aluno a[]) {

    int i = 0;

    for(i = 0; i < 5; i++) {
        printf("Digite o nome do aluno: ");
        fgets(a[i].nome,50,stdin);
        a[i].nome[strcspn(a[i].nome, "\n")] = '\0';

        printf("DIGITE A 1 NOTA ");
        scanf("%f", &a[i].nota1);
        getchar();


        printf("DIGITE A 2 NOTA: ");
        scanf("%f", &a[i].nota2);
        getchar();

        printf("DIGITE A 3 NOTA ");
        scanf("%f", &a[i].nota3);
        getchar();

    }
}
void imprimir(struct Aluno a[]) {

    int indice = maionota(a);
    int maior = maiomedia(a);

    printf("FICHA DE ALUNOS\n");

    for(int i = 0; i < 5; i++) {
        printf("\t================\n");
        printf("\tNOME: %s\n", a[i].nome);
        printf("\t1.NOTA: %2.f\n",a[i].nota1);
        printf("\t2.NOTA: %2.f\n", a[i].nota2);
        printf("\t3.NOTA: %2.f\n", a[i].nota3);
        if(aprovado(a,i)) {
            printf("\tSTATUS: APROVADO\n");
        }else {
            printf("\tSTATUS: REPROVADO\n");
        }
    }
    printf("\tA MAIOR NOTA DA N1 FOI DE %s com %2.f\n",a[indice].nome,a[indice].nota1);
    printf("\tA MAIOR MEDIA GERAL EH de %s com %2.f\n",a[maior].nome, (a[maior].nota1 + a[maior].nota2 + a[maior].nota3)/3);
    printf("\n");
}

int aprovado(struct Aluno a[], int indice) {

    float media = (a[indice].nota1 + a[indice].nota2 + a[indice].nota3) / 3;

    if(media >= 6) {
        return 1;
    }

    return 0;

}


int maiomedia(struct Aluno a[]) {
    float media[5];
    int maior = 0;
    int indice = 0;

    for(int i = 0; i < 5; i++) {
        media[i] = (a[i].nota1 + a[i].nota2 + a[i]. nota3)/3;

    }
    for(int i = 0; i < 5; i++) {
        if(media[i] > maior) {
            maior = media[i];
            indice = i;
        }
    }

    return indice;
}


int maionota(struct Aluno a[]) {

    int maior = 0;
    int indice = 0;
    for(int i = 0; i < 5; i++) {
        if(a[i].nota1 > maior) {
          maior = a[i].nota1;
          indice = i;
        }
    }
    return indice;
}


int main() {


    leitura(aluno);
    imprimir(aluno);

    return 0;
}

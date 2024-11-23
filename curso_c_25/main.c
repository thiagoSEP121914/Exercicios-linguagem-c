#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/*
Escreva um algoritmo para ler as notas da 1a. e 2a. avaliações de um aluno, calcule e imprima a
média (simples) desse aluno. Só devem ser aceitos valores válidos durante a leitura (0 a 10) para cada
nota.
*/

int main(){
    //variaveis
    float nota1,nota2, media;
    int entradavalida;
    char continuar;

    continuar = 'S';
    while(continuar == 'S'){

        do{
            entradavalida = 1;
            printf("Digite a primeira nota: \n");
            scanf("%f", &nota1);

            if(nota1 < 0 || nota1 > 10){
                printf("VALOR INCORRETO!\nDIGITE NOVAMENTE\n.");
                entradavalida = 0;
            }

        }while(!entradavalida);


        do{
            entradavalida = 1;
            printf("digite a segunda nota: \n");
            scanf("%f", &nota2);

            if(nota2 < 0 || nota2 > 10){

                printf("INCORRETO!\nDIGITE NOVAMENTE\n.");
                entradavalida = 0;
            }

        }while(!entradavalida);

        media = (nota1 + nota2) /2;

        printf("A media do aluno eh: %0.f\n", media);

        printf("DESEJA CONTINUAR?[S/N]\n");
        scanf(" %c", &continuar);
        continuar = toupper(continuar);

    }
            return 0;

}

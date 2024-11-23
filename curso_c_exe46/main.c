#include <stdio.h>
#include <stdlib.h>


/*
Escreva um algoritmo que permita a leitura das notas de uma turma de 20 alunos. Calcular a média
da turma e contar quantos alunos obtiveram nota acima desta média calculada. Escrever a média da
turma e o resultado da contagem.
*/

int main(){
    //variaveis
    float nota[5];
    int acima_media = 0,soma = 0,media = 0;


    printf("ESCOLINHA TAVARES !\n");

    for(int i = 0; i < 5; i++){

        printf("Digite a %d nota: ", i+1);
        scanf("%f", &nota[i]);
        soma+= nota[i];
    }


    media = soma/5;

    for(int i = 0; i < 5;i++){
        if(nota[i] > media){
            acima_media++;
        }
    }

    printf("A MEDIA DA TURMA EH: %d\nALUNOS ACIMA DA MEDIA: %d", media,acima_media);


    return 0;

}

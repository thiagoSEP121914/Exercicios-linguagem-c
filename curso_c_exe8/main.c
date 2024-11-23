#include <stdio.h>
#include <stdlib.h>

float best_note(float x, float y);

int main(){
    //variaveis
    char name[25];
    float note1,note2,note3, pga,great_note;
    //programa principal

    printf("=============================\n");
    printf("SISTEMA DE GESTAO INTEGRADA\n");
    printf("=============================\n");

    printf("Dgite o nome do aluno: ");
    scanf("%s", &name);

    printf("NOTA 1: ");
    scanf("%f", &note1);
    printf("NOTA 2: ");
    scanf("%f", &note2);
    if(note1 + note2 >= 12){
        pga = (note1 + note2)/2;
        printf("=============================\n");
        printf("NOTA 1: %.1f\n",note1);
        printf("NOTA 2: %.1f\n",note2);
        printf("NOTA 3: %.1f\n",note3);
        printf("MEDIA:  %.1f \n", pga);


        if (pga >= 6){

            printf("=============================\n");
            printf("AlUNO APROVADO!!\n");
            printf("=============================\n");
        }

    } else{
        printf("NOTA 3: ");
        scanf("%f", &note3);

        great_note = best_note(note1,note2);

        pga = (great_note + note3)/2;

            if(pga < 6){
                printf("MEDIA: %.1f \n", pga);
                printf("=============================\n");
                printf("AlUNO REPROVADO!\n");
                printf("=============================\n");
            }else{
                printf("MEDIA: %.1f \n", pga);
                printf("=============================\n");
                printf("AlUNO APROVADO!\n");
                printf("=============================\n");
            }


    }




    return 0;
}


float best_note(float x, float y){

    //funcao que retorna a maior nota ate o momento
    return (x > y)? x: y;
}

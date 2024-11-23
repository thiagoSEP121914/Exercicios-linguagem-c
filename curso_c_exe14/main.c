#include <stdio.h>
#include <stdlib.h>

int main(){

    //VARIAVEIS
        char team[30], team2[30];
        int score1,score2,winner;

    //VARIAVEIS
    printf("SIMULADOR DE FUTEBOL\n");

    printf("Digite o nome das equipes: \n");
    scanf("%s", &team);
    printf("Digite o nome da segunda equipe: \n");
    scanf("%s", &team2);

    printf("%s x %s \n", team,team2);


    printf("=======================\n");
    printf("PLACAR\n");
    printf("=======================\n");

    printf("Gols de %s\n", team);
    scanf("%d", &score1);
    printf("Gols de %s\n", team2);
    scanf("%d", &score2);

    printf("%s %d x %d %s\n",team,score1,score2,team2);

    if(score1 > score2){

        printf("%s VENCEU!", team);

    }else if(score2 > score1){

        printf("%s VENCEU!",team2);

    }else{
        printf("EMPATE!'");

    }
    return 0;
}

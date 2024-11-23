#include <stdio.h>
#include <stdlib.h>


// notas e nomes de 100 alunos e o nome da maior nota

int main(){
    //variaveis
     char nome[11][50];
     int  nota[11],maiornota = 0;

    printf("SISTEMA ESCOLAR\n");

    for(int i = 0; i < 5; i++){
        printf("%d.DIGITE O NOME DO ALUNO: ",i+1);
        scanf("%s",&nome[i]);

        printf("Digite a nota do aluno: ");
        scanf("%d", &nota[i]);
        if (maiornota < nota[i]){
            maiornota = nota[i];

        }

    }



    for(int i = 0; i < 5; i++){
        printf("\n%d aluno: %s\nNota: %d", i+1,nome[i], nota[i]);
        printf("\nA MAIOR NOTA EH: %d", maiornota);

    }

    return 0;


}

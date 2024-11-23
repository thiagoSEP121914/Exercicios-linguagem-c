#include <stdio.h>
#include <stdlib.h>

enum semana {
    Domingo = 1, Segunda, Terca, Quarta, Quinta, Sexta, Sabado

};


void dia_hoje(enum semana d) {
    if(d > Sabado){
            printf("OPCAO INVALIDA");
    }else{
        switch(d) {
                case Domingo :
                    printf("Hoje e domigo");
                    break;

               case Sabado :
                     printf("Hoje e sabado");
                    break;

               default :
                    printf("Dia de feira!");
                    break;
        }
    }
};

int main() {

   enum semana dia;

   printf("Digite o numero de um dia da semana: ");
   scanf("%d", &dia);

   dia_hoje(dia);


    return 0;
}

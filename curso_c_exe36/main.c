#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
a n�o ser� informado o n�mero de mercadorias em estoque.
Ent�o o funcionamento dever� ser da seguinte forma: ler o valor da mercadoria e perguntar �MAIS
MERCADORIAS (S/N)?�. Ao final, imprimir o valor total em estoque e a m�dia de valor das
mercadorias em estoque.
*/

int main(){
    //variaveis
    char resp;
    int valor, totvalor = 0,cont = 0,totm = 0;

    printf("MERCADINHO TAVARES\n");

    do{
        printf("DIGITE O VALOR DA MERCADORIA:\n");
        scanf("%d", &valor);

        if(valor > totm){

            totm = valor;

        }

        printf("DESEJA CONTINUAR?");
        scanf(" %c", &resp);



        totvalor+= valor;
        cont++;

    }while(resp == 'S' || resp == 's');

    printf("O VALOR TOTAL DE MERCADORIA EH: %d\nA media eh de %d\nO MAIOR PRODUTO EH: %d", totvalor, (totvalor/cont), totm);
    return 0;
}

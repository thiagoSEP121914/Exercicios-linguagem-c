#include <stdio.h>
#include <stdlib.h>
/*
Faça um algoritmo para ler uma quantidade e a seguir ler esta quantidade de números. Depois de
ler todos os números o algoritmo deve apresentar na tela o maior dos números lidos e a média dos
números lidos.
*/
int main(){
    //variaveis
    int valor,cont,total = 0,totm = 0;
    char resp;

    do{
        printf("DIGITE UM NUMERO: ");
        scanf("%d", &valor);

        if(valor > totm){

            totm = valor;
        }

        cont++;
        total+= valor;

        printf("DESEJA CONTINUAR?: ");
        scanf("%s", &resp);


        if(resp == 'S' || resp =='s'){
            resp = 'S';

        }

    }while(resp == 'S');

    printf("O MAIOR NUMERO DIGITADO EH:%d\nA media dos numeros eh: %d", totm,total/cont);



    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/*
Ler 2 valores, calcular e escrever a soma dos inteiros existentes entre os 2 valores lidos (incluindo
os valores lidos na soma). Considere que o segundo valor lido será sempre maior que o primeiro valor
lido.
*/
int main(){
    //variaveis
    int valor1,valor2,cont=1,totn =1;


    do{
        printf("DIGITE O PRIMEIRO VALOR: ");
        scanf("%d", &valor1);
        printf("DIGITE O SEGUNDO VALOR: ");
        scanf("%d", &valor2);

        if (valor1 > valor2){
            printf("O segundo valor deve ser maior que primeiro\n");


        }

    }while(valor2 <= valor1);


    printf("OS INTERVALO ENTRE OS NUMERO DIGITADOS SAO\n");
    cont = valor1;

    while(cont <= valor2){


        printf("%d\n", cont);
        cont++;
        totn+= cont;
    }

    printf("A MEDIA ARITMETICA DO INTERVALO EH: %d", totn/cont);


    return 0;

}

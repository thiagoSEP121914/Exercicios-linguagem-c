#include <stdio.h>
#include <stdlib.h>
/*
A prefeitura de uma cidade deseja fazer uma pesquisa entre seus habitantes. Fa�a um algoritmos
para coletar dados sobre o sal�rio e n�mero de filhos de cada habitante e ap�s as leituras, escrever:
a) M�dia de sal�rio da popula��o
b) M�dia do n�mero de filhos
c) Maior sal�rio dos habitantes
d) Percentual de pessoas com sal�rio menor que R$ 1500,00
Obs.: O final da leituras dos dados se dar� com a entrada de um �sal�rio negativo
*/

int main(){
    //variaveis
    int filhos, cont = 0,salario,cont_salario = 0,acc,qted_filhos = 0,mior_salario = 1;
    char resp;


    printf("TAVARES CITY\n");

    do{
        //verifica�ao dos dados
        printf("DIGITE A QUANTIDADE DE FILHOS: \n");
        scanf("%d", &filhos);

        printf("DIGITE O SALARIO MENSAL DA FAMILIA: ");
        scanf("%d", &salario);

        //atualizacao dos contadores
        cont++;
        acc+= salario;
        qted_filhos+= filhos;

        if(salario > mior_salario){

            mior_salario = salario;

        }


        if(salario < 1500){
            cont_salario+= 1;

        }

        //verificao de cadastro
        printf("DESEJA CONTINUAR[s/n]");
        scanf(" %c", &resp);


    }while(resp == 'S' || resp == 's');


    printf("A RENDA MENSAL DAS FAMILIA EH: %d\nMEDIA DE FILHOS EH: %d\nO MAIOR SALARIO E DE: %d"
           "\nPESSOAS ABAIXO DA POBREZA: %d%%" ,
           acc/cont,qted_filhos/cont, mior_salario, (cont_salario * 100)/cont);

    return 0;
}

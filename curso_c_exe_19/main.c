#include <stdio.h>
#include <stdlib.h>

/*
A jornada de trabalho semanal de um funcion�rio � de 40 horas. O funcion�rio que trabalhar mais
de 40 horas receber� hora extra, cujo c�lculo � o valor da hora regular com um acr�scimo de 50%.
Escreva um algoritmo que leia o n�mero de horas trabalhadas em um m�s, o sal�rio por hora e escreva
o sal�rio total do funcion�rio, que dever� ser acrescido das horas extras, caso tenham sido trabalhadas
(considere que o m�s possua 4 semanas exatas).

*/

int main(){
    //variaveis
    char nome[20];
    int hora,salario;


    printf("=======================/n");
    printf("tabela de funcionarios\n");
    printf("=======================\n");

    printf("DIGITE O NOME DO FUNCIONARIO: ");
    scanf("%s", &nome);

    printf("DIGITE AS HORAS TRABALHADAS:  \n");
    scanf("%d", &hora);

    printf("DIGITE O SALARIO POR HORA: ");
    scanf("%d", &salario);

    if(hora > 40){

        salario = salario +(salario * 0.50);

    }

    printf("======================\n");
    printf("O salario MENSAL DE %s e DE: %d\n",nome,(salario * hora)* 4);
    printf("======================");

    printf("");
    return 0;
}

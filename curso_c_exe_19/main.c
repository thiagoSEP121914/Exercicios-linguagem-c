#include <stdio.h>
#include <stdlib.h>

/*
A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que trabalhar mais
de 40 horas receberá hora extra, cujo cálculo é o valor da hora regular com um acréscimo de 50%.
Escreva um algoritmo que leia o número de horas trabalhadas em um mês, o salário por hora e escreva
o salário total do funcionário, que deverá ser acrescido das horas extras, caso tenham sido trabalhadas
(considere que o mês possua 4 semanas exatas).

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

#include <stdio.h>
#include <stdlib.h>

/*
Escreva um algoritmo para ler o salário mensal
atual de um funcionário e o percentual de reajuste.
Calcular e escrever o valor do novo salário.
*/

int main(){
    //variaveis locais
    float wage,new_wage;
    int percentage;

    fazol();
    printf("SALARIO MENSAL \n");
    printf("Digite o salario do funcionario: ");
    scanf("%f", &wage);
    printf("Percentual de reajuste:");
    scanf("%d", &percentage);

    new_wage = (percentage * wage)/100;

    printf("O salario foi reajustado em %d\nO novo salario em Reais e R$%.3f", percentage,new_wage + wage);


    return 0;

}


// funcoes
void fazol(){
    const maxlenght = 50;

    for(int i = 1; i< maxlenght; i++ ){
        printf("=");

    }
    printf("\n");
}

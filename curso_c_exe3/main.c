#include <stdio.h>
#include <stdlib.h>

/*
um programa que retorna a idade da pessoa em dias
*/
int main(){
    //variaveis
    int year,month,days,age,count_days;
    int current_year = 2023;
     // Solicitar a entrada formatada

    printf("Digite sua idade dia/mes/ano: \n");

    //dia
    printf("Dia: ");
    scanf("%d",&days);
    //mes
    printf("mes: ");
    scanf("%d",&month);
    //ano
    printf("ano: ");
    scanf("%d",&year);

    printf("sua data de nascimento: %d/%d/%d/\n", days, month, year);
    age = (current_year - year);
    count_days = (age * 365);
    printf("voce tem %d anos e \n%d dias", age, count_days);
    return 0;
}

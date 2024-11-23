#include <stdio.h>
#include <stdlib.h>

/*
Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor
correspondente em graus Celsius (baseado na fórmula abaixo):
*/
int main(){
    // variaveis
    char caracter;
    float farenheit,celsius;


    printf("==========================\n");
    printf("CONVERSOR DE TEMPERATURA\n");
    printf("==========================\n");

    printf("Digite[1] para converter farenheit para celcius \n");
    printf("Digite[2] para converter de celsius para farenheit \n");
    caracter = getchar();

    switch(caracter){
    case '1':
            printf("Digite a temperatura em farenheit: ");
            scanf("%f", &farenheit);

            celsius = (farenheit - 32)/1.8;
            printf("A temperatura %.0fF em celsius e: %.0fF ", farenheit, celsius);
            break;

        case '2':
            printf("Digite a temperatura em celsius");
            scanf("%f", &celsius);

            farenheit = (celsius * 9.5) + 32;
            printf("A temperatura %.0fC em farenheit e:%.0f ",celsius,farenheit);
            break;

        default:
            printf("OPCAO INVALIDA:");
            break;
    }

    return 0;
}



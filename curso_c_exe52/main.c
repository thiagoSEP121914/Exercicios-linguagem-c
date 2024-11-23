#include <stdio.h>
#include <stdlib.h>

/*

Faça um algoritmo para ler e armazenar em um vetor a temperatura média de todos os dias do ano.
Calcular e escrever:
a) Menor temperatura do ano
b) Maior temperatura do ano
c) Temperatura média anual
d) O número de dias no ano em que a temperatura foi inferior a média anual
*/

int main(){
    // variaveis
    float temper[5],soma = 0 ,media = 0;
    float maior = 0, menor = 9999;
    int cont = 0;

    for(int i =  0; i < 5; i++){

        printf("DIGITE A TEMPERATURA DO DIA: ");
        scanf("%f", &temper[i]);

        soma+= temper[i];


        if(temper[i] > maior){
            maior = temper[i];

        }

        if(temper[i] < menor){
            menor = temper[i];
        }
    }

    media = soma/5;
    for(int i = 0; i < 5; i++){
        if(temper[i] < media){
                cont++;
            }
    }

    printf("\n============================================");
    printf("|\nA MENOR  TEMPERATURA FOI  %0.f", menor);
    printf("|\nA MAIOR TEMPERATURA DO ANO FOI: %0.f", maior);
    printf("|\nA MEDIA DE TEMPERATURA FOI %0.f", media);
    printf("|\nA QUANTIDADE DIA ABAIXO DA TEMPERATURA FOI: %d",cont);
    printf("\n============================================");

    return 0;
}

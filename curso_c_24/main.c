#include <stdio.h>
#include <stdlib.h>
/*
Escreva um algoritmo para ler 2 valores e se o segundo valor informado for ZERO, deve ser lido
um novo valor, ou seja, para o segundo valor não pode ser aceito o valor zero e imprimir o resultado
da divisão do primeiro valor lido pelo segundo valor lido. (utilizar a estrutura REPITA).
*/


int main(){
    //variaveis
    int valor1,valor2;

    printf("Digite um valor: \n");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: \n");
    scanf("%d", &valor2);

    while(valor2 == 0){
        printf("INVALIDO!\nO segundo valor digitado eh zero: \n");
        printf("Digite novamente: ");
        scanf("%d", &valor2);
    }

    printf("A divisao entre %d e %d eh: %d", valor1, valor2, (valor1/valor2));


}

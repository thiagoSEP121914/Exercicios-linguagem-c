#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
faca um algoritimo em c que leia um valor inteiro a apresente o dobro do valor.
use passangens por referencia(altera o valor da variavel em todo o programa)
*/
void referencia(int *valor) {

    *valor = *valor * 2;


}

int dobroporvalor(int valor) {

    int dobro = valor * 2;

    return dobro;

}

int main(){
    int valor1,valor;

    printf("Digite um numero para saber seu dobro: ");
    scanf("%d", &valor);
    valor1 = valor;

    valor = dobroporvalor(valor);
    printf("O  dobro por valor eh: %d\n", valor);
    referencia(&valor1);

    printf("Por referencia: %d", valor1);

    return 0;
}

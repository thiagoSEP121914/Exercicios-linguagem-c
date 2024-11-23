#include <stdio.h>
#include <stdlib.h>
/*
 Uma loja está levantando o valor total de todas as mercadorias em estoque. Escreva um algoritmo
que permita a entrada das seguintes informações: a) o número total de mercadorias no estoque; b) o
valor de cada mercadoria. Ao final imprimir o valor total em estoque e a média de valor das
mercadorias.
*/
int main(){
    //variaveis
    int totn,cont =1,valor,acc;

    printf("MERCADINHO TAVARES\n");

    printf("INSIRA A QUANTIDADE DE MERCADORIA: ");
    scanf("%d", &totn);

    while(cont <= totn){

        printf("DIGITE O VALOR DA %d MERCADORIA: ", cont);
        scanf("%d", &valor);

        acc+= valor;
        cont++;
    }

        printf("A MEDIA DE PRECO EH %d", acc/cont);

    return 0;
}

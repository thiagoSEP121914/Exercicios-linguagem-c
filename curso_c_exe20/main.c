#include <stdio.h>
#include <stdlib.h>

const char* saldo(int x);

/*
) Fa�a um algoritmo para ler: n�mero da conta do cliente, saldo, d�bito e cr�dito. Ap�s, calcular e
escrever o saldo atual (saldo atual = saldo - d�bito + cr�dito). Tamb�m testar se saldo atual for maior
ou igual a zero escrever a mensagem 'Saldo Positivo', sen�o escrever a mensagem 'Saldo Negativo'.
*/

int main(){
    //variaveis
    char numero_conta[20];
    int saldo,debito,credito,saldo_atual;


    printf("=======================\n");
    printf("BANCO TABAJARA\n");
    printf("=======================\n");

    printf("DIGITE O NUMERO DA CONTA: ");
    scanf("%s", &numero_conta);

    printf("DIGITE O SALDO: ");
    scanf("%d", &saldo);

    printf("DIGITE O DEBITO: ");
    scanf("%d", &debito);

    printf("DIGITE O CREDITO DA CONTA: ");
    scanf("%d", &credito);

    saldo_atual = saldo - (debito + credito);

    printf("O saldo atual e:%d \n",saldo_atual);
    printf("%s",salido(saldo_atual));




    return 0;
}

void salido(int x){

    const char* pos_neg = (x > 0) ? "SALDO POSITIVO" : "NEGATIVO";
    return pos_neg;


}

#include <stdio.h>
#include <stdlib.h>

/*
Fa�a um algoritmo para ler dois vetores V1 e V2 de 15 n�meros cada. Calcular e escrever a
quantidade de vezes que V1 e V2 possuem os mesmos n�meros e nas mesmas posi��es.

*/

int main(){
    int vet1[6], vet2[6],cont = 0,k = 0, num;

    for(int i = 0; i < 5; i++){
        printf("DIGITE O .%d NUMERO: ",i+1);
        scanf("%d", &vet1[i]);

    }
    printf("LENDO O SEGUNDO VETOR\n");
    for(int i = 0; i < 5; i++){

        printf("DIGITE O.%d NUMERO: ", i);
        scanf("%d", &vet2[i]);
    }

    printf("Digite mais um numero: ");
    scanf("%d", &num);

    for(int i = 0; i < 5; i++){

        if(vet1[i] == vet2[i]){
            cont++;
        }
        if(num == vet1[i] || num == vet2[i]){
            k++;
        }

    }

    printf("A quantidade de vezes que os vetores possuem \nos mesmo numero na mesma posicao eh: %d", cont);
    printf("A quantidade que o numero: %d se repete eh : %d", num, k);

    return 0;
}

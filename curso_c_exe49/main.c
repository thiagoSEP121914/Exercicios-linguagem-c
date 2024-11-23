#include <stdio.h>
#include <stdlib.h>


/*
Ler um vetor A de 10 números. Após, ler mais um número e guardar em uma variável X.
Armazenar em um vetor M o resultado de cada elemento de A multiplicado pelo valor X. Logo após,
imprimir o vetor M
*/

int main(){
    //variaveis
    int num[5],num2[5],x;


    for(int i = 0; i < 5; i++){

        printf("DIGITE UM NUMERO: ");
        scanf("%d", &num[i]);

    }

    printf("DIGITE MAIS UM NUMERO: ");
    scanf("%d", &x);

    for(int i = 0; i < 5; i++){

        printf("%d x %d = %d\n", num[i], x, num[i] * x);
        num2[i] = num[i] * x;
    }
    printf("O RESULTADO FOI SALVO EM UM VECTOR");

    for(int i = 0; i < 5; i++){
        printf("\n%d", num2[i]);

    }

    return 0;
}

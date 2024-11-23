#include <stdio.h>
#include <stdlib.h>

int maior_valor(int x, int y, int z);

int main(){
    //variaveis
    int num1,num2,num3,maior;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero:  ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    maior = maior_valor(num1,num2,num3);

    printf("Os numero digitados foram, %d, %d, %d \n",num1,num2,num3);
    printf("O maior valor digitado foi: %d", maior);
    return 0;

}

int maior_valor(int x, int y, int z){

    /*retorna o maior valor
    de tres parametros pasaados.
    */
    if (x > y && x > z){
        return x;

    }

    if (y > x && y > z){
            return y;
        }
    if (z > x && z > y){
            return z;

    }else{
        return -1;

    }

}

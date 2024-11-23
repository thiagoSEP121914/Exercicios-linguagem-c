#include <stdio.h>
#include <stdlib.h>

//15) Ler um valor e escrever se é positivo ou negativo (considere o valor zero como positivo).
int main(){

   //variaveis
   int number;

   printf("Digite um valor: ");
   scanf("%d", &number);

    if (number > 0){
        printf("O numero %d e positivo!",number);

    }else{

        printf("O numero %d e negativo!",number);
    }

    return 0;

}

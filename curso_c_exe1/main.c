#include <stdio.h>
#include <stdlib.h>

int main(){
    //variables
    int number1,number2;

    printf("Digite dois numeros para saber se a soma � par: \n");
    printf("Digite o primeiro numero: ");
    scanf("%d",&number1);
    printf("Digite o segundo numero:  ");
    scanf("%d",&number2);

    if ((number1 + number2)% 2 == 0) {
        printf("O numero %d eh PAR \n",(number1 + number2));

    }
    else{
        printf("O numero � impar\n");

    }
    return 0;
}

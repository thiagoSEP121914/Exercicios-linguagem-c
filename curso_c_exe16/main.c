#include <stdio.h>
#include <stdlib.h>

void fibonacci(int quantidade){

    //VARRIAVEIS
    int first_number = 0,second_number = 1,next_term;

    printf("SEQUENCIA DE FIBONACCI\n");

    for(int i = 0; i < quantidade+1;i++){

        printf("%d (%d)\n", first_number,i);

         next_term = first_number + second_number;

         first_number = second_number;
         second_number = next_term;


    }

    return 0;
}

int main(){
    //variaveis
    int x;

    printf("Digite a quantidade de numeros que deseja ver: ");
    scanf("%d", &x);

    fibonacci(x);

}

#include <stdio.h>
#include <stdlib.h>
/*
Escreva um algoritmo que imprima a tabuada (de 1 a 10) para os números de 1 a 10.
*/
int main(){


    printf("TABUADOL\n");

    for(int i = 1; i < 11;i++){
        printf("TABUADO DO %d", i);

        for(int j = 1; j < 11; j++){
            printf(" %d X %d = %d\n", i, j, i * j);
        }

    }
    return 0;
}

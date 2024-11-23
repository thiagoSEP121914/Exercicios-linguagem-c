#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

9. Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o enderec¸o de cada posic¸ao dessa matriz.

*/

int main() {
    float matriz[3][3];
    float (*ptr)[3] = &matriz;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%p",(void*)ptr++);
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}

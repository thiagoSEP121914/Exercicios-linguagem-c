#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
    int vetor[3] = {1,2,3};
    int *ponteiro = vetor;

    *(ponteiro + 1)  = 20;
    printf("%d", *(ponteiro + 1) );

    return 0;
}

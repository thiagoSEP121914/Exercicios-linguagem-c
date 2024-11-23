#include <stdio.h>
#include <stdlib.h>


void frac(float num, int *inteiro, float *frac ) {
    *inteiro = (int)num;
    *frac = num - *inteiro;

}

int main() {
    float num = 0;
    float fracionaria;
    int inteiro;

    printf("Digite um numero: ");
    scanf("%f", &num);

    frac(num,&inteiro,&fracionaria);

    printf("Parte inteira: %d\n", inteiro);
    printf("Parte fracionaria: %.2f",fracionaria);

    return 0;
}

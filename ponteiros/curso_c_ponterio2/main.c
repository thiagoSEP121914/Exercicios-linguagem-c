#include <stdio.h>
#include <stdlib.h>



int main() {
    int x = 10;
    double y = 20.50;
    char z = 'a';
    int *ponteirox;
    ponteirox = &x;
    double *py = &y;
    char *pz = &z;


    printf("Endereco x = %d - Valor de x = %d\n", ponteirox, *ponteirox);
    printf("Endereco de y = %d - valor de y = %5.f\n", py, *py);
    printf("Endereco de z = %d - valor de z = %c\n", pz, *pz);

    return 0;
}

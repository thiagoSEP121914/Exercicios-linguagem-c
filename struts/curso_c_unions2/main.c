#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union Exemplo {
    int numero;
    struct {
        bool bit1 :1;
        bool bit2 :1;
        bool bit3 :1;
        bool bit4 :1;

    } bits;
};


int main() {

    union Exemplo exeu;
    exeu.numero = 10;

    printf("%d\n",exeu.numero);
    printf("Em binarios: %d %d %d %d", exeu.bits.bit1,exeu.bits.bit2,exeu.bits.bit3, exeu.bits.bit4);
    return 0;
}

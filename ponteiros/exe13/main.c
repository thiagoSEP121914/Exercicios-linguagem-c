#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Fac¸a um programa que leia tres valores
inteiros e chame uma func¸ ˆ ao que receba estes 3 ˜
valores de entrada e retorne eles ordenados, ou seja,
o menor valor na primeira variavel, ´o segundo menor
valor na variavel do meio, e o maior valor na ´ ultima vari ´ avel. A func¸ ´ ao˜
deve retornar o valor 1 se os tres valores
forem iguais e 0 se existirem valores diferentes. ˆ
Exibir os valores ordenados na tela
*/
#include <stdio.h>

int retorno(int *var1, int *var2, int *var3) {
    int temp;

    if (*var1 > *var2) {
        temp = *var1;
        *var1 = *var2;
        *var2 = temp;
    }

    if (*var2 > *var3) {
        temp = *var2;
        *var2 = *var3;
        *var3 = temp;
    }

    if (*var1 > *var2) {
        temp = *var1;
        *var1 = *var2;
        *var2 = temp;
    }

    if (*var1 == *var2 && *var2 == *var3) {
        return 1; // Todos são iguais
    } else {
        return 0; // Existem valores diferentes
    }
}

int main() {
    int x = 30, y = 20, z = 10;
    int iguais = 0;

    iguais = retorno(&x, &y, &z);

    printf("Os valores ordenados são: %d, %d, %d\n", x, y, z);

    if (iguais) {
        printf("Os valores são iguais!\n");
    } else {
        printf("Os valores são diferentes!\n");
    }

    return 0;
}

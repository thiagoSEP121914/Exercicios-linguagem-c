#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
As unions (uni�es) em linguagem de programa��o, como C,
s�o estruturas de dados que permitem armazenar diferentes tipos de dados em um mesmo espa�o de mem�ria.
A principal caracter�stica das unions � que todos os campos compartilham o mesmo espa�o, e apenas
um campo pode ser utilizado por vez.
Isso significa que a union tem o tamanho do maior tipo de dado que ela cont�m.

*/

typedef union {
    int inteiro;
    float real;
    char caracter;

}exemplounion;



int main() {

    exemplounion uniao;

    uniao.inteiro = 10;
    printf("%d\n", uniao.inteiro);
    // o terminal retornara 10.

    uniao.real = 20;
    printf("%f\n", uniao.real);
    // a variavel sera atualizada e o espa�o de memoria tera apenas o valor de real

    uniao.caracter = 'A';
    printf("%c\n", uniao.caracter);
    // agora o espaco de memoria tera apenas o caracter 'A'


    return 0;
}

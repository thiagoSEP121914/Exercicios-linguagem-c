#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* o * permite acessar o conteudo da variavel apontada
quando comparamos ponteiro1 > ponteiro2 estamos comparando os indices de memoria
enquanto comparamos os conteudos *p > *p estamos comparandos os valores das variaveis apontadas

*/
int main() {

  int *p, *p1, x = 11, y = 10;
  p = &x;
  p1 = &y;

    if(p > p1)
        printf("O ponteiro de p aponta para um endereco maior que p1\n");
    else
        printf("O ponteiro de p1 aponta para um endereco maior que op de p\n");
    if(*p > *p1)
        printf("O ponteiro p eh maior que p1\n");
    else
        printf("O ponteiro p1 eh maior que o p\n");

    getchar();

    return 0;

}

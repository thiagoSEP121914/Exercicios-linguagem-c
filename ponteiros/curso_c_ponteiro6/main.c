#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void testevariavel(int x) {
    ++x;
}


void testeponterio(int *x) {
    ++*x;

}

int main(){
    int teste = 1;
    int *pTeste = &teste;

    testevariavel(teste);
    testeponterio(pTeste);

    printf("%d\n", teste);
    printf("%d", *pTeste);

    getchar();

    return 0;
}

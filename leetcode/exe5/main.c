#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// sequencia de fibonacci.

void fibonacci() {

    int aux = 0;
    int a = 1;
    int b = 0;

    for(int i = 0;i < 10; i++){
        printf("%d", b);
        aux = a + b;
        b = a;
        a = aux;
    }

}


int main() {

    printf("SEQUENCIA DE FIBONACCI!\n");
    fibonacci();

    getchar();
    return 0;
}

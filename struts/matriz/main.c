#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    int tam = 3;
    int l, c, matriz[tam][tam];

    srand(time(NULL));

    for(l = 0; l < tam; l++){
        for(c = 0; c < tam; c++){
            matriz[l][c] = rand() % 100;
        }
    }

    for(l = 0; l < tam; l++){
        for(c = 0; c < tam; c++){
            if(l == 0 || l == tam -1 || c ==  0 || c == tam - 1){
                printf("#");
            }else {
                printf("%d", matriz[l][c]);
            }
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



int main() {
    int matriz[3][3];
    int c,l = 0;

    srand(time(NULL));

    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++) {
            matriz[l][c] = rand() % 100;
        }
    }
    printf("MATRIZ GERADA\n");

    for(int l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("%d", matriz[l][c]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Escreva um programa que contenha duas variaveis
inteiras. Compare seus enderec¸os e ´
exiba o maior enderec¸o e seu valor.
*/

int main(){
    int x = 12, y = 10;
    int *px, *py;
    px = &x;
    py = &y;

    printf("O endereco de px eh: %p\nO endereco de py: %p\n", px, py);

    if(px > py)
            printf("px reh maior que py.\nO seu valor eh: %d", *px);
    else
            printf("py eh maior que px.\nO o seu valor eh: %d", *py);

    getchar();

    return 0;
}

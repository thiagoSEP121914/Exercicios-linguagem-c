#include <stdio.h>
#include <stdlib.h>

int buscaBinaria(int*list, int tam, int item) {

    int baixo = 0;
    int alto = tam -1;

    while(baixo <= alto){
        int meio = (alto + baixo)/2;
        int chute = list[meio];

        if(chute == item){
            return meio+1;

        } if(chute > item){
            alto = meio -1;

        } else{
            baixo = meio + 1;
        }
    }
    return NULL;
}


int main() {

    printf("Busca Binaria!");

    int lista[] = {1, 3, 5, 7, 9};
    int tam = sizeof(lista)/sizeof(lista[0]);


    printf("O indice do algoritimo eh: %d", buscaBinaria(lista, tam, 3));

    return 0;
}

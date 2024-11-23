#include <stdio.h>
#include <stdlib.h>

//matriz de strings em c

int main(){
    char nomes[5][25];
    int i = 0;
    for(i = 0; i < 5; i++){
        printf("DIGITE UM NOME: ");
        fgets(nomes[i],25, stdin);

    }

    for(int j = 0; j < 5; j++){
        printf("%s", nomes[j]);
    }

    return 0;
}

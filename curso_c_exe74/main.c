#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bublesort(int vet[]){

    int tempr = 0;

    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 5; j++) {
            if(vet[j] > vet[j+1]){
                tempr = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = tempr;
            }
        }

    }


}



int main(){
    int vet[6];

    printf("DIGITE 5 NUMEROS");

    for(int i = 0; i < 5; i++){
        scanf("%d", &vet[i]);
    }

    bublesort(vet);

    for(int i = 0; i < 6; i++){
        printf("%d\n", vet[i]);
    }

    return 0;
}

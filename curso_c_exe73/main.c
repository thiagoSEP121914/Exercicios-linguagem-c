#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
BUBBLE SORT ALGORITIMO
10 NUMEROS E ORDENALOS EM ORDEM CRESCENTES DENTRO DO VETOR
*/

void bublesort(int vet[10]){
    int j = 0, temp = 0;

    for(int i = 0; i < 10; i++){
        for(j = 0; j < 9; j++){
            if(vet[j] > vet[j+1]){
                temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
            }
        }
    }

}



int main(){
    int num[11];


    printf("DIGITE 10 NUMEROS\n");

    for(int i = 0; i < 10; i++){
        scanf("%d", &num[i]);
    }

    bublesort(num);

    for(int i = 0; i < 10; i++){
        printf("%d\n", num[i]);
    }
    return 0;
}

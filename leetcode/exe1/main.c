#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
problema pede que você encontre
dois números no array nums cuja
soma seja igual a um determinado valor target. Você precisa retornar os índices desses dois números como uma lista.
*/

int *twosun(int num[],int size ,int target) {

    int i,j;
    int num1 = -1;
    int num2 = -1;
    static int vec[2];
    int boole = 0;

    for(j = 0; j < size; j++){
        for(i = 0; i < size; i++){
            if(num[j] + num[i] == target){
                num1 = j;
                num2 = i;
                boole = 1;
                break;
            }
        }
    }
    if(boole == 1){
        vec[0] = num1;
        vec[1] = num2;
        return vec;
    } else {
        return NULL;
    }
}


int main(){
    int num[4] = {2,7,11,15};
    int *vetor = twosun(num, 4, 9);

    if(vetor != NULL){
        printf("A saida eh: [%d, %d]",vetor[0], vetor[1]);
    }else {
        printf("NAO ENCONTRADO!\n");

    }
    getchar();

    return 0;
}

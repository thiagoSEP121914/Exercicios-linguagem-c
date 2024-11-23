#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
. Elabore uma func¸ao que receba duas strings como par ˜ ametros e verifique se a segunda ˆ
string ocorre dentro da primeira. Use aritmetica de ponteiros para acessar os caracteres ´
das strings.
*/


int existe(int *vet1, int *vet2, int tam) {

  char *pt1 = vet1;
  char *pt2 = vet2;

  for(int i = 0; i < strlen(vet1); i++){
        if(*pt1 == *pt2) {
            pt2++;
            if(*pt2 == '\0'){
                return 1;
            }
        }
        pt1++;
  }
    return 0;
}


int main(){
    char palavra1[50] = "Ola, mundo";
    char pal2[10] = "cu";
    int tam = strlen(palavra1);
    int buuli;

    if(existe(palavra1,pal2,tam))
        printf("A string existe!");
    else
        printf("A string nao existe!");

    getchar();
    return 0;
}

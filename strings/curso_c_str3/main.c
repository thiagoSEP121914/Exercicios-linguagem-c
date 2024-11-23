#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Escreva uma função que concatena duas strings.
*/
void concat(char str1[], char str2[], char str3[]){
    int tam1 = strlen(str1);
    int tam2 = strlen(str2);
    int i = 0;

    for(i = 0; i < tam1; i++){
        str3[i] = str1[i];

    }

    for(int j = 0; j < tam2; j++){
        str3[i + j] = str2[j];

    }
    str3[i+tam2] = '\0';
}


int main(){
    char p1[] = "ola";
    char p2[] = "mundo";
    char p3[50];

    concat(p1, p2, p3);
    printf("A primeira palavra eh:%s \n", p1);
    printf("A segunda palavra eh: %s\n", p2);
    printf("A palavra concatenada eh: %s", p3);

    return 0;
}

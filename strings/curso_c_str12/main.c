#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
 maiusculas e minusculas
*/
void maiuscula(char str[]) {

    int i = 0;

    while(str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }
}

void minuscula(char str[]) {

    int i = 0;
    while(str[i] != '\0'){
        str[i] = tolower(str[i]);
        i++;
    }

}



int main(){
    char vet[] = "ola mundo";

    maiuscula(vet);
    printf("%s", vet);

    minuscula(vet);
    printf("\n%s", vet);


    return 0;
}

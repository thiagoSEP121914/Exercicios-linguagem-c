#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// palindromos
//funcoes usadas

char* contrario_palavra(char str[]);
int tamanhostring(char *str);

int main(){
    // variaveis
    char palavra[40];
    char* invertida;
    int cont = 0, j = 0;

    printf("DIGITE UM PALAVRA\n");
    scanf("%s", &palavra);

    printf("A PALAVRA DIGITA FOI %s\n", palavra);

    // setando o tamanho da str
    cont = tamanhostring(palavra);

    printf("O TAMANHO DA PALAVRA EH: %d\n", cont);

    // invertendo a stre e passando para uma copia
    invertida = contrario_palavra(palavra);

    printf("A PALAVRA AO CONTRARIO EH: %s", invertida);


    for(int i = 0; i < strlen(palavra); i++){

        if(palavra[i] == invertida[i]){
            j++;


        }

    }

    if(j == strlen(palavra)){
        printf("\nA PALAVRA DIGITADA EH UM PALINDROMO");

    }
    return 0;
}




int tamanhostring(char *str){

    int tamanho = 0,i = 0;

    while(str[i] != '\0'){
        i++;
        tamanho++;


    }
    return tamanho;
}


char* contrario_palavra(char str[]){

    //variaveis de controle
    int j,tamanho = 0, i = 0,fim = 0;
    //tamanho da string recebida de parametro
    while(str[i] != '\0'){

        i++;
        tamanho++;

    }
    //alocaçao dinamica

    char *novo = malloc((tamanho + 1) * sizeof(char));

    fim = tamanho -1;
    //laçao que inverte os vetores
    for(j = 0; j < tamanho; j++){

        novo[fim] = str[j];
        fim--;

    }
    novo[j] = '\0';

    return novo;

}

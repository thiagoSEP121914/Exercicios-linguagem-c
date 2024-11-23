#include <stdio.h>
#include <stdlib.h>

//palindromo2;
void juntar(char palavra[]){
    int tam = strlen(palavra);
    int aux = 0;

    for(int i = 0; i < tam; i++){
        if(palavra[i] != ' '){
            palavra[aux] = palavra[i];
            aux++;
        }

    }


}

int palindromo(char palavra[]){
    int tam = strlen(palavra);
    int j =  tam - 1, cont = 0;

    for(int i = 0; i < tam; i++){
        if(palavra[i] != palavra[j]){
            return 0;

        }
        j--;
    }
    return 1;
}

int main() {
    //variaveis
    char palavra[50];
    char copia[50];


    printf("DIGITE UMA PALAVRA: ");
    scanf("%s", palavra);

    getchar();

    printf("\nDigite uma palavra: ");
    fgets(copia,50, stdin);

    juntar(copia);

    printf("A PALVRA JUNTA EH: %s\n", copia);

    printf("tamanho usando scan: %d\n", strlen(palavra));
    printf("tamanho usando o fgts: %d\n", strlen(copia));

    if(palindromo(palavra)){
        printf("eh um palindromo");

    }else{
        printf("nao eh um palindromo");
    }
    return 0;
}



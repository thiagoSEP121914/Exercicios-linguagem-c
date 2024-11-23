#include <stdio.h>
#include <stdlib.h>
//buscando uma substring com a funcao strstr
// maiusculas e minusculas
// strupr()
// strlwr()

int main(){
    char palavra[50] = "bom dia com simpatia";
    char str[] = "dia";
    char *ponteiro;



    printf(palavra);

    ponteiro = strstr(palavra, str);

    if(ponteiro){
         printf("\n%c%c%c\n", *ponteiro, *(ponteiro +1), *(ponteiro + 2));
    }else{
        printf("PONTEIRO NAO EXISTE\n");
    }

    printf("MAIUSCULA: %s\n", strupr(palavra));
    printf("minuscula: %s", strlwr(palavra));
    return 0;
}

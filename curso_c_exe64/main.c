#include <stdio.h>
#include <stdlib.h>
/*
funcoes uteis
#include <strin.h>;
strlen() = delvolve em um inteiro o tamanho da string;
strcat(palavra, string a ser adicionada) = delvolve a string concatenada;
strcmp() = compara duas string
=> 0 quando as str forem iguais;
=> 1 quando a primeiras str for menor que a segunda
=> -1 quando a segunda str for menor que a primeira
strcpy(vetor destino, vetor que  sera copiado) cria uma copia da str
strchr() retorna a primeira ocorrencia de um caractere em um string
strrchr() retorna a ultima ocorrencia de uma caractere em string

*/
void juntar(char palavra[]) {
    int tam = strlen(palavra);
    int j = 0;

    for(int i = 0; i < tam; i++) {
        if (palavra[i] != ' ') {
            palavra[j++] = palavra[i];
        }
    }
}

int main() {
    char palavra[50];
    char p1[50];
    char p2[50];

    printf("DIGITE UMA PALAVRA: ");
    fgets(palavra, 50, stdin);

    juntar(palavra);

    printf("palavra sem os espacos: %s\n",palavra);

    printf("DIGITE UMA PALAVRA: ");
    fgets(p1, 50, stdin);

    printf("DIGITE OUTRA PALAVRA: ");
    fgets(p2, 50, stdin);

    printf("A PALAVRA CONCATENADA EH: %s\n", strcat(p1, p2));

    return 0;
}

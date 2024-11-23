#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// numeros romanos para inteiros
int conversao(char c) {

    switch(c) {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default: return 0;
    }
}


int romanoInteiro(char *s) {

    int resultado = 0;

    for(int i = 0; i < strlen(s); i++) {

        int atual = conversao(s[i]);
        int proximo = (i+1 < strlen(s))? conversao(s[i+1]) : 0;

        if(atual < proximo) {
            resultado+= proximo - atual;
        } else {
            resultado+= atual;
        }

    }

    return resultado;

}


int main() {
    char romano[] = "XII";
    int inteiro = romanoInteiro(romano);

    printf("O numero romano %s em inteiro eh %d", romano, inteiro);

    getchar();
    return 0;
}

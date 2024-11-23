#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// numero palindromo

int palindromo(int x) {
 int original = x;
 int reverse = 0;

    while(x){
        int digit = x % 10; // obtem o modulo 123 / 10 que 3(a variavel x vai sendo dividido por na proxima iteracao ele sera 12)
        reverse = reverse * 10 + digit; // acumula o reverse e multipllica por 10 e soma com o ultimo digito acumulando no reverse
        x/= 10;// vai quebrando o numero ate que seja 0 para que seja possivel da fim a o laco
    }

    if(reverse == original) {// compara a var reversa com 123 que foi mantida intancata na roiginal caso seja retorna 1
        return 1;
    }

    return 0;
}


int main(){
    int num = 123;
    //int pali = palindromo(num);

    if(palindromo(num))
        printf("O numero eh um palindromo");
    else
        printf("O numero nao eh um palindromo");

   getchar();
    return 0;
}

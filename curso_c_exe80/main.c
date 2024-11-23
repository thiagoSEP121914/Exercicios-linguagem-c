#include <stdio.h>
#include <stdlib.h>

/*
recursividade e quando chamamos uma funcao dentro dela mesma
*/

int fatorial(int num) {

  if(num == 0 || num == 1) {
    return 1;
  }else {
        return num * fatorial(num - 1);

  }


}

int main(){
    int numero = 0;
    int fatori;

    printf("DIGITE UM NUMERO PARA SABER O FATORIAL: ");
    scanf("%d", &numero);

    fatori = fatorial(numero);

    printf("O FATORIAL DE %d EH %d",numero,fatori);

    return 0;
}

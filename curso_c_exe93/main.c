#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// fatorial


void fatoria(int *num) {

    int x = 1;;
    for(int i = 1; i <= *num;i++){

        x *= i;
    }
    *num = x;
}


void elevado(int *n,int quantidade) {
    int x = *n;
    for(int i = 1; i < quantidade; i++){
        x *= *n;
    }
    *n = x;

}

int main(){
    int numero = 0;

   printf("Digite um valor para saber o fatorial:");
   scanf("%d", &numero);

   fatoria(&numero);

   printf("O fatorial eh: %d\n", numero);

   elevado(&numero,2);

   printf("O numero elevado eh: %d", numero);

  return 0;

}

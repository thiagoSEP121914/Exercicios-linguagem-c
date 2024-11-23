#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* numero palindromo
*/


int palindromo(int x[], int tam) {

    int copia[tam];
    int i,j;
    int count  = 0;
    j = tam -1;
    memcpy(copia, x, tam * sizeof(int));

    for(i = 0; i < tam; i++){
        if(x[i] == copia[j]) {
            count ++;
        }
        j--;
    }
    if(count == tam){
        return 1;
    }
    return 0;
}



int main() {
   int numero[3] = {1,2,1};
   int bule = 0;
   int tam = sizeof(numero)/sizeof(numero[0]);

   bule = palindromo(numero, tam);

   if(bule){
        printf("o numero e um palindromo!");
   } else {
        printf("O numero nao eh um palindromo");
   }

  getchar();
  return 0;

}

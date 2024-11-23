#include <stdio.h>
#include <stdlib.h>




int main() {
   int vet[5];
   int *ptv = vet;

   for(int i = 0; i < 5; i++){
        printf("Digite o %d numero:",i+1);
        scanf("%d", &ptv[i]);
   }
   ptv = vet;
    for(int i = 0; i < 5; i++){
        printf("O dobro de %d", i+1,ptv[i] *2);


    }

    getchar();
     return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo para ler um valor (do teclado)
e escrever (na tela) o seu antecessor.
*/
int main(){
  int area,base;

    writel();
    printf("Calcular area do retangulo \n");
    printf("Digite a base do retangulo: ");
    scanf("%d", &area);
    printf("Digite a altura do retangulo: ");
    scanf("%d", &base);

    printf("A area do retangulo e: %d ", area * base );
    return 0;
}
// procedimento formatação de escrita "=="


void writel(){

    const int maxlenght = 40;

    for(int i = 0;i< maxlenght; i++){
        printf("=");

    }
    printf("\n");
}

#include <stdio.h>
#include <stdlib.h>

int main(){
    //variaveis
    int lado1,lado2,lado3;



    printf("TRIANGULO\n");


    printf("DIGITE OS LADOS DO TRIANGULO: \n");
    printf("LADO1: ");
    scanf("%d",&lado1);

    printf("LADO2: ");
    scanf("%d",&lado2);

    printf("LADO3: ");
    scanf("%d",&lado3);

    printf("======================\n");
    if (triangulo(lado1,lado2,lado3)){

        printf("E UM TRIANGULO:  ");

    }else{

        printf("NAO E UM TRIANGULO : ");

    }
    return 0;
}
int triangulo(int a, int b,int c){

    if(a + b > c && b + c > a && a + c > b){

        return 1;

    }else{

        return 0;

    }

}

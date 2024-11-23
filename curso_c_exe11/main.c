#include <stdio.h>
#include <stdlib.h>

int main(){

    //variaveis
    int num1,logico;


    printf("Digite um valor para saber se eh positivo ou negativo:  \n");
    scanf("%d", &num1);

    logico = maior_menor(num1);

    if (logico > 0){

        printf("O valor %d, e positivo: ", num1);
    }else if (logico < 0){
        printf("O numero %d é negativo: ", num1);

    } else{

        printf("O numero eh zero.");
    }


    return 0;
}

int maior_menor(int x){

    if(x > 0){
        return 1;
    } else if(x < 0){
        return -1;
    }
    else{
        return 0;
    }




}

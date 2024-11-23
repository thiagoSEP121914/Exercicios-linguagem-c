#include <stdio.h>
#include <stdlib.h>

int main(){

    int escolha;
    int litro,valor;

    printf("==============================\n");
    printf("SISTEMA DE POSTO DE GASOLINA\n");
    printf("==============================\n");

    printf("[1] PARA ALCOOL \n");
    printf("[2] PARA GASOLINA \n");
    scanf("%d", &escolha);

   switch(escolha){

    case 1:
        printf("ALCOOL\n");
        printf("QUANTIDADE DE COMBUSTIVEL:  ");
        scanf("%d", &litro);
        if(litro > 20){
            valor = (litro * 3.30);
            valor = valor -(valor * 0.04);

            printf("O VALOR FINAL E : %d", valor);
        }else{

            valor = (litro * 3.30);
            valor = valor - (valor * 0.06);

            printf("O VALOR FINAL E:  %d", valor);



        }
        break;

    case 2:
        printf("GASOLINA \n");
        printf("QUANTIDADE DE COMBUSTIVEL: ");
        scanf("%d", &litro);
        if(litro > 20){

            valor = (litro * 2.90);
            valor = valor -(valor * 0.03);

            printf("O VALOR FINAL E: %d", valor);

        }else{

            valor = (litro * 3.30);
            valor = valor -(valor * 0.5);

            printf("O VALOR FINAL E: %d", valor);

        }

        break;


    }
    return 0;
}

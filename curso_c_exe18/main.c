#include <stdio.h>
#include <stdlib.h>
/*
Ler o sal�rio fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que
ele recebe uma comiss�o de 3% sobre o total das vendas at� R$ 1.500,00 mais 5% sobre o que
ultrapassar este valor, calcular e escrever o seu sal�rio total.
*/
int main(){
    //variaveis
    int salario,tot_vendas;

    printf("====================\n");
    printf("SALARIO DO VENDEDOR \n");
    printf("====================\n");

    printf("Digite o salario da vendedora: ");
    scanf("%d", &salario);

    printf("INfORME O TOTAL DE VENDAS: ");
    scanf("%d", &tot_vendas);

    salario+= (salario * 0.03);

    if(tot_vendas > 1500){

        salario = salario +(salario * 0.5);
    }
    printf("O salario de funcionario foi: %d", salario);


    return 0;
}

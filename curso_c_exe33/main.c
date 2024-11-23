#include <stdio.h>
#include <stdlib.h>
/*
 Ler 10 valores, calcular e escrever a média aritmética desses valores lidos.
 Ler o número de alunos existentes em uma turma e, após isto, ler as notas destes alunos, calcular e
escrever a média aritmética dessas notas lidas
*/
int main(){
   //variaveis
    int cont = 1,qtd;
    float valor, acumulador;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtd);



    while(cont <= qtd){
        printf("Digite  a nota do %d aluno: \n", cont);
        scanf("%f", &valor);
        acumulador+= valor;
        cont++;

    }
    printf("A MEDIA ARITIMETICA DOS ALUNOS SAO: %0.f\nA SOMA TODAL DOS VALORES SAO: %0.f", acumulador/cont, acumulador);

    return 0;


}

#include <stdio.h>
#include <stdlib.h>

/* Escreva um algoritmo para ler o n�mero total de eleitores de um munic�pio, o n�mero de votos
brancos, nulos e v�lidos. Calcular e escrever o percentual que cada um representa em rela��o ao total
de eleitores
*/

int main(){
    // variaveis
    int totals,null,white;

    printf("URNA ELETRONICA\n");
    printf("Digite o totais de voto da urna: ");
    scanf("%d", &totals);
    printf("Digite a quantidade de votos nulos: ");
    scanf("%d",&null);
    printf("Digite a quantiade de votos brancos: ");
    scanf("%d",&white);

    null *= totals/100;
    white *= totals/100;

    printf("%d %% dos votos foram nulos\n",null);
    printf("%d %% dos votos foram brancos",white);

    return 0;

}

//funcoes do programa
void writel(){
    const maxlenght = 40;

    for(int i = 1;i < maxlenght;i++){
        printf("=");

    }
    printf("\n");
}

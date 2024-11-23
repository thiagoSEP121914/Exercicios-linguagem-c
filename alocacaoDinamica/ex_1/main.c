#include <stdio.h>
#include <stdlib.h>


/*
Escreva um programa que solicite ao usuário o tamanho de dois vetores e, em seguida, aloque dinamicamente memória para
armazenar esses vetores. Depois, peça ao usuário
para inserir os elementos dos vetores e calcule a soma dos elementos correspondentes.
Por fim, libere a memória alocada.
*/


void alocar(int **ptr, int **ptr2,int num1, int num2) {

    *ptr = (int *)malloc(num1 * sizeof(int));
    *ptr2 = (int *)malloc(num2 * sizeof(int));

    if(*ptr == NULL){
        printf("Erro na alocacao de memrioa");
    }

    if(*ptr2 == NULL){
        printf("Erro na alocacao de memoria");
    }
}


void prencher(int *vetor1, int *vetor2,int n1, int n2){

    for(int i = 0; i < n1; i++){
        printf("Digite o %d elemento do primeiro vetor: ", i +1);
        scanf("%d", &vetor1[i]);
    }

    for(int i = 0; i < n2; i++){
        printf("Digite o %d elemento do segundo vetor: ", i + 1);
        scanf("%d", &vetor2[i]);
    }
}


int main() {
    int n1, n2, s1, s2, soma;
    int *vet1,*vet2;


    printf("Digite a quantidade de elementos do primeiro vetor: ");
    scanf("%d", &n1);

    printf("Digite a quantidade de elementos do segundo vetor: ");
    scanf("%d", &n2);

    alocar(&vet1, &vet2, n1, n2);
    prencher(vet1, vet2, n1, n2);


    for(int i =0; i < n1; i++){
        s1+= vet1[i];
        for(int j = 0; j< n2;j++){
            s2+= vet2[j];
        }
    }

    soma = s1 + s1;

    printf("A soma dos elementos dos vetores eh: %d", soma);


    free(vet1);
    free(vet2);
    return 0;
}

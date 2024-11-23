#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int elemento;
    struct no *proximo;
}No;

void addInicio (No **lista, int num) {
    No *celula = malloc(sizeof(No));

    if (celula) {
        celula->elemento = num;
        celula->proximo = *lista;
        *lista = celula;
    } else {
        printf("ERROR");
    }
}


void addFim (No **lista, int num) {
    No *aux, *celula = malloc(sizeof(No));

    if (celula) {
        celula->elemento = num;
        celula->proximo = NULL;
        if(*lista == NULL) {
            *lista = celula;
        } else {
            aux = *lista;
            while(aux->proximo) {
                aux = aux->proximo;
            }
            aux->proximo = celula;
        }

    } else {
        printf("DEU MERDA PAI!");
    }

}

void addMeio (No **lista, int ant, int num) {
    No *aux, *celula = malloc(sizeof(No));

    if (celula) {

        celula->elemento = num;

        if (*lista == NULL) {
            celula->proximo = NULL;
            *lista = celula;
        } else {
            aux = *lista;

            while(aux->elemento != ant && aux->proximo) {
                aux = aux->proximo;
            }
            celula->proximo = aux->proximo;
            aux->proximo = celula;
        }

    } else {
        printf("ERRO AO ALOCAR MEMORIA!");
    }

}

void  remover(No **lista, int num) {
    No *aux, *remover = NULL;

    if (*lista) {
        if((*lista)->elemento == num) {
            remover = *lista;
            *lista = remover->proximo;
        } else {
            aux = *lista;

            while (aux->proximo && aux->proximo->elemento != num) {
                aux = aux->proximo;
            }
            if (aux->proximo) {
                remover = aux->proximo;
                aux->proximo = remover->proximo;
            }
        }

    }


}


void imprimirLista (No *lista) {
    printf("[");

    while(lista) {
        printf("%d ", lista->elemento);
        lista = lista->proximo;
    }
    printf("]");
}



int main() {
    No *lista = NULL;

    addFim(&lista, 1);
    addFim(&lista, 2);
    addFim(&lista, 4);
    addMeio(&lista, 2, 3);
    addInicio(&lista, 0);
    remover(&lista, 0);
    imprimirLista(lista);
    return 0;
}

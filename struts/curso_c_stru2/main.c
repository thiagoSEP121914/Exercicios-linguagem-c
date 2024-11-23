#include <stdio.h>
#include <stdlib.h>

struct horario {
    int horas;
    int minutos;
    int segundos;

} teste = {03,33,45};
struct horario agora;

int main() {
    agora.horas = 00;
    agora.minutos = 38;
    agora.segundos = 30;

    printf("RELOGIO TABAJARA\n");
    printf("%d: %d: %d",agora.horas,agora.minutos, agora.segundos);

    printf("\n%d: %d: %d", teste.horas,teste.minutos,teste.segundos);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>




int main(){

    struct horario{
        int hora;
        int minuto;
        int segundo;

    };
    struct horario agora, *depois;
    depois = &agora;

    depois->hora = 10;
    depois->minuto = 10;
    depois->segundo = 10;

    printf("%d: %d:%d\n", agora.hora,agora.minuto, agora.segundo);

    getchar();

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Escreva um trecho de codigo para fazer a criac¸ ´
ao dos novos tipos de dados conforme ˜
solicitado abaixo:
• Horario: composto de hora, minutos e segundos. ´
• Data: composto de dia, mes e ano. ˆ
• Compromisso: composto de uma data, horario e texto que descreve o compromisso.
*/

struct horario {
    int hora;
    int min;
    int seg;

}h;

struct data {
    int dia;
    int mes;
    int ano;

}d;

struct compromisso {
    struct horario h;
    struct data d;
    char texto[200];
}c;

int main() {
   printf("AGENDA TABAJRA\n");
   printf("Digite o horario do compromisso hh mm ss: ");
   scanf("%d %d %d", &h.hora, &h.min, &h.seg);

   printf("Digite  a data dd mm aaaa: ");
   scanf("%d %d %d",&d.dia, &d.mes, &d.ano);
   scanf("%c");

   printf("DESCRICAO: ");
   fgets(c.texto, 200, stdin);

   printf("HORARIO\n%d:%d%:%d", h.hora,h.min, h.seg);
   printf("\nDATA\n%d/%d/%d", d.ano, d.mes,d.ano);
   printf("\nDESCRICAO\n %s", c.texto);

    return 0;
}

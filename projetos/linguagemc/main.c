#include <stdio.h>
#include <stdlib.h>

int main(){
   //variaveis
    char name[50] = "";
    int age;

    //programa principal
    printf("================================\n");
    printf("Digite seu nome: \n");
    scanf("%s", &name);

    printf("Informe sua idade: \n");
    scanf("%d", &age);

    printf("================================\n");
    printf("Seus dados informados foram\n");
    printf("Seu nome e: %s\nSua idade e: %d", name , age);

    return 0;
}

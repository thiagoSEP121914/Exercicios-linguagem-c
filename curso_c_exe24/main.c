#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Fa�a um algoritmo para ler um n�mero que � um c�digo de usu�rio. Caso este c�digo seja
diferente de um c�digo armazenado internamente no algoritmo (igual a 1234) deve ser apresentada a
mensagem �Usu�rio inv�lido!�. Caso o C�digo seja correto, deve ser lido outro valor que � a senha. Se
esta senha estiver incorreta (a certa � 9999) deve ser mostrada a mensagem �senha incorreta�. Caso a
senha esteja correta, deve ser mostrada a mensagem �Acesso permitido�.

*/

int main(){

    char usu[50],entrada[50],login[] = "1234",senha[]= "9999";

    printf("LOGIN SECRETRO DA NAZA\n");

    printf("DIGITE O LOGIN: ");
    scanf("%s", &usu);

    if(stricmp(usu ,login) == 0){

    printf("DIGITE A SENHA: ");
    scanf("%s", &entrada);
        if(stricmp(entrada,senha) == 0){
            printf("ACESSO PERMITIDO!!! ");


        }
            else{
                printf("SENHA INVALIDA: ");
            }

    }
    else{

       printf("LOGIN INVALIDO");

    }
    return 0;
}

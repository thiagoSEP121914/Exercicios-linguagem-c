#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Faça um algoritmo para ler um número que é um código de usuário. Caso este código seja
diferente de um código armazenado internamente no algoritmo (igual a 1234) deve ser apresentada a
mensagem ‘Usuário inválido!’. Caso o Código seja correto, deve ser lido outro valor que é a senha. Se
esta senha estiver incorreta (a certa é 9999) deve ser mostrada a mensagem ‘senha incorreta’. Caso a
senha esteja correta, deve ser mostrada a mensagem ‘Acesso permitido’.

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

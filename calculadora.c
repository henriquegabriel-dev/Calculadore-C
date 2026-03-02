#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
    setlocale(LC_ALL, "");

    char input [100];


    while (1)
    {
        printf("\n\nDigite seus valores e digite suas operações (digite sair, para fechar o programa):\n");
        fgets(input, 100, stdin);

        if(strcmp(input, "sair\n") == 0){
            exit(0);
        }

        int numero_atual = 0;
        char operador;
        int primeiro_numero = 0;

        int primeiro_bloco = 0;
        int conta = 0;

        int i;
        for(i = 0; i < strlen(input); i++){ //*FOR ESTA ESTA PEDENDO A INFORMAÇÃO DO PRIMEIRO NUMERO, SÓ ACEITA UM BLOCO*//

            if(input[i] >= '0' && input[i] <= '9'){     //junta os numeros e os converte de caracteres para numeros.

            numero_atual = numero_atual * 10 + (input[i] - '0');

            }

            else if(input[i] == '+' || input[i] == '-' || input[i] == '/' || input[i] == '*'){      //vai indentificar se tem um operador entre os numeros.
                primeiro_numero = numero_atual;
                operador = input[i];
                numero_atual = 0;
            }

        }
            if(operador == '+'){
                conta = primeiro_numero + numero_atual;
                primeiro_bloco = conta + primeiro_bloco;
            }

            /*else if(operador == '-'){
                conta = primeiro_numero - numero_atual;
                primeiro_bloco + conta;
            }

            else if(operador == '/'){
                conta = primeiro_numero / numero_atual;
                primeiro_bloco + conta;
            }

            else if(operador == '*'){
                conta = primeiro_numero * numero_atual;
                primeiro_bloco + conta;
            }*/

            if(primeiro_bloco >! 0){
                printf("%d", primeiro_bloco);
            }else{
                printf("%d", conta);
            }


    }
        return 0;
}

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
    setlocale(LC_ALL, "");

    char input [100];

    printf("Digite seus valores e digite suas operações:\n");
    fgets(input, 100, stdin);

    int numero_atual = 0;
    char operador;
    int primeiro_numero = 0;

    int primeiro_bloco;
    int conta;


    int i;
    for(i = 0; i < strlen(input); i++){ 

        if(input[i] >= '0' && input[i] <= '9'){     //junta os numeros e os converte de caracteres para numeros.

           numero_atual = numero_atual * 10 + (input[i] - '0');

        }

        else if(input[i] == '+' || input[i] == '-' || input[i] == '/' || input[i] == '*'){
            primeiro_numero = numero_atual;
            operador = input[i];
            numero_atual = 0;
        }
        
    }

        if(operador == '+'){
            conta = primeiro_numero + numero_atual;
        }
    
    printf("%d", conta);

    return 0;
}
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
    setlocale(LC_ALL, "");

    char input [100];

    printf("Digite seus valores e digite suas operações:\n");
    fgets(input, 100, stdin);

    int numero_atual = 0;
    char operador[1];
    int primeiro_numero;

    int primeiro_bloco;

    int i;
    for(i = 0; i < strlen(input); i++){ //junta os numeros e os converte de caracteres para numeros.

        if(input[i] >= '0' && input[i] <= '9'){

           numero_atual = numero_atual * 10 + (input[i] - '0');

        }else if(input[i] == '+'){
            
        }else if(input[i] == '-'){

        }else if(input[i] == '/'){

        }else if(input[i] == '*'){

        }
        
    
    }
    
    return 0;
}
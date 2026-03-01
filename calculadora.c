#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
    setlocale(LC_ALL, "");

    char input [100];

    printf("Digite seus valores e digite suas operações:\n");
    fgets(input, 100, stdin);


    return 0;
}
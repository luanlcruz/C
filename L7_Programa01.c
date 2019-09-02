#include <stdio.h>
#include <strings.h>

int main(){
    char palavra1[50],
         palavra2[50],
         palavra3[50]; // Variaveis para armazenar as cadeias de caracteres

    // Recebimento das cadeias de caracteres
    printf("Digite a 1a. palavra: ");
    gets(palavra1);
    printf("Digite a 2a. palavra: ");
    gets(palavra2);
    printf("Digite a 3a. palavra: ");
    gets(palavra3);

    // Bloco para imprimir as palavras separada por espaço em branco
    printf("\n%s %s %s", palavra1, palavra2, palavra3);
}

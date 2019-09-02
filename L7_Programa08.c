#include <stdio.h>
#include <stdlib.h>

int main(){
    char cadeia[50];   // Variavel para armazenar a cadeia de caracteres
    int qtd = 0,       // Variavel para armazenar a quantidade de caracteres
        vogal,         // Variavel para armazenar se o caractere eh vogal
        naoVogal,      // Variavel para armazenar se o caractere nao eh vogal
        i;             // Contador

    // Recebimento da cadeia
    printf("Digite uma cadeia de caracteres: ");
    gets(cadeia);

    // Identificar a quantidade de caracteres
    for(i = 0; cadeia[i] != '\0'; i++){
        qtd++;
    }

    // Imprime a nova cadeia
    printf("\nNova cadeia: %c", cadeia[0]);
    i = 1;
    while(i < qtd){
        vogal = 0;
        switch (cadeia[i-1]){
            case 'a' :
            case 'e' :
            case 'i' :
            case 'o' :
            case 'u' :
            case 'A' :
            case 'E' :
            case 'I' :
            case 'O' :
            case 'U' :
               vogal = 1;
               break;
        }
        naoVogal = 1;
        switch (cadeia[i]){
            case 'a' :
            case 'e' :
            case 'i' :
            case 'o' :
            case 'u' :
            case 'A' :
            case 'E' :
            case 'I' :
            case 'O' :
            case 'U' :
               naoVogal = 0;
               break;
        }
        if(vogal == 1 && naoVogal == 1){
            printf("%c", '-');
        }
        printf("%c", cadeia[i]);
        i++;
    }
}

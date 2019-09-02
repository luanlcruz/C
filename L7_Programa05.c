#include <stdio.h>


int main(){
    char cadeia[50];   // Variavel para armazenar a cadeia de caracteres
    int  i,            // Contador
         qtd = 0;      // Variavel para armazenar a qtd de caracteres da cadeia

    // Recebimento da cadeia
    printf("Digite uma cadeia de caracteres: ");
    gets(cadeia);

    // Conta a quantidade de caracteres
    for(i = 0; cadeia[i] != '\0'; i++)
        qtd++;

    // Imprime o inverso da cadeia
    printf("\nInverso da cadeia: ");
    for(i = qtd-1; i >= 0; i--)
        printf("%c", cadeia[i]);
}

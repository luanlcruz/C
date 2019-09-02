#include <stdio.h>
#include <strings.h>

int main(){
    char cadeia[100];   // Variavel para armazenar a cadeia de caracteres
    int  qtd = 0,       // Variavel para armazenar a quantidade de caracteres
         i;             // Contador

    // Recebimento da cadeia de caracteres
    printf("Digite uma string: ");
    gets(cadeia);

    // Bloco para contar a quantidade de caracteres digitados
    for (i = 0; cadeia[i] != '\0'; i++){

    }
    printf ("\nQuantidade de caracteres (calculado): %d", i);
    printf ("\nQuantidade de caracteres (funcao): %d", strlen(cadeia));
}

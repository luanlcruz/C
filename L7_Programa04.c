#include <stdio.h>

int main(){
    char cadeia1[50],   // Variavel para armazenar a 1a. cadeia de caracteres
         cadeia2[50],   // Variavel para armazenar a 2a. cadeia de caracteres
         cadeia3[100];  // Variavel para armazenar a concatenacao de 1 e 2
    int  i,             // Contador
         pos = 0;       // Variavel para armazenar o tamanho da cadeia

    // Recebimento das cadeias
    printf("Digite a 1a. cadeia de caracteres: ");
    gets(cadeia1);
    printf("Digite a 2a. cadeia de caracteres: ");
    gets(cadeia2);

    // Coloca a 1a. cadeia na resultante cadeia3
    for(i = 0; cadeia1[i] != '\0'; i++){
        cadeia3[i] = cadeia1[i];
        pos++;
    }

    // Concatena a cadeia 2 com a 1
    for(i = 0; cadeia2[i] != '\0'; i++){
        cadeia3[pos] = cadeia2[i];
        pos++;
    }
    cadeia3[pos] = '\0';

    // Imprime a cadeia resultante
    printf("Cadeia resultante: %s", cadeia3);
}

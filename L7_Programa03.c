#include <stdio.h>

int main(){
    int i,            // Contador
        qtd = 0;      // Variavel para contar a qtd de vogais
    char frase[100];  // Variavel para armazenar a frase como cadeia de caracteres

    // Recebimento da frase
    printf("Digite uma frase: ");
    gets(frase);

    // Bloco para contar as vogais
    for(i = 0; frase[i] != '\0'; i++){
        switch (frase[i]){
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
               qtd++;
               break;
        }
    }

    //Bloco para imprimir a quantidade de vogais
    printf("\nA quantidade de vogais nao acentuadas eh: %d", qtd);
}

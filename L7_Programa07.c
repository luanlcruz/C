#include <stdio.h>
#include <stdlib.h>

int main(){
    char cadeia[50];   // Variavel para armazenar a cadeia de caracteres
    int qtd = 0,       // Variavel para armazenar a quantidade de caracteres
        i, pv = 0;             // Contador

    // Recebimento da cadeia
    printf("Digite uma cadeia de caracteres: ");
    gets(cadeia);

    // Identificar a quantidade de caracteres
    for(i = 0; cadeia[i] != '\0'; i++){
        qtd++;
    }

    // Imprime a nova cadeia
    printf("\nNova cadeia: ");
    i = 0;
    while(i <= qtd){
        printf("%c", cadeia[i]);
        if((cadeia[i] == ' ') || (cadeia[i] == '\0')){
            pv++;
            i++;
            while(cadeia[i] == ' '){
                i++;
            }
        }else{
            i++;
        }
    }
    printf("\nQtd palavras: %d", pv);
}

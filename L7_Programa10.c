#include <stdio.h>
#include <stdlib.h>

int main(){
    char cadeia[50],  // Variavel para armazenar a cadeia de caracteres
         aux[50];     // Variavel para armazenar uma cadeia de caracteres temporaria
    int qtd = 0,      // Variavel para armazenar a quantidade de caracteres
        i, j;         // Contador

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
    j = 0;
    while(i <= qtd){
        if(cadeia[i] == ' ' || cadeia[i] == '\0'){
            aux[j] = '\0';
            i++;
            j = 0;
            printf("%s %s ", aux, aux);
        }else{
            aux[j] = cadeia[i];
            i++;
            j++;
        }
    }
}

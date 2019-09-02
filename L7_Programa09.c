#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char cadeia[51];   // Variavel para armazenar a cadeia de caracteres
    int qtd,           // Variavel para armazenar a quantidade de caracteres
        num,           // Variavel para armazenar o numero aleatorio
        i;             // Contador

    // Recebimento da quantidade elementos da cadeia
    do{
        printf("\nA quantidade deve ser entre 1 e 50");
        printf("\nDigite a quantidade elementos da cadeia: ");
        scanf("%d", &qtd);
    }while(qtd < 1 || qtd > 50);


    srand(time(0));

    // Gera a cadeia
    for(i = 0; i < qtd; i++){
        num = (rand() % (122 - 97 + 1)) + 97;
        cadeia[i] = num;
    }
    cadeia[qtd] = '\0';

    // Imprime a cadeia gerada
    printf("\nCadeia gerada: %s", cadeia);
}

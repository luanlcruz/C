#include <stdio.h>
#include <stdlib.h>

int main(){
    char cadeia[50],   // Variavel para armazenar a cadeia de caracteres
          cad2[50],
         c1,           // Variavel para armazenar o caractere a ser localizado
         c2;           // Variavel para armazenar o caractere a ser substituido
    int  i;            // Contador

    // Recebimento da cadeia
    printf("Digite uma cadeia de caracteres: ");
    gets(cadeia);

    // Recebimento do caractere a ser localizado
    printf("Localizar: ");
    scanf("%c", &c1);

    // Recebimento do caractere a ser substituido
    printf("Substituir por: ");
    scanf("%c", &c2);
    scanf("%c", &c2);

    // Localiza c1 e substitui por c2
    for(i = 0; cadeia[i] != '\0'; i++){
        if (cadeia[i] == c1){
            cad2[i] = c2;
        }else{
            cad2[i] = cadeia[i];
        }
    }
    cad2[i] = '\0';

    // Imprime da nova cadeia
    printf("\nNova cadeia: %s", cad2);
}

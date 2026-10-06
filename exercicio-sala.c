#include <stdio.h>

// while (enquanto) - estrutura de repetição
int main(){
    int numeros;
    int contador = 1;
    int soma = 0;
    int numeroDigitado;
    float media;

    printf("Digite a quantidade de números: ");
    scanf("%d", &numeros);

    while(contador <= numeros){
        printf("Digite o %d numero: ", contador);
        scanf("%d", &numeroDigitado);
        soma += numeroDigitado;
        contador++;
    }
    media = soma/numeros;
    printf("media: %.2f", media);


}
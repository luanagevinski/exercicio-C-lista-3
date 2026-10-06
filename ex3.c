#include<stdio.h>

int main(){
    int numero1, numero2;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    int soma = numero1 + numero2;
    int subtr = numero1 - numero2;
    int mult = numero1 * numero2;
    int div = numero1 / numero2;

    printf("soma: %d\n", soma);
    printf("subtração: %d\n", subtr);
    printf("multiplicação: %d\n", mult);
    printf("divisão: %d\n", div);
    return 0;
}